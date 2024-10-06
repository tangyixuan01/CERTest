import datetime, random, gc, subprocess, copy, shutil, string, json, clang
import clang.cindex
from common import *
from detection import *

mutator_list = readfilelines('./mutator/mutator_list.txt')
all_mutators = {}
mutator_dic = {}

with open("./mutator/all_mutators.json", 'r', encoding='utf-8') as file:
	all_mutators = json.load(file)
with open("./mutator/mutator_dic.json", 'r', encoding='utf-8') as file:
	mutator_dic = json.load(file)

available_mutators = set()
all_bug_information = []
GA_population = []
dupliate = 0
bugzilla_bug = set()

keywords = readfilelines('./mutator/c++keyword.txt')
modifier = readfilelines('./mutator/modifier.txt')
qualifier = readfilelines('./mutator/qualifier.txt')
symbol = readfilelines('./mutator/symbol.txt')
arithmetic = readfilelines('./mutator/operator-arithmetic.txt')
assignment = readfilelines('./mutator/operator-assignment.txt')
bit = readfilelines('./mutator/operator-bit.txt')
logical = readfilelines('./mutator/operator-logical.txt')
others = readfilelines('./mutator/operator-others.txt')
relation = readfilelines('./mutator/operator-relation.txt')
datatype = readfilelines('./mutator/datatype.txt')
variable_list = []
# clang.cindex.Config.set_library_file('/usr/lib/llvm-17/lib/libclang.so')
cindex = clang.cindex.Index.create()


def mutateind(individual):
	num_determin = random.randint(1,10)
	num_mutate = sum(individual) - num_determin
	index_mutate_individual = []
	index_mutate = set()
	for i in range(len(individual)):
		if individual[i] == 1:
			index_mutate_individual.append(i)
	while len(index_mutate) < num_mutate:
		index_mutate.add(random.choice(index_mutate_individual))
	for i in index_mutate:
		individual[i] = 0
	return individual

def delete_token(mutatortype, tokens, target_token_num):
    source_code = ""
    counter = 0
    for token in tokens:
        if token.spelling in mutatortype:
            counter += 1
            if counter == target_token_num:
                continue
        source_code += token.spelling + ' '

    return source_code


def insert_token(mutatortype, tokens, target_token_num, special_token):
    source_code = ""
    counter = 0
    for token in tokens:
        source_code += token.spelling + ' '
        if token.spelling in mutatortype:
            counter += 1
            if counter == target_token_num:
                source_code += special_token + ' '

    return source_code


def replace_token(mutatortype, tokens, target_token_num, special_token):
    source_code = ""
    counter = 0
    for token in tokens:
        if token.spelling in mutatortype:
            counter += 1
            if counter == target_token_num:
                source_code += special_token + ' '
                continue
        source_code += token.spelling + ' '

    return source_code


def specific_mutation_modifier(mutatortype, mutatorlist, root_node):
    global modifier, datatype, qualifier
    source_code = ""

    tokens = root_node.get_tokens()
    all_modifier_tokens = []
    for token in tokens:
        if token.spelling in mutatortype:
            all_modifier_tokens.append(token.spelling)
    target_token_num = random.randint(1, len(all_modifier_tokens))

    if mutatorlist[0] == 'delete':
        source_code = delete_token(mutatortype, root_node.get_tokens(), target_token_num)
        return source_code

    if mutatorlist[2] == 'modifier':
        special_token = random.choice(modifier)
    elif mutatorlist[2] == 'qualifier':
        special_token = random.choice(qualifier)
    elif mutatorlist[2] == 'datatype':
        special_token = random.choice(datatype)

    if mutatorlist[0] == 'insert':
        source_code = insert_token(mutatortype, root_node.get_tokens(), target_token_num, special_token)
    elif mutatorlist[0] == 'replace':
        source_code = replace_token(mutatortype, root_node.get_tokens(), target_token_num, special_token)

    return source_code


def specific_mutation_symbol(mutatortype, mutatorlist, root_node):
    source_code = ""

    tokens = root_node.get_tokens()
    all_modifier_tokens = []
    for token in tokens:
        if token.spelling in mutatortype:
            all_modifier_tokens.append(token.spelling)
    target_token_num = random.randint(1, len(all_modifier_tokens))
    
    if mutatorlist[0] == 'delete':
        source_code = delete_token(mutatortype, root_node.get_tokens(), target_token_num)
        return source_code

    if mutatorlist[2] == 'symbol':
        special_token = random.choice(symbol)
    elif mutatorlist[2] == 'arithmetic':
        special_token = random.choice(arithmetic)
    elif mutatorlist[2] == 'assignment':
        special_token = random.choice(assignment)
    elif mutatorlist[2] == 'bit':
        special_token = random.choice(bit)
    elif mutatorlist[2] == 'logical':
        special_token = random.choice(logical)
    elif mutatorlist[2] == 'others':
        special_token = random.choice(others)
    elif mutatorlist[2] == 'relation':
        special_token = random.choice(relation)

    if mutatorlist[0] == 'insert':
        source_code = insert_token(mutatortype, root_node.get_tokens(), target_token_num, special_token)
    elif mutatorlist[0] == 'replace':
        source_code = replace_token(mutatortype, root_node.get_tokens(), target_token_num, special_token)

    return source_code


def specific_mutation_variable(mutatortype, mutatorlist, root_node):
    source_code = ""
    tokens = root_node.get_tokens()
    all_modifier_tokens = []

    for token in tokens:
        if token.spelling in mutatortype:
            all_modifier_tokens.append(token.spelling)
    target_token_num = random.randint(1, len(all_modifier_tokens))

    if mutatorlist[0] == 'delete':
        source_code = delete_token(mutatortype, root_node.get_tokens(), target_token_num)
        return source_code

    special_token = random.choice(variable_list)

    if mutatorlist[0] == 'insert':
        source_code = insert_token(mutatortype, root_node.get_tokens(), target_token_num, special_token)
    elif mutatorlist[0] == 'replace':
        source_code = replace_token(mutatortype, root_node.get_tokens(), target_token_num, special_token)

    return source_code


def format_cpp_code(code: str) -> str:
    # Write the code to a temporary file
    with open('temp_code.cpp', 'w') as f:
        f.write(code)

    # Call clang-format using subprocess
    process = subprocess.Popen(['clang-format', 'temp_code.cpp'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    formatted_code, errors = process.communicate()

    if errors:
        print(f"Error formatting code: {errors.decode()}")
        return code  # Return the original code if formatting fails
    
    os.remove("temp_code.cpp")

    return formatted_code.decode()


def mutateprogram(individual, root_node):
	global mutator_list
	for i in range(len(individual)):
		if individual[i] == '1':
			mutatorlist = mutator_list[i].split('_')
			if mutatorlist[1] == 'modifier':
				file_content1 = specific_mutation_modifier(modifier,mutatorlist,root_node)
			if mutatorlist[1] == 'qualifier':
				file_content1 = specific_mutation_modifier(qualifier,mutatorlist,root_node)
			if mutatorlist[1] == 'datatype':
				file_content1 = specific_mutation_modifier(datatype,mutatorlist,root_node)
			if mutatorlist[1] == 'symbol':
				file_content1 = specific_mutation_symbol(symbol,mutatorlist,root_node)
			if mutatorlist[1] == 'arithmetic':
				file_content1 = specific_mutation_symbol(arithmetic,mutatorlist,root_node)
			if mutatorlist[1] == 'assignment':
				file_content1 = specific_mutation_symbol(assignment,mutatorlist,root_node)
			if mutatorlist[1] == 'bit':
				file_content1 = specific_mutation_symbol(bit,mutatorlist,root_node)
			if mutatorlist[1] == 'logical':
				file_content1 = specific_mutation_symbol(logical,mutatorlist,root_node)
			if mutatorlist[1] == 'others':
				file_content1 = specific_mutation_symbol(others,mutatorlist,root_node)
			if mutatorlist[1] == 'relation':
				file_content1 = specific_mutation_symbol(relation,mutatorlist,root_node)
			if mutatorlist[1] == 'variable':
				file_content1 = specific_mutation_variable(variable_list,mutatorlist,root_node)
	final_code = format_cpp_code(file_content1)
	return final_code


def randomGeneration(file_mutator_type,num_individuals):
	#randomly generate individuals
	global GA_population,dupliate,mutator_list,available_mutators,mutator_dic
	num_mutator = 0
	list_individuals = {}
	indivuduals_type = set()
	for k in range(num_individuals):
		print('the number of generation individual is :'+str(k))
		# initialization of all mutators
		individual_list_ini = [0]*129
		mutators_select = []

		#generate available_mutator
		available_mutators.clear()
		for key,value in file_mutator_type.items():
			if key in mutator_dic.keys():
				sel_mutator_list = random.sample(mutator_dic[key],value)
				for each_sel_mutator_list in sel_mutator_list:
					available_mutators.add(each_sel_mutator_list)		
		indivuduals_type.clear()
		if len(available_mutators) > 10:
			num_mutator = random.randint(1,10)
			print('num_mutator is: ' + str(num_mutator))
			mutators_select = random.sample(list(available_mutators),num_mutator)
			print('mutators_select is :'+str(mutators_select))
		else:
			num_mutator = random.randint(1,num_mutator)
			print('num_mutator is: ' + str(num_mutator))
			mutators_select = random.sample(list(available_mutators),num_mutator)
			print('mutators_select is :'+str(mutators_select))
		for each_select_mutator in mutators_select:
			type_mutator = each_select_mutator.split('_')[1]
			if 'modifier' in type_mutator:
				indivuduals_type.add('modifier')
			elif 'qualifier' in type_mutator:
				indivuduals_type.add('qualifier')
			elif 'symbol' in type_mutator:
				indivuduals_type.add('symbol')
			elif 'arithmetic' in type_mutator:
				indivuduals_type.add('arithmetic')
			elif 'assignment' in type_mutator:
				indivuduals_type.add('assignment')
			elif 'bit' in type_mutator:
				indivuduals_type.add('bit')
			elif 'logical' in type_mutator:
				indivuduals_type.add('logical')
			elif 'others' in type_mutator:
				indivuduals_type.add('others')
			elif 'relation' in type_mutator:
				indivuduals_type.add('relation')
			elif 'datatype' in type_mutator:
				indivuduals_type.add('datatype')
			elif 'variable' in type_mutator:
				indivuduals_type.add('variable')
			if each_select_mutator in mutator_list:
				index_mutator = mutator_list.index(each_select_mutator)
				individual_list_ini[index_mutator] = 1
		print('individual_list_ini is :' +str(individual_list_ini))
		if individual_list_ini in GA_population:
			dupliate += 1
		else:
			individual_list_ini_each_str = [str(j) for j in individual_list_ini]
			individual_list_ini_str = ''.join(individual_list_ini_each_str)
			list_individuals[individual_list_ini_str] = list(indivuduals_type)
			GA_population.append(individual_list_ini)	
		del individual_list_ini
		del mutators_select
		gc.collect()

	return list_individuals


def run_cmd_save_errorInformation(cmd,writepath):
	flag_timeout = False
	result_str=''
	
	begintime = datetime.datetime.now()
	print(str(begintime))
	process = subprocess.Popen(cmd, shell=True, stderr=subprocess.PIPE)
	error_f = process.stderr
	errors = error_f.read().decode('utf-8')
	endtime = datetime.datetime.now()
	print(str(endtime))	
	consumtime = endtime - begintime
	if consumtime.__ge__(datetime.timedelta(days=0,hours=0,minutes=0,seconds=5)):
		print('timeout')
		flag_timeout = True
		#print(str(consumtime))
	if errors:
		result_str = errors
	if error_f:
		error_f.close()
	if flag_timeout is False:
		with open(writepath,'w+') as f:
			f.write(str(result_str))
		f.close()
	return flag_timeout


def evaltesting(individual,mutant_name, file_path):
	defect = ''
	source_lines = []
	header_lines = []
	global start_time, mutator_list, bugzilla_bug

	with open(file_path, 'r') as file:
		for line in file:
			if line.startswith('#include'):
				header_lines.append(line)
			else:
				source_lines.append(line)
	source_code = ''.join(source_lines)
	translation_unit = cindex.parse('temp_code.cpp', args=['-x', 'c++'], unsaved_files=[('temp_code.cpp', source_code)])
	mutated_tokens = ''.join(header_lines)

	# translation_unit = cindex.parse(file_path)
	# file_content1 = copy.deepcopy(file_content)
	
	mutated_tokens += mutateprogram(individual, translation_unit.cursor)
	
	# write the mutated program
	if not os.path.exists('mutatefile'):
		os.makedirs('mutatefile')
	else:
		del_file('./mutatefile')
	rewrite_path = './mutatefile/'+mutant_name+'.C'
	
	fmutate = open(rewrite_path,'a+')
	for line in mutated_tokens:
		fmutate.write(line)
	fmutate.close()

	if not os.path.exists('compilation'):
		os.makedirs('compilation')
	else:
		del_file('./compilation')

	cmd1 = 'timeout 15 /usr/bin/g++-11 -c '+ rewrite_path	
	rewrite_path_gcc_1 = './compilation/'+mutant_name+'_gcc.txt'
	flag_timeout_1 = run_cmd_save_errorInformation(cmd1,rewrite_path_gcc_1)

	cmd2 = 'timeout 15 /usr/bin/clang++-10 -c '+ rewrite_path
	rewrite_path_clang_1 = './compilation/'+mutant_name+'_clang.txt'
	flag_timeout_2 = run_cmd_save_errorInformation(cmd2,rewrite_path_clang_1)

	cmd3 = 'timeout 15 /usr/bin/g++ -c '+ rewrite_path
	rewrite_path_gcc_2 = './compilation/'+mutant_name+'_cvs.txt'
	flag_timeout_3 = run_cmd_save_errorInformation(cmd3,rewrite_path_gcc_2)
	
	if os.path.exists('./'+mutant_name+'.o'):
		os.remove('./'+mutant_name+'.o')
	
	write_bug_path = './bug.txt'
	write_diverse_bug_path = './bug-diverse.txt'


	if flag_timeout_1:
		print('timeout')
		defect = 'timeout'
		medium_time_compare_crash = datetime.datetime.now()
		time_compare_crash = medium_time_compare_crash - start_time
		fw_timeout = open(write_bug_path,'a+')
		#1:time 2:path 3:individual 4:mutators 5:cause
		fw_timeout.write(str(time_compare_crash) + '\n')
		fw_timeout.write(rewrite_path + '\n')
		fw_timeout.write(str(individual) + '\n')
		for i in range(len(individual)):
			if individual[i] == '1':
				fw_timeout.write(mutator_list[i]+',')
		fw_timeout.write('\n')
		fw_timeout.write('timeout' + '\n')
		fw_timeout.close()
		if not os.path.exists('timeout'):
			os.makedirs('timeout')
		shutil.copy(rewrite_path,'./timeout/')
		return defect
			
	elif os.path.exists(rewrite_path_gcc_1) and os.path.exists(rewrite_path_clang_1):
		list_dict_gcc = read_error_wrong_Information(rewrite_path_gcc_1,'error:')
		list_dict_clang = read_error_wrong_Information(rewrite_path_clang_1,'error:')
		flagcrash1 = whether_crash(rewrite_path_gcc_1)

		if bool(1-flagcrash1):
			if len(list_dict_gcc) == 0 and len(list_dict_clang) != 0:
				#gcc accept
				print("----find accept invalid-------")
				defect = 'accept-invalid'
				medium_time_compare_crash = datetime.datetime.now()
				time_compare_crash = medium_time_compare_crash - start_time
				fw_accpet = open('./accept-invalid.txt','a+')
				fw_accpet.write(str(time_compare_crash) + '\n')
				fw_accpet.write(rewrite_path + '\n')
				fw_accpet.write(str(individual) + '\n')
				for i in range(len(individual)):
					if individual[i] == '1':
						fw_accpet.write(mutator_list[i]+',')
				fw_accpet.write('\n')
				fw_accpet.write('accept-invalid' + '\n')
				fw_accpet.write(str(list_dict_clang) + '\n')
				fw_accpet.close()
				if not os.path.exists('accept-invalid'):
					os.makedirs('accept-invalid')
				shutil.copy(rewrite_path,'./accept-invalid/')				

			elif len(list_dict_gcc) != 0 and len(list_dict_clang) == 0:	
				#clang accept
				print("----find reject valid-------")
				defect = 'reject-valid'
				medium_time_compare_crash = datetime.datetime.now()
				time_compare_crash = medium_time_compare_crash - start_time
				fw_reject = open('./reject-valid.txt','a+')
				fw_reject.write(str(time_compare_crash) + '\n')
				fw_reject.write(rewrite_path + '\n')
				fw_reject.write(str(individual) + '\n')
				for i in range(len(individual)):
					if individual[i] == '1':
						fw_reject.write(mutator_list[i]+',')
				fw_reject.write('\n')
				fw_reject.write('reject-valid' + '\n')
				fw_reject.write(str(list_dict_gcc) + '\n')
				fw_reject.close()
				if not os.path.exists('reject-valid'):
					os.makedirs('reject-valid')
				shutil.copy(rewrite_path,'./reject-valid/')
			elif len(list_dict_gcc) == 0 and len(list_dict_clang) == 0:	
				print("----valid program-------")

			elif len(list_dict_gcc) != 0 and len(list_dict_clang) != 0:
				# call the function
				result = subprocess.run(['checkdefect'], capture_output=True, text=True)
				diverse = result.stdout
				if len(diverse) > 0:
					print("----find error inconsistence-------")
					defect = 'inconsistent'
					medium_time_compare_diverse = datetime.datetime.now()
					time_compare_diverse = medium_time_compare_diverse - start_time	
					fw_inconsistent = open(write_bug_path,'a+')
					fw_inconsistent.write(str(time_compare_diverse) + '\n')
					fw_inconsistent.write(rewrite_path + '\n')
					fw_inconsistent.write(str(individual) + '\n')
					for i in range(len(individual)):
						if individual[i] == '1':
							fw_inconsistent.write(mutator_list[i]+',')
					fw_inconsistent.write('\n')
					fw_inconsistent.write('inconsistent bug: ' + diverse + '\n')
					fw_inconsistent.close()

					if diverse not in bugzilla_bug:
						bugzilla_bug.add(diverse)
						fw_inconsistent = open(write_diverse_bug_path,'a+')
						fw_inconsistent.write(str(time_compare_diverse) + '\n')
						fw_inconsistent.write(rewrite_path + '\n')
						fw_inconsistent.write(str(individual) + '\n')
						for i in range(len(individual)):
							if individual[i] == '1':
								fw_inconsistent.write(mutator_list[i]+',')
						fw_inconsistent.write('\n')
						fw_inconsistent.write('inconsistent bug: ' + diverse + '\n')
						fw_inconsistent.close()
						if not os.path.exists('inconsistent'):
							os.makedirs('inconsistent')
						shutil.copy(rewrite_path,'./inconsistent/')				

		else:
			print("----find crash-------")
			defect = 'crash'
			write_crash_path_compare = './crash.txt'
			medium_time_compare_crash = datetime.datetime.now()
			time_compare_crash = medium_time_compare_crash - start_time
			fw_crash = open(write_crash_path_compare,'a+')
			fw_crash.write(str(time_compare_crash) + '\n')
			fw_crash.write(rewrite_path + '\n')
			fw_crash.write(str(individual) + '\n')
			for i in range(len(individual)):
				if individual[i] == '1':
					fw_crash.write(mutator_list[i]+',')
			fw_crash.write('\n')
			fw_crash.write('gcc crash' + '\n')
			fw_crash.close()
			if not os.path.exists('crash'):
				os.makedirs('crash')
			shutil.copy(rewrite_path,'./crash/')

	gc.collect()
	return defect
