import re


def whether_crash(rewrite_path):
	flag_crash = False
	f = open(rewrite_path)
	lines = f.readlines()
	for j in range(len(lines)):
		if 'internal compiler error' in lines[j] or 'dump:' in lines[j]:
			flag_crash = True
	f.close()
	return flag_crash


def whether_gcc_crash(rewrite_path):
	flag_crash = False
	f = open(rewrite_path)
	lines = f.readlines()
	for j in range(len(lines)):
		if 'internal compiler error' in lines[j]:
			flag_crash = True
	f.close()
	return flag_crash


def whether_llvm_crash(rewrite_path):
	flag_crash = False
	f = open(rewrite_path)
	lines = f.readlines()
	for j in range(len(lines)):
		if 'dump:' in lines[j]:
			flag_crash = True
	f.close()
	return flag_crash

def read_error_wrong_Information(rewrite_path,regex):
	f = open(rewrite_path)
	linef = f.readline()
	all_dict = []
	while linef:
		dict_list = []
		if regex in linef:
			strlist = linef.split(':')
			index_error = -1
			for subkey in strlist:
				if ' error' in subkey:
					index_error = strlist.index(subkey)
					break
			if index_error != -1:
				if strlist[index_error-2].isdigit() and strlist[index_error-1].isdigit():
					row_col = strlist[index_error-2]+ ":" + strlist[index_error-1]
					dict_list.append(row_col)
					last_detail = strlist[len(strlist)-1].strip()
					pattern = re.compile(r"‘(.*?)’")
					result = pattern.findall(last_detail)
					if len(result) != 0:
						for l in result:
							last_detail = last_detail.replace("‘{}’".format(l), "'{}'".format(l))
					if last_detail.rfind(']') == len(last_detail)-1:
						index = last_detail.rfind('[')
						type = last_detail[index+1:len(last_detail)-1]
						dict_list.append(type)
						detail = last_detail[0:index]
						dict_list.append(detail)
						all_dict.append(dict_list)
					else:
						type = '-'
						dict_list.append(type)
						dict_list.append(last_detail)
						all_dict.append(dict_list)
				elif strlist[index_error-1].isdigit():
					dict_list.append(strlist[index_error-1])
					last_detail = strlist[len(strlist)-1].strip()
					pattern = re.compile(r"‘(.*?)’")
					result = pattern.findall(last_detail)
					if len(result) != 0:
						for l in result:
							last_detail = last_detail.replace("‘{}’".format(l), "'{}'".format(l))
					if last_detail.rfind(']') == len(last_detail)-1:
						index = last_detail.rfind('[')
						type = last_detail[index+1:len(last_detail)-1]
						dict_list.append(type)
						detail = last_detail[0:index]
						dict_list.append(detail)
						all_dict.append(dict_list)
					else:
						type = '-'
						dict_list.append(type)
						dict_list.append(last_detail)
						all_dict.append(dict_list)	
		linef = f.readline()
	f.close()
	return all_dict
