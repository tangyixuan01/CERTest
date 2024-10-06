#!/usr/bin/env python
# -*- encoding: utf-8 -*-
# """
# @Author       : jwzeng
# @Date         : 2023-06-12 21:17:25
# @LastEditTime : 2023-08-08 15:09:31
# @FilePath     : \jwzeng_workplace\paper_reproduction\yarpgen\scripts\util\mutate.py
# @Description  : 程序变异
# @
# @Copyright (c) 2023 by jwzeng, All Rights Reserved. 
# """


import os
import re
import sys
import copy
import string
import random
import datetime
from pycparser import parse_file, c_generator, c_ast
from pycparser.c_ast import NodeVisitor

# 添加环境变量
sys.path.append(os.path.abspath(os.path.join(os.getcwd(), "..")))
# from util.test_gcc_clang import *
# from util.file_handle import *
from util.check_program import *
from util.config import *

# random.seed(3407)

# variable → type
all_variable2type = {}
# variable → type
local_variable2type = {}
# variable → type
global_variable2type = {}

tmp_all_variable = set()
tmp_decl_variable = set()
tmp_undecl_variable = set()

program_file_path = ''
# code_snippets_dir = '/home/workplace/emi_mutation_acc/code_snippets'
code_snippets_dir = '/home/workplace/emi_mutation_acc/snippets/gcc-wrong-code'

code_generator = c_generator.CGenerator()

# ⬇ ******************* extract (all, global, local) variables ******************* ⬇ #
class DeclVisitor(NodeVisitor):
    def __init__(self, target='all'):
        self.target = target

    def visit_Decl(self, node):
        variable = node.name
        type_decl = code_generator.visit(node.type)
        # 获取AST结点的类型名称
        node_class_name = node.type.__class__.__name__
        if node_class_name == 'FuncDecl':
            type_decl = code_generator.visit(node.type.type)
            type_decl = 'func ' + type_decl
        
        if self.target == 'all':
            all_variable2type[variable] = type_decl
        elif self.target == 'local':
            local_variable2type[variable] = type_decl
        else:
            tmp_decl_variable.add(variable)


class FuncDef4LocalVariablesVisitor(NodeVisitor):
    def visit_FuncDef(self, node):
        DeclVisitor(target='local').visit(node)


def extract_variables(ast):
    global all_variable2type, local_variable2type, global_variable2type
    all_variable2type.clear()
    local_variable2type.clear()
    global_variable2type.clear()

    # extract all variables
    DeclVisitor().visit(ast.ext)
    # extract local variables
    FuncDef4LocalVariablesVisitor().visit(ast.ext)
    # extract global variables
    for variable in all_variable2type.keys():
        if variable not in local_variable2type.keys():
            global_variable2type[variable] = all_variable2type[variable]
# ⬆ ******************* extract (all, global, local) variables ******************* ⬆ #


def extract_all_variables(node):
    if isinstance(node, c_ast.ID):
        tmp_all_variable.add(node.name)
    else:
        for child in node:
            extract_all_variables(child)


def print_variables():
    print('all_variable2type:')
    for key, value in all_variable2type.items():
        print(key, value)
    print()

    print('local_variable2type:')
    for key, value in local_variable2type.items():
        print(key, value)
    print()

    print('global_variable2type:')
    for key, value in global_variable2type.items():
        print(key, value)


# ⬇ ******************* extract all insert positions ******************* ⬇ #
class Assignment4InsertPositionsVisitor(NodeVisitor):
    def __init__(self, insert_positions):
        self.insert_positions = insert_positions

    def visit_Assignment(self, node):
        self.insert_positions.add(node.coord.line - 1)
        

class FuncDef4InsertPositionsVisitor(NodeVisitor):
    def __init__(self, insert_positions):
        self.insert_positions = insert_positions

    def visit_FuncDef(self, node):
        if node.decl.name == 'test':
            Assignment4InsertPositionsVisitor(self.insert_positions).visit(node)


# 提取所有适合插入的位置 
def extract_all_insert_positions(ast):
    insert_positions = set()
    FuncDef4InsertPositionsVisitor(insert_positions).visit(ast.ext)
    return insert_positions
# ⬆ ******************* extract all insert positions ******************* ⬆ #


# ⬇ ******************* select code snippet ******************* ⬇ #
# 选择代码块，这里只从for、if中选择
def select_code_snippet(code_snippets_dir, snippet_types=['for', 'if']):
    # random choice snippet type
    snippet_type = random.choice(snippet_types)
    snippet_type_dir = os.path.join(code_snippets_dir, snippet_type)
    # random choice snippet file
    snippet_file_name = random.choice(os.listdir(snippet_type_dir))
    snippet_file_path = os.path.join(snippet_type_dir, snippet_file_name)
    print('snippet_file_path:', snippet_file_path)
    # print('snippet_file_name:', snippet_file_name)

    snippet_variable2type = {}
    sinppet_str = ""
    if os.path.isfile(snippet_file_path):
        with open(snippet_file_path, 'r') as f:
            lines = f.readlines()
            if lines is not None and len(lines) < 2:
                return None, None
            else:
                sinppet_str = ''.join(lines[1:])
                first_line = lines[0].strip()
                if first_line.startswith('//'):
                    first_line = first_line[2:]
                    for variable_type in first_line.split(';'):
                        variable, type_decl = variable_type.split(':')
                        snippet_variable2type[variable] = type_decl
    return sinppet_str, snippet_variable2type, snippet_file_name
# ⬆ ******************* select code snippet ******************* ⬆ #

# ⬇ ******************* adapt code snippet ******************* ⬇ #
# 将variable2type转换为type2variable
def variable2type_2_type2variable(variable2type):
    type2variable = {}
    for variable, type_decl in variable2type.items():
        if type_decl not in type2variable.keys():
            type2variable[type_decl] = []
        type2variable[type_decl].append(variable)
    return type2variable


# 字符串分割：将字母、数字和下划线组合（即变量名），其余字符单独分割
def split_text4variables(text):
    pattern = r'\b\w+\b|[ \n\S]'
    matches = re.findall(pattern, text)
    return matches


# 为代码块中的变量重命名
def rename_variable4snippet(snippet_str, rename_variable):
    matches = split_text4variables(snippet_str)
    for i in range(len(matches)):
        if matches[i] in rename_variable.keys():
            matches[i] = rename_variable[matches[i]]
    return ''.join(matches)


# 重用变量
def reuse_variable(snippet_str, snippet_variable2type, available_type2variable):
    rename_variable = {}
    no_reusable_variable = {}

    # extract rename_variable and no_reusable_variable
    for snippet_variable, snippet_type in snippet_variable2type.items():
        if snippet_type in available_type2variable.keys():
            random_variable = random.choice(available_type2variable[snippet_type])
            rename_variable[snippet_variable] = random_variable
        else:
            no_reusable_variable[snippet_variable] = snippet_type

    # rename snippet variable
    snippet_str = rename_variable4snippet(snippet_str, rename_variable)
    return snippet_str, no_reusable_variable


"""
#define SCHAR_MIN -128
#define SCHAR_MAX 127
#define CHAR_MIN -128
#define CHAR_MAX 127
#define UCHAR_MAX 255
#define SHRT_MIN -32768
#define SHRT_MAX 32767
#define USHRT_MAX 65535
#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define UINT_MAX 4294967295U
#define LONG_MIN -9223372036854775808L
#define LONG_MAX 9223372036854775807L
#define ULONG_MAX 18446744073709551615UL
#define RAND_MAX 32767
"""
# ! 这里有个size_t可能需要特殊处理
type_decl_2_simple_type = {'char': 'char', 'unsigned char': 'uchar', 'short': 'short', 'unsigned short': 'ushort',
                           'int': 'int', 'unsigned int': 'uint', 'long': 'long', 'unsigned long': 'ulong',
                           'long long': 'long', 'unsigned long long': 'ulong', 'long long int': 'long',
                           'unsigned long long int': 'ulong', '_Bool': 'bool', 'bool': 'bool', 'size_t': 'bool',
                           'int8_t': 'char', 'uint8_t': 'uchar', 'int16_t': 'short', 'uint16_t': 'ushort',
                           'int32_t': 'int', 'uint32_t': 'uint', 'int64_t': 'long', 'uint64_t': 'ulong',
                           'double': 'double', 'float': 'float', 'long double': 'double', 'unsigned': 'uint',
                           'signed': 'int', 'long int': 'long', 'unsigned int': 'uint', 'short int': 'short',
                           'signed char': 'char'}
# 变量类型转化，例如：const unsigned int [1][2][3] → uint 或者 const long long int → long 等
def transform_type_decl(type_decl):
    # 去除const、volatile、restrict、static、struct、union、enum、signed等关键字
    type_decl = re.sub(r'\b(const|volatile|restrict|static|struct|union|enum|signed)\b', '', type_decl)
    # 去除指针
    type_decl = re.sub(r'\*', '', type_decl)
    # 去除数组
    type_decl = re.sub(r'\[(.*?)\]', '', type_decl)
    type_decl = ' '.join(type_decl.strip().split())
    if type_decl in type_decl_2_simple_type.keys():
        return type_decl_2_simple_type[type_decl]
    else:
        print('!!! transform_type_decl error:', type_decl)
        return None


# bool, char, uchar, short, ushort, int, uint, long, ulong
type2range = {'bool': (0, 1), 
              'char': (-128, 127), 'uchar': (0, 255), 
              'short': (-32768, 32767), 'ushort': (0, 65535), 
              'int': (-2147483648, 2147483647), 'uint': (0, 4294967295),
              'long': (-9223372036854775807, 9223372036854775807), 'ulong': (0, 18446744073709551615),
              'double': (-1.7976931348623157e+308, 1.7976931348623157e+308), 'float': (-3.4028234663852886e+38, 3.4028234663852886e+38)}
# 为变量生成随机值
def generate_random_value(type_decl):
    type_decl = transform_type_decl(type_decl)
    rnd_value = 0
    if type_decl in type2range.keys():
        choice = random.randint(0, 1)
        if choice == 0:
            # 返回边界值
            rnd_value = random.choice(type2range[type_decl])
        else:
            # 返回随机值
            rnd_value = random.randint(type2range[type_decl][0], type2range[type_decl][1])
    else:
        rnd_value = random.randint(0, 1)
    rnd_value = str(rnd_value)
    # bool前加上(_Bool)，char前加上(signed char)，uchar前加上(unsigned char)，short前加上(short)，
    # ushort前加上(unsigned short)，int不变，uint后加上U，long后加上LL，ulong后加上ULL
    if type_decl == 'bool':
        rnd_value = '(_Bool)' + rnd_value
    elif type_decl == 'char':
        rnd_value = '(signed char)' + rnd_value
    elif type_decl == 'uchar':
        rnd_value = '(unsigned char)' + rnd_value
    elif type_decl == 'short':
        rnd_value = '(short)' + rnd_value
    elif type_decl == 'ushort':
        rnd_value = '(unsigned short)' + rnd_value
    elif type_decl == 'uint':
        rnd_value += 'U'
    elif type_decl == 'long':
        rnd_value += 'LL'
    elif type_decl == 'ulong':
        rnd_value += 'ULL'
    return rnd_value


# 通过在定义变量时直接赋值方式初始化数组
def generate_array_initialization_by_assignment(dimensions, declaration=''):
    if len(dimensions) == 0:
        return ""
    initialization = ""
    for i in range(dimensions[0]):
        if len(dimensions) > 1:
            initialization += generate_array_initialization_by_assignment(dimensions[1:], declaration)
        else:
            value = random.randint(1, 10)  # 生成随机整数作为初始值
            initialization += str(value)

        if i < dimensions[0] - 1:
            initialization += ","
    declaration += "{" + initialization + "}"
    return declaration


# 通过for循环方式初始化数组
def generate_array_initialization_by_for(variable_name, dimensions, rnd_value):
    initialization = ''
    for i in range(len(dimensions)):
        dim = dimensions[i]
        initialization += '{}for (size_t ii_{} = 0; ii_{} < {}; ++ii_{})\n'.format(' ' * (i * 4), i, i, dim, i)
    initialization += (' ' * ((len(dimensions) - 1) * 4)) + '{\n'
    initialization += '{}{}'.format(' ' * (len(dimensions) * 4), variable_name)
    for i in range(len(dimensions)):
        initialization += '[ii_{}]'.format(i)
    initialization += ' = {};\n'.format(rnd_value)
    initialization += (' ' * ((len(dimensions) - 1) * 4)) + '}\n'
    return initialization 


# 通过for循环方式计算数组的hash值
def generate_array_hash_by_for(variable_name, dimensions):
    hash_snippet = ''
    for i in range(len(dimensions)):
        dim = dimensions[i]
        hash_snippet += '{}for (size_t ii_{} = 0; ii_{} < {}; ++ii_{})\n'.format(' ' * (i * 4), i, i, dim, i)
    hash_snippet += (' ' * ((len(dimensions) - 1) * 4)) + '{\n'
    # seed ^= v + 0x9e3779b9 + ((seed)<<6) + ((seed)>>2);
    for i in range(len(dimensions)):
        variable_name += '[ii_{}]'.format(i)
    hash_snippet += '{}seed ^= {} + 0x9e3779b9 + ((seed)<<6) + ((seed)>>2);\n'.format(' ' * (len(dimensions) * 4), variable_name)
    hash_snippet += (' ' * ((len(dimensions) - 1) * 4)) + '}\n'
    return hash_snippet


# 随机生成一个变量名，包括英文字母、数字、下划线，不能以数字开头
def generate_random_variable_name():
    variable_name = ''
    chs = string.ascii_letters + string.digits + '_'
    while True:
        variable_name = ''.join(random.sample(chs, 8))
        if not variable_name[0].isdigit():
            break
    return variable_name


# 自定义变量
def self_define_variable(snippet_str, variable2type):
    define_snippet = ''
    hash_snippet = ''
    rename_variable = {}
    for variable, type_decl in variable2type.items():
        bracket_idx = type_decl.find('[')
        new_variable = generate_random_variable_name()
        rename_variable[variable] = new_variable

        rnd_value = generate_random_value(type_decl)

        if bracket_idx != -1:
            # arr[10][12][13] 提取括号中的数字存入一个列表
            # 特殊情况：arr[] 或者 arr[N * 4] 或者 arr[23 * 13] 或者 arr[23 * 13 + 1] 等
            dimensions = [size for size in re.findall(r'\[(.*?)\]', type_decl)]
            for dimension in dimensions:
                dimension = dimension.strip()
                # 判断字符串是否为空或者是否含有字母
                if dimension == '' or re.search(r'[a-zA-Z]', dimension):
                    dimensions[dimensions.index(dimension)] = 100
                else:
                    dimensions[dimensions.index(dimension)] = int(eval(dimension))

            declare_array = type_decl[:bracket_idx] + ' ' + new_variable + type_decl[bracket_idx:] + ';\n'
            # todo 这里需要传入变量类型
            array_init = generate_array_initialization_by_for(new_variable, dimensions, rnd_value)
            define_snippet += declare_array + array_init

            array_hash = generate_array_hash_by_for(new_variable, dimensions)
            hash_snippet += array_hash
        else:
            define_snippet += '{} {} = {};\n'.format(type_decl, new_variable, str(rnd_value))
            hash_snippet += 'seed ^= {} + 0x9e3779b9 + ((seed)<<6) + ((seed)>>2);\n'.format(new_variable)
    # print('define_snippet:', define_snippet)
    
    # reanme snippet variable
    snippet_str = rename_variable4snippet(snippet_str, rename_variable)
    # snippet_str = define_snippet + snippet_str + hash_snippet
    return define_snippet, snippet_str, hash_snippet

# 适配代码块
def  adapt_code_snippet(snippet_str, snippet_variable2type, available_variable2type):
    available_type2variable = variable2type_2_type2variable(available_variable2type)
    snippet_str, no_reusable_variable = reuse_variable(snippet_str, snippet_variable2type, available_type2variable)
    define_snippet, snippet_str, hash_snippet = self_define_variable(snippet_str, no_reusable_variable)

    # print('snippet_str:', snippet_str)
    return define_snippet, snippet_str, hash_snippet
# ⬆ ******************* adapt code snippet ******************* ⬆ #

# ⬇ ******************* modify files for adapting pycparser ******************* ⬇ #
# 修改func.c文件，使其能够通过pycparser解析
def modify_func_file_for_adapting_pycparser(func_file_path):
    snippet = '''\
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))	
'''
    lines = []
    with open(func_file_path, 'r') as f:
        lines = f.readlines()
        
        for i in range(len(lines)):
            if lines[i].startswith('#include "init.h"'):
                del(lines[i + 1 : i + 9])
                break
        lines.insert(i + 1, snippet)
    with open(func_file_path, 'w') as f:
        f.writelines(lines)


def modify_init_file_for_adapting_pycparser(init_file_path):
    snippet = 'extern unsigned long long int seed;\n'
    lines = []
    with open(init_file_path, 'r') as f:
        lines = f.readlines()
        lines.insert(0, snippet)
    with open(init_file_path, 'w') as f:
        f.writelines(lines)
# ⬆ ******************* modify files for adapting pycparser ******************* ⬆ #

# ⬇ ******************* prune ******************* ⬇ #
test_func_code = ''
class TypenamePruneVisitor(NodeVisitor):
    def visit_Typename(self, node):
        # 将整个Typename结点置为None
        node.type = None


t_count_for = 0
class ForReplaceVisitor(NodeVisitor):
    def visit_For(self, node):
        super().generic_visit(node)

        # global t_count_for
        # t_count_for += 1
        # print('>>>>>> t_count_for:', t_count_for) 

        # with open('./test/node.txt', 'a+') as f:
        #     f.write(str(node.next))
        #     f.write('\n====================\n')

        # print('>> ori_init:', code_generator.visit(node.init))
        # print('>> ori_cond:', code_generator.visit(node.cond))
        # print('>> ori_next:', code_generator.visit(node.next))
        # print()

        if node.init:
            if isinstance(node.init, c_ast.DeclList):
                decls = node.init.decls
                if len(decls) == 1:
                    init_right = decls[0].init
                else:
                    return
            else:
                return
        else:
            return


        if node.cond:
            if isinstance(node.cond, c_ast.BinaryOp):
                cond_op = node.cond.op
                cond_right = node.cond.right
            else:
                return
        else:
            return
        
        if node.next:
            if isinstance(node.next, c_ast.Assignment) or \
               isinstance(node.next, c_ast.UnaryOp):
                next_op = node.next.op
            else:
                return
        else:
            return
        
        """
            for (int i = 0; i < n; i += 1)
        =>  for (int i = n - 1; i >= 0; i -= 1)

            for (int i = 0; i <= n; i += 1)
        =>  for (int i = n; i >= 0; i -= 1)

            for (int i = n; i > 0; i -= 1)
        =>  for (int i = 0 + 1; i <= n; i += 1)

            for (int i = n; i >= 0; i -= 1)
        =>  for (int i = 0; i <= n; i += 1)

        next_op => next_op
        +=  =>  -=
        -=  =>  +=
        ++  =>  --
        --  =>  ++

        cond_op => init_right
        <   =>  n - 1
        <=  =>  n
        >   =>  0 + 1
        >=  =>  0 

        cond_op => cond_op
        <   =>  >=
        <=  =>  >=
        >   =>  <=
        >=  =>  <=
        """

        if next_op == '+=': node.next.op = '-='
        elif next_op == '-=': node.next.op = '+='
        elif next_op == 'p++': node.next.op = 'p--'
        elif next_op == 'p--': node.next.op = 'p++'

        if cond_op == '<' or cond_op == '<=': node.cond.op = '>='
        elif cond_op == '>' or cond_op == '>=': node.cond.op = '<='

        node.cond.right = init_right
        
        if cond_op == '<':
            node.init.decls[0].init = c_ast.BinaryOp('-', cond_right, c_ast.Constant('int', '1'))
        elif cond_op == '>':
            node.init.decls[0].init = c_ast.BinaryOp('+', cond_right, c_ast.Constant('int', '1'))
        else:
            node.init.decls[0].init = cond_right

        # print('>> new_init:', code_generator.visit(node.init))
        # print('>> new_cond:', code_generator.visit(node.cond))
        # print('>> new_next:', code_generator.visit(node.next))
        # print('=================================')


class TypeDeclReplaceVisitor(NodeVisitor):
    def visit_TypeDecl(self, node):
        # 将整个TypeDecl结点置为None
        node.type = None


class FuncLocation4PruneVisitor(NodeVisitor):
    def visit_FuncDef(self, node):
        if node.decl.name == 'test':
            # 50%概率执行以下代码
            if random.randint(0, 1) == 0:
                TypenamePruneVisitor().visit(node)
            else:
                ForReplaceVisitor().visit(node)
            code = code_generator.visit(node)
            code = code.replace('()', '')
            global test_func_code
            test_func_code = code


class IfPruneVisitor(NodeVisitor):
    def visit_If(self, node):
        node.cond = None
        # expr = c_ast.BinaryOp('&&', c_ast.ID('seed'), c_ast.Constant('int', '1'))
        # node.cond = expr


class TestFuncPruneVisitor(NodeVisitor):
    def visit_FuncDef(self, node):
        if node.decl.name == 'test':
            # IfPruneVisitor().visit(node)
            ForReplaceVisitor().visit(node)

            code = code_generator.visit(node)
            global test_func_code
            test_func_code = code
            
            # with open('./test/node.txt', 'w') as f:
            #     f.write(code_generator.visit(node))
            #     f.write(str(node))
# ⬆ ******************* prune ******************* ⬆ #

# ⬇ ******************* replace ******************* ⬇ #
class Assignment4InitReplacePositionsVisitor(NodeVisitor):
    def __init__(self, replace_position_2_variable_and_value):
        self.replace_position_2_variable_and_value = replace_position_2_variable_and_value

    def visit_Assignment(self, node):
        variable = code_generator.visit(node.lvalue)
        value = code_generator.visit(node.rvalue)
        # variable = variable[:variable.find('[')]
        self.replace_position_2_variable_and_value[node.coord.line - 1] = (variable, value)


class FuncDef4InitReplacePositionsVisitor(NodeVisitor):
    def __init__(self, replace_position_2_variable_and_value):
        self.replace_position_2_variable_and_value = replace_position_2_variable_and_value

    def visit_FuncDef(self, node):
        if node.decl.name == 'init':
            Assignment4InitReplacePositionsVisitor(self.replace_position_2_variable_and_value).visit(node)


def extract_all_init_replace_positions(ast):
    replace_position_2_variable_and_value = dict()
    FuncDef4InitReplacePositionsVisitor(replace_position_2_variable_and_value).visit(ast.ext)
    return replace_position_2_variable_and_value


def calc_integer_sum(dimensions):
    integer_sum = 0
    for n in dimensions:
        integer_sum += int(n) * (int(n) - 1) / 2
    return integer_sum


def generate_new_init_stmt(variable_and_value):
    variable = variable_and_value[0]
    value = variable_and_value[1]

    # 计算数组维数和维度之和
    variable_name = variable[:variable.find('[')]
    type_decl = all_variable2type[variable_name]
    dimensions = [size for size in re.findall(r'\[(.*?)\]', type_decl)]
    integer_sum = calc_integer_sum(dimensions)

    # 处理value值，例如：(Bool_) 0，使用正则表达式提取整数
    integer_value = re.findall(r'\d+', value)[0]

    global type_decl_2_simple_type, type2range
    # print(type_decl)
    simple_type = type_decl_2_simple_type[type_decl[:type_decl.find('[')].strip()]
    type_range = type2range[simple_type]

    new_init_stmt = ''
    # 生成新的初始化语句
    # 计算integer_value到数值范围内的两个边界的距离
    left_dist = abs(type_range[0] - int(integer_value))
    right_dist = abs(type_range[1] - int(integer_value))
    new_init_stmt = variable + ' = ' + value
    if left_dist >= right_dist and left_dist - integer_sum >= type_range[0]:
        for i in range(len(dimensions)):
            new_init_stmt += ' - ' + 'i_' + str(i)
    elif left_dist < right_dist and right_dist + integer_sum <= type_range[1]:
        for i in range(len(dimensions)):
            new_init_stmt += ' + ' + 'i_' + str(i)
    new_init_stmt += ';\n'
    return new_init_stmt


def replace(ast, driver_file_path):
    program = ''
    with open(driver_file_path, 'r') as f:
        program = f.readlines()

    replace_position_2_variable_and_value = extract_all_init_replace_positions(ast)
    for line, variable_and_value in replace_position_2_variable_and_value.items():
        # print(line, variable_and_value)
        new_init_stmt = generate_new_init_stmt(variable_and_value)
        # print(new_init_stmt)
        program[line] = new_init_stmt

    with open(driver_file_path, 'w') as f:
        f.writelines(program)
# ⬆ ******************* replace ******************* ⬆ #


def mutate_program(test_dir, proc_num=-1, seed=-1):
    # ! test时解除下面注释
    # exec_cmd('../yarpgen -s 2567000434 --std=c -o ' + test_dir)
    exec_cmd('../yarpgen --std=c -o ' + test_dir)
    program_file_path = [os.path.join(test_dir, 'init.h'),
                          os.path.join(test_dir, 'func.c'), 
                          os.path.join(test_dir, 'driver.c')]

    modify_func_file_for_adapting_pycparser(program_file_path[1])
    modify_init_file_for_adapting_pycparser(program_file_path[0])

    # program_file_path = '/home/workplace/seed_programs/seed_programs_yarpgen/1.c'
    pycparser_include_dir = PYCPARSER_INCLUDE_DIR

    ast = None
    for f in program_file_path:
        ast_file = parse_file(f, use_cpp=True, 
                    cpp_path=PARSER_FILE_CPP_PATH, 
                    cpp_args=['-E',
                            r'-I/home/zjw/csmith/include', 
                            r'-I' + pycparser_include_dir])
        if ast is None:
            ast = ast_file
        else:
            # 合并AST
            ast.ext.extend(ast_file.ext)
    extract_variables(ast)
    # print_variables()
    # print()

    # TestFuncPruneVisitor().visit(ast.ext)

    seletc_opt = ['prune', 'replace']
    select = random.choice(seletc_opt)

    if select == 'prune':
        # ! prune
        # print('prune')
        FuncLocation4PruneVisitor().visit(ast.ext)

        lines = []
        with open(program_file_path[1], 'r') as f:
            lines = f.readlines()
            lines = lines[:9]
            global test_func_code
            lines.append(test_func_code)
            # print(''.join(lines))
        with open(program_file_path[1], 'w') as f:
            f.writelines(lines)

        program_file_paths = ' '. join(program_file_path[1:])
        is_free = check_program_by_all_sanitizers(SANITIZER, program_file_paths, 
                                                test_dir, proc_num=proc_num, seed=seed)
        if is_free:
            return True
        return False
    elif select == 'replace':
        # ! replace
        # print('replace')
        replace(ast, program_file_path[2])

        program_file_paths = ' '. join(program_file_path[1:])
        is_free = check_program_by_all_sanitizers('/home/compilers/llvm/llvm-15.0.0/bin/clang', program_file_paths, 
                                                    test_dir, proc_num=proc_num, seed=seed)
        if is_free:
            return True
        return False
    # else:
    #     # ! insert
    #     insert_positions = extract_all_insert_positions(ast)
    #     # print('insert_positions:', insert_positions)

    #     program = ''
    #     with open(program_file_path[1], 'r') as f:
    #         program = f.readlines()

    #     global code_snippets_dir
    #     for i in range(5):
    #         new_program = copy.deepcopy(program)
    #         pos = random.choice(list(insert_positions))
    #         snippet = ''
    #         snippet_vairable2type = {}
    #         snippet_file_name = ''
    #         while True:
    #             snippet, snippet_vairable2type, snippet_file_name = select_code_snippet(code_snippets_dir, snippet_types=['if', 'for', 'while'])
    #             if snippet is not None:
    #                 break

    #         define_snippet, snippet_str, hash_snippet = adapt_code_snippet(snippet, snippet_vairable2type, global_variable2type)
    #         new_program.insert(len(program) - 1, hash_snippet)
    #         new_program.insert(pos, snippet_str)
    #         new_program.insert(10, define_snippet)

    #         with open(program_file_path[1], 'w') as f:
    #             f.writelines(new_program)
            
    #         # ! test时解除下面注释
    #         # return

    #         program_file_paths = ' '. join(program_file_path[1:])
    #         is_free = check_program_by_all_sanitizers('/home/compilers/llvm/llvm-15.0.0/bin/clang', program_file_paths, 
    #                                                 test_dir, proc_num=proc_num, seed=seed)
    #         if is_free:
    #             return True
    #     return False


if __name__ == "__main__":
    mutate_program(test_dir='./test')
    # test()
