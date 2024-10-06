# -*- coding: utf-8 -*
from __future__ import print_function
import sys, gc, datetime, re
from select_individual import *
from mutation import *
from common import *

sys.path.extend(['.', '..'])


if __name__ == "__main__":
	seed_path = "yarpgen-programs/"
		
	# first step : collect yarpgen-generated seed program
	seed_generation(seed_path)
	
	# second setp : mutate seed program
	file_paths = all_files_path(seed_path)
	filecount = 0
	#storage all number of mutation
	mutate_all = 0
	start_time = datetime.datetime.now()
	time_limit = True	
	while time_limit:		
		bug_list = {}
		for file_path in file_paths:
			filecount += 1
			#storage the number of mutation of this file
			count_mutant = 0
			iteration_ga_poputation = []
			available_mutators.clear()
			file_list = file_path.split('/')
			real_name = file_list[len(file_list)-1]
			print("**********the test case number is :**********"+real_name)
			file_content = readfilelines1(file_path)

			variable_list.clear()
			all_variable = set()
			file_content_string = ''.join(file_content)

			for sub_content in file_content:
				sub_filecontent = re.split('[(){}:;,.&"\s]\s*', sub_content)
				for var in sub_filecontent:
					if var.startswith('var_') or var.startswith('arr_') or var.startswith('i_'):
						all_variable.add(var)

			for sub_variable in all_variable:
				variable_list.append(sub_variable)

			count_mutate = 0
			mutate_select_order = 0
			specific_mutator = ''
			flagmutate = True

			file_mutator_all = {}

			for each_mutator_type in modifier:
				if each_mutator_type in file_content_string:
					if 'modifier' in file_mutator_all.keys():
						if file_mutator_all['modifier'] < 7:
							file_mutator_all['modifier'] += 1
						else:
							break
					else:
						file_mutator_all['modifier'] = 1

			for each_mutator_type in qualifier:
				if each_mutator_type in file_content_string:
					if 'qualifier' in file_mutator_all.keys():
						if file_mutator_all['qualifier'] < 7:
							file_mutator_all['qualifier'] += 1
						else:
							break
					else:
						file_mutator_all['qualifier'] = 1

			for each_mutator_type in symbol:
				if each_mutator_type in file_content_string:
					if 'symbol' in file_mutator_all.keys():
						if file_mutator_all['symbol'] < 15:
							file_mutator_all['symbol'] += 1
						else:
							break
					else:
						file_mutator_all['symbol'] = 1

			for each_mutator_type in arithmetic:
				if each_mutator_type in file_content_string:
					if 'arithmetic' in file_mutator_all.keys():
						if file_mutator_all['arithmetic'] < 15:
							file_mutator_all['arithmetic'] += 1
						else:
							break
					else:
						file_mutator_all['arithmetic'] = 1

			for each_mutator_type in assignment:
				if each_mutator_type in file_content_string:
					if 'assignment' in file_mutator_all.keys():
						if file_mutator_all['assignment'] < 15:
							file_mutator_all['assignment'] += 1
						else:
							break
					else:
						file_mutator_all['assignment'] = 1

			for each_mutator_type in bit:
				if each_mutator_type in file_content_string:
					if 'bit' in file_mutator_all.keys():
						if file_mutator_all['bit'] < 15:
							file_mutator_all['bit'] += 1
						else:
							break
					else:
						file_mutator_all['bit'] = 1


			for each_mutator_type in logical:
				if each_mutator_type in file_content_string:
					if 'logical' in file_mutator_all.keys():
						if file_mutator_all['logical'] < 15:
							file_mutator_all['logical'] += 1
						else:
							break
					else:
						file_mutator_all['logical'] = 1

			for each_mutator_type in others:
				if each_mutator_type in file_content_string:
					if 'others' in file_mutator_all.keys():
						if file_mutator_all['others'] < 15:
							file_mutator_all['others'] += 1
						else:
							break
					else:
						file_mutator_all['others'] = 1

			for each_mutator_type in relation:
				if each_mutator_type in file_content_string:
					if 'relation' in file_mutator_all.keys():
						if file_mutator_all['relation'] < 15:
							file_mutator_all['relation'] += 1
						else:
							break
					else:
						file_mutator_all['relation'] = 1

			for each_mutator_type in datatype:
				if each_mutator_type in file_content_string:
					if 'datatype' in file_mutator_all.keys():
						if file_mutator_all['datatype'] < 7:
							file_mutator_all['datatype'] += 1
						else:
							break
					else:
						file_mutator_all['datatype'] = 1

			for each_variable in variable_list:
				if 'variable' in file_mutator_all.keys():
					if file_mutator_all['variable'] < 3:
						file_mutator_all['variable'] += 1
					else:
						break
				else:
					file_mutator_all['variable'] = 1


			iteration = 0
			while iteration < 5:
				print('iteration: '+str(iteration))
				iteration += 1
				best_mutator_list = randomGeneration(file_mutator_all,200)

				if iteration ==1:

					# calculate all best_mutator_list
					for ind,ind_type in best_mutator_list.items():
						mutate_all += 1
						count_mutant += 1
						mutant_name = real_name + '_' + str(count_mutant)
						for i in range(len(ind)):
							if ind[i] == '1':
								specific_mutator = mutator_list[i]
								all_mutators[specific_mutator] += 1
						defect_ind = evaltesting(ind,mutant_name,file_path)
						if len(defect_ind) != 0:

							bug_list[ind] = ind_type	

				else:
					if len(bug_list) == 0:
						#calculate all best_mutator_list
						for ind,ind_type in best_mutator_list.items():
							mutate_all += 1
							count_mutant += 1
							mutant_name = real_name + '_' + str(count_mutant)
							for i in range(len(ind)):
								if ind[i] == '1':
									specific_mutator = mutator_list[i]
									all_mutators[specific_mutator] += 1
							defect_ind = evaltesting(ind,mutant_name,file_path)
							if len(defect_ind) != 0:

								bug_list[ind] = ind_type
					else:						
						# calculate the average distance
						best_mutator_list_test = {}
						best_mutator_list_test_vec = []
						#re-calculate the vector of each individual
						for ind,ind_type in best_mutator_list.items():
							difference_list = []
							for bug_ind,bug_mutator_type in bug_list.items():
								bug_ind_ini = [0]*129
								for i in range(len(bug_ind)):
									if bug_ind[i] != ind[i]:
										bug_ind_ini[i] = 1
								bug_ind_diff = list(set(list(set(ind_type).union(set(bug_mutator_type)))).difference(set(list(set(ind_type).intersection(set(bug_mutator_type))))))
								if len(bug_ind_diff) != 0:
									for k in range(len(bug_ind_ini)):
										bug_ind_ini[k] *= int(len(bug_ind_diff))
								difference_list.append(bug_ind_ini)
							
							mutator_score = []
							for num_mutator in range(0,129):
								each_mutator_score = 0
								for each_difference_list in difference_list:
									each_mutator_score += each_difference_list[num_mutator]
								each_mutator_score_float = float(each_mutator_score / len(difference_list))
								mutator_score.append(each_mutator_score_float)
							best_mutator_list_test[ind] = mutator_score
							best_mutator_list_test_vec.append(mutator_score)
							
						print('-----begin select_subdataset-------')						
						sub_dataset = select_subdataset(best_mutator_list_test, 100)
						#evaluate sub_dataset							
						for ind in sub_dataset:
							mutate_all += 1
							count_mutant += 1
							mutant_name = real_name + '_' + str(count_mutant)
							for i in range(len(ind)):
								if ind[i] == '1':
									specific_mutator = mutator_list[i]
									all_mutators[specific_mutator] += 1
							defect_ind = evaltesting(ind,mutant_name,file_path)
							if len(defect_ind) != 0:
								bug_list[ind] = ind_type

				del best_mutator_list
				gc.collect()
				medium_time_all = datetime.datetime.now()
				consum_time_total = medium_time_all - start_time
				if consum_time_total.__ge__(datetime.timedelta(days=0,hours=48,minutes=0,seconds=0)):
					time_limit = False
					break
			
			del file_content
			del all_variable
			gc.collect()
			if bool(1-time_limit):
				break

	if os.path.exists('compilation'):
		shutil.rmtree('compilation')
	if os.path.exists('mutatefile'):
		shutil.rmtree('mutatefile')	

	foveral = open('./statistic.txt','a+')
	mutators_sorted = sorted(all_mutators.items(), key=lambda x: x[1], reverse=True)
	foveral.write('number of yarpgen file :'+str(filecount)+'\n')
	foveral.write('number of evaluate mutation :'+str(mutate_all)+'\n')
	foveral.write('number of generated mutation :'+str(len(GA_population))+'\n'+'number of duplicate :'+str(dupliate)+'\n')
	foveral.write('------------------------'+'\n')
	foveral.write(str(mutators_sorted))
	foveral.write('\n'+'------------------------'+'\n')
	for bug_ind,bug_mutator_type in bug_list.items():
		foveral.write(str(bug_ind)+'\n'+str(bug_mutator_type)+'\n')
	foveral.close()

