# -*- coding: utf-8 -*
from __future__ import print_function
import sys,os,io
#os.environ['CUDA_VISIBLE_DEVICES'] = '1'
sys.path.extend(['.', '..'])

def readfilelines(rewrite_path):
	lines = []
	f = open(rewrite_path)
	eachline = f.readline().rstrip('\n').rstrip('\r')
	while eachline:
		lines.append(eachline)
		eachline = f.readline().rstrip('\n').rstrip('\r')
	f.close()
	return lines


def readfilelines1(rewrite_path):
	lines = []
	f = open(rewrite_path)
	eachline = f.readline()
	while eachline:
		lines.append(eachline)
		eachline = f.readline()
	f.close()
	return lines

def all_files_path(root_dir):       
	file_paths = []                
	for root, dirs, files in os.walk(root_dir):
		for file in files:
			file_path = os.path.join(root, file) 
			file_paths.append(file_path)
		for dir in dirs: 
			dir_path = os.path.join(root, dir)
			all_files_path(dir_path)
	return file_paths

def del_file(path):
    ls = os.listdir(path)
    for i in ls:
        c_path = os.path.join(path, i)
        if os.path.isdir(c_path):
            del_file(c_path)
        else:
            os.remove(c_path)


def write_errorInformation(write_error_info_path,compiler_info,error_info):
	fw = open(write_error_info_path,'a+')
	fw.write(compiler_info + '\n')
	for i in range(len(error_info)):
		fw.write(''.join(error_info[i]) + '\n')
	fw.close()
	
def seed_generation(seed_path):
	count_total = 10000
	flagwhile = True
	#the number of test case generation
	seed = []
	while flagwhile:
		count_total = count_total + 1
		print('count is: ' +str(count_total))
		cmdcsmith = '/yarpgen-main/scripts/yarpgen -o '+ seed_path
		os.system(cmdcsmith)
		#rewrite driver.cpp
		driverfile = readfilelines1(seed_path+'driver.cpp')
		funcfile = readfilelines1(seed_path+'func.cpp')
		initfile = readfilelines1(seed_path+'init.h')
		#func.cpp : remove annotation
		seed.append(funcfile[2])
		funcfile_new = []
		#start from function
		for k in range(7,len(funcfile)):
			if funcfile[k].strip().startswith('#'):
				continue
			else:
				pattern = re.compile(r'/\*.*?\*/')
				newline = re.sub(pattern,'',funcfile[k])
				funcfile_new.append(newline)
		combine_file_content = []
		combine_file_content.append(driverfile[0])
		combine_file_content.append('#include <algorithm>')
		combine_file_content.append('\n')
		# init file
		for eachline in initfile:
			combine_file_content.append(eachline)
		#function file
		for indexfuncfile in range(0,len(funcfile_new)):
			combine_file_content.append(funcfile_new[indexfuncfile])

		#driver file
		for indexdriverfile in range(1,len(driverfile)):
			combine_file_content.append(driverfile[indexdriverfile])
		#write driverfile1.cpp
		filename = '/yarpgen-programs/'+str(count_total)+'.cpp'
		fwrite = open(filename,'w+')
		for index_line in range(0,len(combine_file_content)):
			fwrite.write(combine_file_content[index_line])
		fwrite.close()
		del_file(seed_path+'driver.cpp')
		del_file(seed_path+'func.cpp')
		del_file(seed_path+'init.h')
		if count_total > 49999:
			filename1 = './seed.txt'
			fwrite1 = open(filename1,'a+')
			for subseed in seed:
				fwrite1.write(subseed)
			fwrite1.close()
			flagwhile = False
			break
