# -*- coding: utf-8 -*
from __future__ import print_function
import sys,random,os,shutil,gc,subprocess,datetime,re,time,signal,shutil,string,eventlet,io,copy


#from deap import base
#from deap import creator
#from deap import tools


import numpy as np 

#only delete the programs under 'include'
sys.path.extend(['.', '..'])

all_mutators = {
'delete_modifier':0,
'insert_modifier_modifier':0,
'insert_modifier_qualifier':0,
'insert_modifier_datatype':0,
'replace_modifier_modifier':0,
'replace_modifier_qualifier':0,
'replace_modifier_datatype':0,
'delete_qualifier':0,
'insert_qualifier_modifier':0,
'insert_qualifier_qualifier':0,
'insert_qualifier_datatype':0,
'replace_qualifier_modifier':0,
'replace_qualifier_qualifier':0,
'replace_qualifier_datatype':0,
'delete_symbol':0,
'insert_symbol_symbol':0,
'insert_symbol_arithmetic':0,
'insert_symbol_assignment':0,
'insert_symbol_bit':0,
'insert_symbol_logical':0,
'insert_symbol_others':0,
'insert_symbol_relation':0,
'replace_symbol_symbol':0,
'replace_symbol_arithmetic':0,
'replace_symbol_assignment':0,
'replace_symbol_bit':0,
'replace_symbol_logical':0,
'replace_symbol_others':0,
'replace_symbol_relation':0,
'delete_arithmetic':0,
'insert_arithmetic_symbol':0,
'insert_arithmetic_arithmetic':0,
'insert_arithmetic_assignment':0,
'insert_arithmetic_bit':0,
'insert_arithmetic_logical':0,
'insert_arithmetic_others':0,
'insert_arithmetic_relation':0,
'replace_arithmetic_symbol':0,
'replace_arithmetic_arithmetic':0,
'replace_arithmetic_assignment':0,
'replace_arithmetic_bit':0,
'replace_arithmetic_logical':0,
'replace_arithmetic_others':0,
'replace_arithmetic_relation':0,
'delete_assignment':0,
'insert_assignment_symbol':0,
'insert_assignment_arithmetic':0,
'insert_assignment_assignment':0,
'insert_assignment_bit':0,
'insert_assignment_logical':0,
'insert_assignment_others':0,
'insert_assignment_relation':0,
'replace_assignment_symbol':0,
'replace_assignment_arithmetic':0,
'replace_assignment_assignment':0,
'replace_assignment_bit':0,
'replace_assignment_logical':0,
'replace_assignment_others':0,
'replace_assignment_relation':0,
'delete_bit':0,
'insert_bit_symbol':0,
'insert_bit_arithmetic':0,
'insert_bit_assignment':0,
'insert_bit_bit':0,
'insert_bit_logical':0,
'insert_bit_others':0,
'insert_bit_relation':0,
'replace_bit_symbol':0,
'replace_bit_arithmetic':0,
'replace_bit_assignment':0,
'replace_bit_bit':0,
'replace_bit_logical':0,
'replace_bit_others':0,
'replace_bit_relation':0,
'delete_logical':0,
'insert_logical_symbol':0,
'insert_logical_arithmetic':0,
'insert_logical_assignment':0,
'insert_logical_bit':0,
'insert_logical_logical':0,
'insert_logical_others':0,
'insert_logical_relation':0,
'replace_logical_symbol':0,
'replace_logical_arithmetic':0,
'replace_logical_assignment':0,
'replace_logical_bit':0,
'replace_logical_logical':0,
'replace_logical_others':0,
'replace_logical_relation':0,
'delete_others':0,
'insert_others_symbol':0,
'insert_others_arithmetic':0,
'insert_others_assignment':0,
'insert_others_bit':0,
'insert_others_logical':0,
'insert_others_others':0,
'insert_others_relation':0,
'replace_others_symbol':0,
'replace_others_arithmetic':0,
'replace_others_assignment':0,
'replace_others_bit':0,
'replace_others_logical':0,
'replace_others_others':0,
'replace_others_relation':0,
'delete_relation':0,
'insert_relation_symbol':0,
'insert_relation_arithmetic':0,
'insert_relation_assignment':0,
'insert_relation_bit':0,
'insert_relation_logical':0,
'insert_relation_others':0,
'insert_relation_relation':0,
'replace_relation_symbol':0,
'replace_relation_arithmetic':0,
'replace_relation_assignment':0,
'replace_relation_bit':0,
'replace_relation_logical':0,
'replace_relation_others':0,
'replace_relation_relation':0,
'delete_datatype':0,
'insert_datatype_modifier':0,
'insert_datatype_qualifier':0,
'insert_datatype_datatype':0,
'replace_datatype_modifier':0,
'replace_datatype_qualifier':0,
'replace_datatype_datatype':0,
'delete_variable':0,
'insert_variable_variable':0,
'replace_variable_variable':0
}

mutator_list = [
'delete_modifier',
'insert_modifier_modifier',
'insert_modifier_qualifier',
'insert_modifier_datatype',
'replace_modifier_modifier',
'replace_modifier_qualifier',
'replace_modifier_datatype',
'delete_qualifier',
'insert_qualifier_modifier',
'insert_qualifier_qualifier',
'insert_qualifier_datatype',
'replace_qualifier_modifier',
'replace_qualifier_qualifier',
'replace_qualifier_datatype',
'delete_symbol',
'insert_symbol_symbol',
'insert_symbol_arithmetic',
'insert_symbol_assignment',
'insert_symbol_bit',
'insert_symbol_logical',
'insert_symbol_others',
'insert_symbol_relation',
'replace_symbol_symbol',
'replace_symbol_arithmetic',
'replace_symbol_assignment',
'replace_symbol_bit',
'replace_symbol_logical',
'replace_symbol_others',
'replace_symbol_relation',
'delete_arithmetic',
'insert_arithmetic_symbol',
'insert_arithmetic_arithmetic',
'insert_arithmetic_assignment',
'insert_arithmetic_bit',
'insert_arithmetic_logical',
'insert_arithmetic_others',
'insert_arithmetic_relation',
'replace_arithmetic_symbol',
'replace_arithmetic_arithmetic',
'replace_arithmetic_assignment',
'replace_arithmetic_bit',
'replace_arithmetic_logical',
'replace_arithmetic_others',
'replace_arithmetic_relation',
'delete_assignment',
'insert_assignment_symbol',
'insert_assignment_arithmetic',
'insert_assignment_assignment',
'insert_assignment_bit',
'insert_assignment_logical',
'insert_assignment_others',
'insert_assignment_relation',
'replace_assignment_symbol',
'replace_assignment_arithmetic',
'replace_assignment_assignment',
'replace_assignment_bit',
'replace_assignment_logical',
'replace_assignment_others',
'replace_assignment_relation',
'delete_bit',
'insert_bit_symbol',
'insert_bit_arithmetic',
'insert_bit_assignment',
'insert_bit_bit',
'insert_bit_logical',
'insert_bit_others',
'insert_bit_relation',
'replace_bit_symbol',
'replace_bit_arithmetic',
'replace_bit_assignment',
'replace_bit_bit',
'replace_bit_logical',
'replace_bit_others',
'replace_bit_relation',
'delete_logical',
'insert_logical_symbol',
'insert_logical_arithmetic',
'insert_logical_assignment',
'insert_logical_bit',
'insert_logical_logical',
'insert_logical_others',
'insert_logical_relation',
'replace_logical_symbol',
'replace_logical_arithmetic',
'replace_logical_assignment',
'replace_logical_bit',
'replace_logical_logical',
'replace_logical_others',
'replace_logical_relation',
'delete_others',
'insert_others_symbol',
'insert_others_arithmetic',
'insert_others_assignment',
'insert_others_bit',
'insert_others_logical',
'insert_others_others',
'insert_others_relation',
'replace_others_symbol',
'replace_others_arithmetic',
'replace_others_assignment',
'replace_others_bit',
'replace_others_logical',
'replace_others_others',
'replace_others_relation',
'delete_relation',
'insert_relation_symbol',
'insert_relation_arithmetic',
'insert_relation_assignment',
'insert_relation_bit',
'insert_relation_logical',
'insert_relation_others',
'insert_relation_relation',
'replace_relation_symbol',
'replace_relation_arithmetic',
'replace_relation_assignment',
'replace_relation_bit',
'replace_relation_logical',
'replace_relation_others',
'replace_relation_relation',
'delete_datatype',
'insert_datatype_modifier',
'insert_datatype_qualifier',
'insert_datatype_datatype',
'replace_datatype_modifier',
'replace_datatype_qualifier',
'replace_datatype_datatype',
'delete_variable',
'insert_variable_variable',
'replace_variable_variable']

mutator_dic = {
'modifier':['delete_modifier',
'insert_modifier_modifier',
'insert_modifier_qualifier',
'insert_modifier_datatype',
'replace_modifier_modifier',
'replace_modifier_qualifier',
'replace_modifier_datatype'],
'qualifier':['delete_qualifier',
'insert_qualifier_modifier',
'insert_qualifier_qualifier',
'insert_qualifier_datatype',
'replace_qualifier_modifier',
'replace_qualifier_qualifier',
'replace_qualifier_datatype'],
'symbol':['delete_symbol',
'insert_symbol_symbol',
'insert_symbol_arithmetic',
'insert_symbol_assignment',
'insert_symbol_bit',
'insert_symbol_logical',
'insert_symbol_others',
'insert_symbol_relation',
'replace_symbol_symbol',
'replace_symbol_arithmetic',
'replace_symbol_assignment',
'replace_symbol_bit',
'replace_symbol_logical',
'replace_symbol_others',
'replace_symbol_relation'],
'arithmetic':['delete_arithmetic',
'insert_arithmetic_symbol',
'insert_arithmetic_arithmetic',
'insert_arithmetic_assignment',
'insert_arithmetic_bit',
'insert_arithmetic_logical',
'insert_arithmetic_others',
'insert_arithmetic_relation',
'replace_arithmetic_symbol',
'replace_arithmetic_arithmetic',
'replace_arithmetic_assignment',
'replace_arithmetic_bit',
'replace_arithmetic_logical',
'replace_arithmetic_others',
'replace_arithmetic_relation'],
'assignment':['delete_assignment',
'insert_assignment_symbol',
'insert_assignment_arithmetic',
'insert_assignment_assignment',
'insert_assignment_bit',
'insert_assignment_logical',
'insert_assignment_others',
'insert_assignment_relation',
'replace_assignment_symbol',
'replace_assignment_arithmetic',
'replace_assignment_assignment',
'replace_assignment_bit',
'replace_assignment_logical',
'replace_assignment_others',
'replace_assignment_relation'],
'bit':['delete_bit',
'insert_bit_symbol',
'insert_bit_arithmetic',
'insert_bit_assignment',
'insert_bit_bit',
'insert_bit_logical',
'insert_bit_others',
'insert_bit_relation',
'replace_bit_symbol',
'replace_bit_arithmetic',
'replace_bit_assignment',
'replace_bit_bit',
'replace_bit_logical',
'replace_bit_others',
'replace_bit_relation'],
'logical':['delete_logical',
'insert_logical_symbol',
'insert_logical_arithmetic',
'insert_logical_assignment',
'insert_logical_bit',
'insert_logical_logical',
'insert_logical_others',
'insert_logical_relation',
'replace_logical_symbol',
'replace_logical_arithmetic',
'replace_logical_assignment',
'replace_logical_bit',
'replace_logical_logical',
'replace_logical_others',
'replace_logical_relation'],
'others':['delete_others',
'insert_others_symbol',
'insert_others_arithmetic',
'insert_others_assignment',
'insert_others_bit',
'insert_others_logical',
'insert_others_others',
'insert_others_relation',
'replace_others_symbol',
'replace_others_arithmetic',
'replace_others_assignment',
'replace_others_bit',
'replace_others_logical',
'replace_others_others',
'replace_others_relation'],
'relation':['delete_relation',
'insert_relation_symbol',
'insert_relation_arithmetic',
'insert_relation_assignment',
'insert_relation_bit',
'insert_relation_logical',
'insert_relation_others',
'insert_relation_relation',
'replace_relation_symbol',
'replace_relation_arithmetic',
'replace_relation_assignment',
'replace_relation_bit',
'replace_relation_logical',
'replace_relation_others',
'replace_relation_relation'],
'datatype':['delete_datatype',
'insert_datatype_modifier',
'insert_datatype_qualifier',
'insert_datatype_datatype',
'replace_datatype_modifier',
'replace_datatype_qualifier',
'replace_datatype_datatype'],
'variable':['delete_variable',
'insert_variable_variable',
'replace_variable_variable']}


available_mutators = set()
all_bug_information = []
GA_population = []
dupliate = 0
bugzilla_bug = set()
def readfilelines(rewritepath):
	lines = []
	f = open(rewritepath)
	eachline = f.readline().rstrip('\n').rstrip('\r')
	while eachline:
		lines.append(eachline)
		eachline = f.readline().rstrip('\n').rstrip('\r')
	f.close()
	return lines

def readfilelines1(rewritepath):
	lines = []
	f = open(rewritepath)
	eachline = f.readline()
	while eachline:
		lines.append(eachline)
		eachline = f.readline()
	f.close()
	return lines

variablelist = []
start = datetime.datetime.now()


def all_files_path(rootDir):                       
	for root, dirs, files in os.walk(rootDir):
		for file in files:
			file_path = os.path.join(root, file) 
			filepaths.append(file_path)
		for dir in dirs: 
			dir_path = os.path.join(root, dir)
			all_files_path(dir_path)

def mutateind(individual):
	num_determin = random.randint(1,10)
	num_mutate = sum(individual) - num_determin
	count = 0
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
def specific_mutation_modifier(mutatortype,mutatorlist,file_content1):
	index_available_line = []
	# find all available line
	for index_content in range(len(file_content1)):
		for index_mutatortype in range(len(mutatortype)):
			if mutatortype[index_mutatortype] in file_content1[index_content]:
				index_available_line.append(str(index_content)+':'+mutatortype[index_mutatortype])
	#print('length of index_available_lines is: '+str(len(index_available_line)))
	index_spcific_token = random.choice(index_available_line)	
	mutator_line = index_spcific_token.split(':')[0]
	mutator_token = index_spcific_token.split(':')[1]
	#print('yyyyyyyyyyyyyyyyy')
	#print('mutator_line: ' + mutator_line)
	#print('mutator_token: ' + mutator_token)
	#print('yyyyyyyyyyyyyyyyy')
	if mutatorlist[0] == 'delete':
		file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,'')
	elif mutatorlist[0] == 'insert':
		if mutatorlist[2] == 'modifier':
			specific_token = random.choice(modifier)
			insert_token = mutator_token + ' ' +specific_token
			file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
		if mutatorlist[2] == 'qualifier':
			specific_token = random.choice(qualifier)
			insert_token = mutator_token + ' ' +specific_token
			file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
		if mutatorlist[2] == 'datatype':
			specific_token = random.choice(datatype)
			insert_token = mutator_token + ' ' +specific_token
			file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
	elif mutatorlist[0] == 'replace':
		if mutatorlist[2] == 'modifier':
			specific_token = random.choice(modifier)
			file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
		if mutatorlist[2] == 'qualifier':
			specific_token = random.choice(qualifier)
			file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
		if mutatorlist[2] == 'datatype':
			specific_token = random.choice(datatype)
			file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
	return  file_content1	

def specific_mutation_symbol(mutatortype,mutatorlist,file_content1):
	index_available_line = []
	# find all available line
	for index_content in range(len(file_content1)):
		for index_mutatortype in range(len(mutatortype)):
			if mutatortype[index_mutatortype] in file_content1[index_content]:
				index_available_line.append(str(index_content)+':'+mutatortype[index_mutatortype])
	#print('length of index_available_lines is: '+str(len(index_available_line)))
	if len(index_available_line) == 0:
		return file_content1
	else:
		index_spcific_token = random.choice(index_available_line)	
		mutator_line = index_spcific_token.split(':')[0]
		mutator_token = index_spcific_token.split(':')[1]
		#print('yyyyyyyyyyyyyyyyy')
		#print('mutator_line: ' + mutator_line)
		#print('mutator_token: ' + mutator_token)
		#print('yyyyyyyyyyyyyyyyy')
			
		if mutatorlist[0] == 'delete':
			file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,'')
		elif mutatorlist[0] == 'insert':
			if mutatorlist[2] == 'symbol':
				specific_token = random.choice(symbol)
				insert_token = mutator_token + ' ' +specific_token
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
			if mutatorlist[2] == 'arithmetic':
				specific_token = random.choice(arithmetic)
				insert_token = mutator_token + ' ' +specific_token
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
			if mutatorlist[2] == 'assignment':
				specific_token = random.choice(assignment)
				insert_token = mutator_token + ' ' +specific_token
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
			if mutatorlist[2] == 'bit':
				specific_token = random.choice(bit)
				insert_token = mutator_token + ' ' +specific_token
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
			if mutatorlist[2] == 'logical':
				specific_token = random.choice(logical)
				insert_token = mutator_token + ' ' +specific_token
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
			if mutatorlist[2] == 'others':
				specific_token = random.choice(others)
				insert_token = mutator_token + ' ' +specific_token
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
			if mutatorlist[2] == 'relation':
				specific_token = random.choice(relation)
				insert_token = mutator_token + ' ' +specific_token
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
		elif mutatorlist[0] == 'replace':
			if mutatorlist[2] == 'symbol':
				specific_token = random.choice(symbol)
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
			if mutatorlist[2] == 'arithmetic':
				specific_token = random.choice(arithmetic)
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
			if mutatorlist[2] == 'assignment':
				specific_token = random.choice(assignment)
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
			if mutatorlist[2] == 'bit':
				specific_token = random.choice(bit)
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
			if mutatorlist[2] == 'logical':
				specific_token = random.choice(logical)
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
			if mutatorlist[2] == 'others':
				specific_token = random.choice(others)
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
			if mutatorlist[2] == 'relation':
				specific_token = random.choice(relation)
				file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
		return 	file_content1


def specific_mutation_variable(mutatortype,mutatorlist,file_content1):
	index_available_line = []
	# find all available line
	for index_content in range(len(file_content1)):
		for index_mutatortype in range(len(mutatortype)):
			if mutatortype[index_mutatortype] in file_content1[index_content]:
				index_available_line.append(str(index_content)+':'+mutatortype[index_mutatortype])
	#print('length of index_available_lines is: '+str(len(index_available_line)))
	index_spcific_token = random.choice(index_available_line)	
	mutator_line = index_spcific_token.split(':')[0]
	mutator_token = index_spcific_token.split(':')[1]
	#print('yyyyyyyyyyyyyyyyy')
	#print('mutator_line: ' + mutator_line)
	#print('mutator_token: ' + mutator_token)
	#print('yyyyyyyyyyyyyyyyy')
	mutator_token_start = mutator_token[:mutator_token.index('_')]
	available_insert_replace_token = []
	for each_valiable in variablelist:
		if each_valiable.startswith(mutator_token_start):
				available_insert_replace_token.append(each_valiable)
	if mutatorlist[0] == 'delete':
		file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,'')
	elif mutatorlist[0] == 'insert':
		specific_token = random.choice(available_insert_replace_token)
		insert_token = mutator_token + ' ' +specific_token
		file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,insert_token)
	elif mutatorlist[0] == 'replace':
		specific_token = random.choice(available_insert_replace_token)
		file_content1[int(mutator_line)] = file_content1[int(mutator_line)].replace(mutator_token,specific_token)
	return 	file_content1


def mutateprogram(individual,file_content1):
	global mutator_list
	for i in range(len(individual)):
		#print('individual[i] is: '+individual[i])
		if individual[i] == '1':
			#print('11111111111111111111111111')
			#print(mutator_list[i])
			mutatorlist = mutator_list[i].split('_')
			if mutatorlist[1] == 'modifier':
				file_content1 = specific_mutation_modifier(modifier,mutatorlist,file_content1)
			if mutatorlist[1] == 'qualifier':
				file_content1 = specific_mutation_modifier(qualifier,mutatorlist,file_content1)
			if mutatorlist[1] == 'datatype':
				file_content1 = specific_mutation_modifier(datatype,mutatorlist,file_content1)
			if mutatorlist[1] == 'symbol':
				file_content1 = specific_mutation_symbol(symbol,mutatorlist,file_content1)
			if mutatorlist[1] == 'arithmetic':
				file_content1 = specific_mutation_symbol(arithmetic,mutatorlist,file_content1)
			if mutatorlist[1] == 'assignment':
				file_content1 = specific_mutation_symbol(assignment,mutatorlist,file_content1)
			if mutatorlist[1] == 'bit':
				file_content1 = specific_mutation_symbol(bit,mutatorlist,file_content1)
			if mutatorlist[1] == 'logical':
				file_content1 = specific_mutation_symbol(logical,mutatorlist,file_content1)
			if mutatorlist[1] == 'others':
				file_content1 = specific_mutation_symbol(others,mutatorlist,file_content1)
			if mutatorlist[1] == 'relation':
				file_content1 = specific_mutation_symbol(relation,mutatorlist,file_content1)
			if mutatorlist[1] == 'variable':
				file_content1 = specific_mutation_variable(variablelist,mutatorlist,file_content1)
			#print('6666666666666666')
			#print(str(tokenlist))
			#print('6666666666666666')
	return file_content1

def run_cmd_save_errorInformation(cmd,writepath):
	flagtimeout = False
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
		flagtimeout = True
		#print(str(consumtime))
	if errors:
		result_str = errors
	if error_f:
		error_f.close()
	if flagtimeout is False:
		with open(writepath,'w+') as f:
			f.write(str(result_str))
		f.close()
	return flagtimeout

def whethercrash(rewritepath):
	flagcrash = False
	f = open(rewritepath)
	lines = f.readlines()
	for j in range(len(lines)):
		if 'internal compiler error' in lines[j] or 'dump:' in lines[j]:
			flagcrash = True
	f.close()
	return flagcrash

def whethergcccrash(rewritepath):
	flagcrash = False
	f = open(rewritepath)
	lines = f.readlines()
	for j in range(len(lines)):
		if 'internal compiler error' in lines[j]:
			flagcrash = True
	f.close()
	return flagcrash
def whetherllvmcrash(rewritepath):
	flagcrash = False
	f = open(rewritepath)
	lines = f.readlines()
	for j in range(len(lines)):
		if 'dump:' in lines[j]:
			flagcrash = True
	f.close()
	return flagcrash
def read_error_wrong_Information2(rewritepath,regex):
	f = open(rewritepath)
	linef = f.readline()
	mydictall = []
	while linef:
		mydictlist = []
		if regex in linef:
			strlist = linef.split(':')
			indexerror = -1
			for subkey in strlist:
				if ' error' in subkey:
					indexerror = strlist.index(subkey)
					break
			if indexerror != -1:
				if strlist[indexerror-2].isdigit() and strlist[indexerror-1].isdigit():
					hanglie = strlist[indexerror-2]+ ":" + strlist[indexerror-1]
					mydictlist.append(hanglie)
					lastdetail = strlist[len(strlist)-1].strip()
					pattern = re.compile(r"‘(.*?)’")
					result = pattern.findall(lastdetail)
					if len(result) != 0:
						for l in result:
							lastdetail = lastdetail.replace("‘{}’".format(l), "'{}'".format(l))
					if lastdetail.rfind(']') == len(lastdetail)-1:
						index = lastdetail.rfind('[')
						leixing = lastdetail[index+1:len(lastdetail)-1]
						mydictlist.append(leixing)
						detail = lastdetail[0:index]
						mydictlist.append(detail)
						mydictall.append(mydictlist)
					else:
						leixing = '-'
						mydictlist.append(leixing)
						mydictlist.append(lastdetail)
						mydictall.append(mydictlist)
				elif strlist[indexerror-1].isdigit():
					mydictlist.append(strlist[indexerror-1])
					lastdetail = strlist[len(strlist)-1].strip()
					pattern = re.compile(r"‘(.*?)’")
					result = pattern.findall(lastdetail)
					if len(result) != 0:
						for l in result:
							lastdetail = lastdetail.replace("‘{}’".format(l), "'{}'".format(l))
					if lastdetail.rfind(']') == len(lastdetail)-1:
						index = lastdetail.rfind('[')
						leixing = lastdetail[index+1:len(lastdetail)-1]
						mydictlist.append(leixing)
						detail = lastdetail[0:index]
						mydictlist.append(detail)
						mydictall.append(mydictlist)
					else:
						leixing = '-'
						mydictlist.append(leixing)
						mydictlist.append(lastdetail)
						mydictall.append(mydictlist)	
		linef = f.readline()
	f.close()
	return mydictall

def del_file(path):
    ls = os.listdir(path)
    for i in ls:
        c_path = os.path.join(path, i)
        if os.path.isdir(c_path):
            del_file(c_path)
        else:
            os.remove(c_path)

def evaltesting(individual,mutant_name1,file_content):
	defect = ''
	#print('individual is :'+str(individual))
	#print('length is :'+str(len(individual)))
	#sys.exit(0)
	global start, mutator_list, bugzilla_bug
	file_content1 = copy.deepcopy(file_content)
	#print('000000000000000000000000000000000000000000000')
	#print('before mutation: ' + str(tokenlist))
	mutatedtokens = mutateprogram(individual,file_content1)
	#print('after mutation: ' + str(mutatedtokens))
	#sys.exit(0)
	#write the mutated program
	rewritepath00 = './mutatefile/'+mutant_name1+'.C'
	fmutate = open(rewritepath00,'a+')
	for line in mutatedtokens:
		fmutate.write(line)
	fmutate.close()
	#sys.exit(0)	

	'''
	for eacheachtoken in mutatedtokens:
		if eacheachtoken == ';' or eacheachtoken == '{' or eacheachtoken == '}':
			fmutate.write(eacheachtoken+'\n')
		else:
			fmutate.write(eacheachtoken)
	fmutate.close()
	'''
	#sys.exit(0)
	#compile the program
	cmd1 = 'timeout 15 g++ -c -std=c++11 '+ rewritepath00
	rewritepathgcc1 = './gcc/'+mutant_name1+'.C.txt'
	flagtimeout1 = run_cmd_save_errorInformation(cmd1,rewritepathgcc1)

	cmd2 = 'timeout 15 /home/yixuan/compiler-older/clang+llvm-3.8.0-x86_64-linux-gnu-ubuntu-16.04/bin/clang++ -c -std=c++11 '+ rewritepath00
	rewritepathclang1 = './clang/'+mutant_name1+'.C.txt'
	flagtimeout2 = run_cmd_save_errorInformation(cmd2,rewritepathclang1)

	cmd3 = 'timeout 15 /home/yixuan/compiler-older/gcc-10.1.0/build/bin/g++ -c -std=c++11 '+ rewritepath00
	rewritepathgcc3 = './gcc-cvs/'+mutant_name1+'.C.txt'
	flagtimeout3 = run_cmd_save_errorInformation(cmd3,rewritepathgcc3)
	
	writebugPath = './bug.txt'
	writediversebugPath = './bug-diverse.txt'
	if flagtimeout1:
		print('timeout')
		defect = 'timeout'
		shutil.copy(rewritepath00,'./timeout/')
		mediumtimecomparecrash = datetime.datetime.now()
		timecomparecrash = mediumtimecomparecrash - start
		fwtimecomparecrash = open(writebugPath,'a+')
		#1:time 2:path 3:individual 4:mutators 5:cause
		fwtimecomparecrash.write(str(timecomparecrash) + '\n')
		fwtimecomparecrash.write(rewritepath00 + '\n')
		fwtimecomparecrash.write(str(individual) + '\n')
		for i in range(len(individual)):
			if individual[i] == '1':
				fwtimecomparecrash.write(mutator_list[i]+',')
		fwtimecomparecrash.write('\n')
		fwtimecomparecrash.write('timeout' + '\n')
		fwtimecomparecrash.close()
	if os.path.exists('./'+mutant_name1+'.o'):
		os.remove('./'+mutant_name1+'.o')					
	if os.path.exists(rewritepathgcc1) and os.path.exists(rewritepathclang1):
		listdictgcc = read_error_wrong_Information2(rewritepathgcc1,'error:')
		listdictclang = read_error_wrong_Information2(rewritepathclang1,'error:')
		flagcrash1 = whethercrash(rewritepathgcc1)
		if bool(1-flagcrash1):
			if len(listdictgcc) == 0 and len(listdictclang) != 0:
				#gcc accept
				print("----find accept invalid-------")
				defect = 'accept-invalid'
				shutil.copy(rewritepath00,'./accept-invalid/')
				mediumtimecomparecrash = datetime.datetime.now()
				timecomparecrash = mediumtimecomparecrash - start
				fwtimecomparecrash = open(writebugPath,'a+')
				fwtimecomparecrash.write(str(timecomparecrash) + '\n')
				fwtimecomparecrash.write(rewritepath00 + '\n')
				fwtimecomparecrash.write(str(individual) + '\n')
				for i in range(len(individual)):
					if individual[i] == '1':
						fwtimecomparecrash.write(mutator_list[i]+',')
				fwtimecomparecrash.write('\n')
				fwtimecomparecrash.write('accept-invalid' + '\n')
				fwtimecomparecrash.close()

			elif len(listdictgcc) != 0 and len(listdictclang) == 0:	
				#clang accept
				print("----find reject valid-------")
				defect = 'reject-valid'
				shutil.copy(rewritepath00,'./reject-valid/')
				mediumtimecomparecrash = datetime.datetime.now()
				timecomparecrash = mediumtimecomparecrash - start
				fwtimecomparecrash = open(writebugPath,'a+')
				fwtimecomparecrash.write(str(timecomparecrash) + '\n')
				fwtimecomparecrash.write(rewritepath00 + '\n')
				fwtimecomparecrash.write(str(individual) + '\n')
				for i in range(len(individual)):
					if individual[i] == '1':
						fwtimecomparecrash.write(mutator_list[i]+',')
				fwtimecomparecrash.write('\n')
				fwtimecomparecrash.write('reject-valid' + '\n')
				fwtimecomparecrash.close()

			elif len(listdictgcc) == 0 and len(listdictclang) == 0:	
				print("----valid program-------")

			elif len(listdictgcc) != 0 and len(listdictclang) != 0:	
				ErrorInformationcompare = compare_errorInformation_and_return_string1(listdictgcc,listdictclang)
				if len(ErrorInformationcompare)==0:
					print("yes, no consistence")
				else:
					if os.path.exists('./bugzilla-gcc5.txt'):
						all_bug_information = readfilelines('./bugzilla-gcc5.txt')
						bug_infor = ''
						flagbug0 = False
						for eachbug in all_bug_information:
							if '****' in eachbug and '####' in eachbug:
								flagbug1 = False
								flagbug2 = False
								bug_infor_all = eachbug.split('@')
								for index_bug_infor in range(1,len(bug_infor_all)):
									comp_bug_infor = bug_infor_all[index_bug_infor].strip().split('+')
									if comp_bug_infor[0].strip().startswith('****'):
										for eachinfor in ErrorInformationcompare:
											if '****' in eachinfor:
												flagbug3 = True
												for index_comp_bug_infor in range(1,len(comp_bug_infor)):
													if comp_bug_infor[index_comp_bug_infor].strip() not in eachinfor:
														flagbug3 = False
												if flagbug3:
													flagbug1 = True
													break
									if comp_bug_infor[0].strip().startswith('####'):
										for eachinfor in ErrorInformationcompare:
											if '####' in eachinfor:
												flagbug4 = True
												for index_comp_bug_infor in range(1,len(comp_bug_infor)):
													if comp_bug_infor[index_comp_bug_infor].strip() not in eachinfor:
														flagbug4 = False
												if flagbug4:
													flagbug2 = True
													break
								mediumtimecomparecrash1 = datetime.datetime.now()
								timecomparecrash1 = mediumtimecomparecrash1 - start
								if flagbug1 and flagbug2:
									flagbug0 = True
									print("----find error inconsistence-------")
									defect = 'inconsistent'
									#shutil.copy(rewritepath00,'./inconsistent/')
									fwtimecomparecrash = open(writebugPath,'a+')
									fwtimecomparecrash.write(str(timecomparecrash1) + '\n')
									fwtimecomparecrash.write(rewritepath00 + '\n')
									fwtimecomparecrash.write(str(individual) + '\n')
									for i in range(len(individual)):
										if individual[i] == '1':
											fwtimecomparecrash.write(mutator_list[i]+',')
									fwtimecomparecrash.write('\n')
									fwtimecomparecrash.write('inconsistent bug: ' + bug_infor_all[0].strip() + '\n')
									fwtimecomparecrash.close()

									if bug_infor_all[0].strip() not in bugzilla_bug:
										bugzilla_bug.add(bug_infor_all[0].strip())
										fwtimecomparecrash = open(writediversebugPath,'a+')
										fwtimecomparecrash.write(str(timecomparecrash1) + '\n')
										fwtimecomparecrash.write(rewritepath00 + '\n')
										fwtimecomparecrash.write(str(individual) + '\n')
										for i in range(len(individual)):
											if individual[i] == '1':
												fwtimecomparecrash.write(mutator_list[i]+',')
										fwtimecomparecrash.write('\n')
										fwtimecomparecrash.write('inconsistent bug: ' + bug_infor_all[0].strip() + '\n')
										fwtimecomparecrash.close()
									break
							elif '****' in eachbug:
								flagbug1 = False
								bug_infor_all = eachbug.split('@')
								for index_bug_infor in range(1,len(bug_infor_all)):
									comp_bug_infor = bug_infor_all[index_bug_infor].strip().split('+')
									if comp_bug_infor[0].strip().startswith('****'):
										for eachinfor in ErrorInformationcompare:
											if '****' in eachinfor:
												flagbug3 = True
												for index_comp_bug_infor in range(1,len(comp_bug_infor)):
													if comp_bug_infor[index_comp_bug_infor].strip() not in eachinfor:
														flagbug3 = False
												if flagbug3:
													flagbug1 = True
													break
								mediumtimecomparecrash2 = datetime.datetime.now()
								timecomparecrash2 = mediumtimecomparecrash2 - start
								if flagbug1:
									flagbug0 = True
									print("----find error inconsistence-------")
									defect = 'inconsistent'
									shutil.copy(rewritepath00,'./inconsistent/')
									fwtimecomparecrash = open(writebugPath,'a+')
									fwtimecomparecrash.write(str(timecomparecrash2) + '\n')
									fwtimecomparecrash.write(rewritepath00 + '\n')
									fwtimecomparecrash.write(str(individual) + '\n')
									for i in range(len(individual)):
										if individual[i] == '1':
											fwtimecomparecrash.write(mutator_list[i]+',')
									fwtimecomparecrash.write('\n')
									fwtimecomparecrash.write('inconsistent bug: ' + bug_infor_all[0].strip() + '\n')
									fwtimecomparecrash.close()

									if bug_infor_all[0].strip() not in bugzilla_bug:
										bugzilla_bug.add(bug_infor_all[0].strip())
										mediumtimecomparecrash = datetime.datetime.now()
										timecomparecrash = mediumtimecomparecrash - start
										fwtimecomparecrash = open(writediversebugPath,'a+')
										fwtimecomparecrash.write(str(timecomparecrash2) + '\n')
										fwtimecomparecrash.write(rewritepath00 + '\n')
										fwtimecomparecrash.write(str(individual) + '\n')
										for i in range(len(individual)):
											if individual[i] == '1':
												fwtimecomparecrash.write(mutator_list[i]+',')
										fwtimecomparecrash.write('\n')
										fwtimecomparecrash.write('inconsistent bug: ' + bug_infor_all[0].strip() + '\n')
										fwtimecomparecrash.close()

									break
						if bool(1-flagbug0):
							#potential bug: compare with cvs
							if os.path.exists(rewritepathgcc3):
								listdictgcc3 = read_error_wrong_Information2(rewritepathgcc3,'error:')
								if len(listdictgcc3) != 0:
									ErrorInformationcompare3 = compare_errorInformation_and_return_string1(listdictgcc,listdictgcc3)
									if len(ErrorInformationcompare)==0:
										print("yes, no consistence")
									else:
										#defect = 'potentialbug'
										flagpotential = False
										for i in range(len(ErrorInformationcompare)):
											if '****' in ErrorInformationcompare[i]:
												for k in range(len(ErrorInformationcompare3)):
													if '****' in ErrorInformationcompare3[k]:
														sim1 = get_Jaccard(ErrorInformationcompare[i], ErrorInformationcompare3[k])
														if sim1 < 0.8:
															flagpotential = True
															break
										if flagpotential:
											shutil.copy(rewritepath00,'./poteninconsistent/')
											writeErrorinforPathcompare = './potential_bugfile.txt'
											mediumtimecompare = datetime.datetime.now()
											timecompare = mediumtimecompare - start
											fwtimecompare = open(writeErrorinforPathcompare,'a+')
											fwtimecompare.write(str(timecompare) + '\n')
											fwtimecompare.close()
											locationErrorBetweenCompilers0 = rewritepath00
											write_errorInformation(writeErrorinforPathcompare, locationErrorBetweenCompilers0,ErrorInformationcompare)
											'''
											shutil.copy(rewritepath00,'./poteninconsistent/')
											if len(writeinformation) != 0:
												fwriteunique = open('./unique.txt','a+')
												for eachwrite in writeinformation:
													fwriteunique.write(eachwrite+'\n')
												fwriteunique.close()
											'''
									del ErrorInformationcompare3
									gc.collect()

				del ErrorInformationcompare
				gc.collect()
		
		else:
			print("----find crash-------")
			defect = 'crash'
			shutil.copy(rewritepath00,'./crash/')

			writecrashPathcompare = './crash.txt'
			mediumtimecomparecrash = datetime.datetime.now()
			timecomparecrash = mediumtimecomparecrash - start
			fwtimecomparecrash = open(writecrashPathcompare,'a+')
			fwtimecomparecrash.write(str(timecomparecrash) + '\n')
			fwtimecomparecrash.write(rewritepath00 + '\n')
			fwtimecomparecrash.write(str(individual) + '\n')
			for i in range(len(individual)):
				if individual[i] == '1':
					fwtimecomparecrash.write(mutator_list[i]+',')
			fwtimecomparecrash.write('\n')
			fwtimecomparecrash.write('gcc crash' + '\n')
			fwtimecomparecrash.close()

	del file_content1
	gc.collect()
	return defect


def randomGeneration(file_mutator_type,num_individuals):
	#randomly generate individuals
	global GA_population,dupliate,mutator_list,available_mutators,mutator_dic
	num_mutator = 0
	#1101:mutaor_type
	list_individuals = {}
	indivuduals_type = set()
	for k in range(num_individuals):
		print('the number of generation individual is :'+str(k))
		# initialization of all mutators
		individual_list_ini = [0]*129
		#print('individual_list_ini is :'+ str(individual_list_ini))
		#sys.exit(0)
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
			mutators_select = random.sample(available_mutators,num_mutator)
			print('mutators_select is :'+str(mutators_select))
			#mutators_select = random.choices(list(available_mutators), k=num_mutator)
		else:
			num_mutator = random.randint(1,num_mutator)
			print('num_mutator is: ' + str(num_mutator))
			mutators_select = random.sample(available_mutators,num_mutator)
			print('mutators_select is :'+str(mutators_select))
			#mutators_select = random.choices(list(available_mutators), k=num_mutator)
		#print('mutators_select:' + str(mutators_select))
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
				#print(each_select_mutator+' : '+ mutator_list[index_mutator])
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
	

def get_Jaccard(str1,str2):
	yinhao_content_str1 = []
	yinhao_content_str2 = []
	pattern = re.compile(r"'(.*?)'")
	result1 = pattern.findall(str1)
	if len(result1) != 0:
		for content1 in result1:
			if content1 in string.punctuation:
				yinhao_content_str1.append(content1)
	result2 = pattern.findall(str2)
	if len(result2) != 0:
		for content2 in result2:
			if content2 in string.punctuation:
				yinhao_content_str2.append(content2)
	trans = str.maketrans({key: None for key in string.punctuation})
	newstring1 = str1.translate(trans)
	newstring2 = str2.translate(trans)
	#newstring2 = str2.translate(None,string.punctuation)
	arr1_old = newstring1.split()
	arr2_old = newstring2.split()
	arr1 = arr1_old + yinhao_content_str1
	arr2 = arr2_old + yinhao_content_str2
	#print('/////////////////////////')
	#print('arr1 is : '+str(arr1))
	#print('arr2 is : '+str(arr2))
	common = 0
	for item in arr1:
		if item in arr2:
			common += 1
	#print('len(arr1)+len(arr2) is : '+str(len(arr1) + len(arr2)))
	#print('common is : '+str(common))
	if common==0:
		return 0
	else:
		fenmu = len(arr1) + len(arr2) - common
		#print('fen mu is: '+str(fenmu))
		sim = float(common)/float(fenmu)
		#print('sim in get_jaccard is : ' + str(sim))
		return sim

def compare_errorInformation_and_return_string1(dict1,dict2):
	#print('------------dict1 :'+str(len(dict1)))
	#print('------------dict2 :'+str(len(dict2)))
	#print('-------------------------------------------------------')
	errorinformation = []
	for i in range(0,len(dict1)):
		flag1 = False
		hangdict1 = dict1[i][0]
		detaildict1 = dict1[i][2]
		# information need improve
		improve1 = 0
		count1 = 0
		for j in range(0,len(dict2)):	
			#print('kkkkkkkkkkkkkkkkkkkkkk')
			#print('count1 is : '+str(count1))
			hangdict2 = dict2[j][0]
			detaildict2 = dict2[j][2]
			#hang,lie
			if hangdict1 == hangdict2:
				flag1 = True
				count1 = count1 + 1
				sim = get_Jaccard(detaildict1,detaildict2)
				#print('uuuuuuuuuuuuuuuuuuuuuu')
				#print(detaildict1)
				#print(detaildict2)
				if sim < 0.2:
					improve1 = improve1 + 1
				#print('sim in compare is ' + str(sim))
				#print(str(improve1))
				#print('uuuuuuuuuuuuuuuuuuuuuu')
			elif ':' in hangdict1 and ':' in hangdict2:
				hang1 = hangdict1[0:hangdict1.index(':')]
				hang2 = hangdict2[0:hangdict2.index(':')]
				if hang1 == hang2:
					flag1 = True
					count1 = count1 + 1
					sim = get_Jaccard(detaildict1,detaildict2)
					#print('oooooooooooooooooooooooo')
					#print(detaildict1)
					#print(detaildict2)
					if sim < 0.2:
						improve1 = improve1 + 1
					#print('sim in compare is ' + str(sim))
					#print(str(improve1))
					#print('oooooooooooooooooooooooooooo')

		if flag1 == False:
			#print('****'+hangdict1+'****'+detaildict1+'(location diff)')
			errorinformation.append('****'+hangdict1+'****'+detaildict1+'(location diff)')
		elif improve1 >= count1:
			#print('****'+hangdict1+'****'+detaildict1+'(improvment)')
			errorinformation.append('****'+hangdict1+'****'+detaildict1+'(improvment)')

	for i in range(0,len(dict2)):
		flag2 = False
		hangdict2 = dict2[i][0]
		detaildict2 = dict2[i][2]
		# information need improve
		improve2 = 0
		count2 = 0
		for j in range(0,len(dict1)):
			hangdict1 = dict1[j][0]
			detaildict1 = dict1[j][2]
			#hang,lie
			if hangdict1 == hangdict2:
				flag2 = True
				count2 = count2 + 1
				sim = get_Jaccard(detaildict1,detaildict2)
				if sim < 0.2:
					improve2 = improve2 + 1
				break
			elif ':' in hangdict1 and ':' in hangdict2:
				hang1 = hangdict1[0:hangdict1.index(':')]
				hang2 = hangdict2[0:hangdict2.index(':')]
				if hang1 == hang2:
					flag2 = True
					count2 = count2 + 1
					sim = get_Jaccard(detaildict1,detaildict2)
					if sim < 0.2:
						improve2 = improve2 + 1	
		if flag2 == False:
			errorinformation.append('####'+hangdict2+'####'+detaildict2+'(location diff)')
		elif improve2 >= count2:
			errorinformation.append('####'+hangdict2+'####'+detaildict2+'(improvment)')
				
	return errorinformation

def write_errorInformation(writeErrorInformationPath,compilerinformation,errorInformation):
	fw = open(writeErrorInformationPath,'a+')
	fw.write(compilerinformation + '\n')
	for i in range(len(errorInformation)):
		fw.write(''.join(errorInformation[i]) + '\n')
	fw.close()

def split_file(file_content):
	tokenlist1 = []
	for line in file_content:
		word = ''
		for char in line:
			if char.isalpha():
				word = ''.join([word,char])
			else:
				if word.strip() != '':
					tokenlist1.append(word)
					word = ''
				tokenlist1.append(char)
		if word.strip() != '':
			tokenlist1.append(word)
			word = ''
	



if __name__ == "__main__":

	filepaths = []

	all_files_path('/home/yixuan/compiler_testing-main-new/scripts/util/mutate/codesnippet/assignment')
	include = set()

	for filepath in filepaths:
		print(filepath)
		filelist = filepath.split('/')
		realname = filelist[len(filelist)-1]
		'''
		filelist = filepath.split('/')
		realname = filelist[len(filelist)-1]
		newname = realname[:realname.index('.c')]+'-llvm.c'
		newpath = '/home/yixuan/codeExtract/code/'+newname
		shutil.copy(filepath,newpath)
		'''
		linelist = readfilelines(filepath)
		last = linelist[-1]+';'
		linelist[-1] = last
		newpath = '/home/yixuan/compiler_testing-main-new/scripts/util/mutate/codesnippet/assignment-rewrite/'+realname
		with open(newpath,'w+') as f:
			for k in range(len(linelist)):
				f.write(linelist[k]+'\n')
		f.close()






