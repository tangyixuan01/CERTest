
#!/usr/bin/env python
# -*- encoding: utf-8 -*-
"""
@Author       : jun-wei-zeng
@Date         : 2023/05/18 13:56:45
@LastEditTime : 2023-08-31 21:31:21
@FilePath     : extract_ingredient.py
@Description  : 
@
@Copyright (c) 2023 by jun-wei-zeng, All Rights Reserved. 
"""

import os
import re
import sys
import copy
import random
import datetime
from pycparser import parse_file, c_generator, c_ast
from pycparser.c_ast import NodeVisitor

sys.path.append(os.path.abspath(os.path.join(os.getcwd(), "..")))
from util.config import *

# variable → type
all_variable2type = {}
# variable → type
local_variable2type = {}
# variable → type
global_variable2type = {}

tmp_all_variable = set()
tmp_decl_variable = set()
tmp_undecl_variable = set()

new_snippets = set()

program_file_path = ''
code_snippets_dir = '/home/yixuan/compiler_testing-main-new/scripts/util/mutate/codesnippet'
#code_snippets_dir = '/home/yixuan/codeExtract/codesnippet'

code_generator = c_generator.CGenerator()


class DeclVisitor(NodeVisitor):
    def __init__(self, target='global'):
        self.target = target

    def visit_Decl(self, node):
        variable = node.name
        type_decl = code_generator.visit(node.type)
        # 获取AST结点的类型名称
        node_class_name = node.type.__class__.__name__
        if node_class_name == 'FuncDecl':
            type_decl = code_generator.visit(node.type.type)
            type_decl = 'func ' + type_decl
        
        if self.target == 'global':
            all_variable2type[variable] = type_decl
        elif self.target == 'local':
            local_variable2type[variable] = type_decl
        else:
            tmp_decl_variable.add(variable)


class FuncDef4LocalVariablesVisitor(NodeVisitor):
    def visit_FuncDef(self, node):
        DeclVisitor(target='local').visit(node)


def extract_all_variables(node):
    if isinstance(node, c_ast.ID):
        tmp_all_variable.add(node.name)
    else:
        for child in node:
            extract_all_variables(child)


# 删除node中未声明变量和常量的结点
def del_undecl_variables_and_constants_from_node(node):
    global tmp_undecl_variable
    # print(type(node))
    if isinstance(node, c_ast.Constant):
        node.value = ''
    if isinstance(node, c_ast.ID):
        if node.name in tmp_undecl_variable and node.name in all_variable2type.keys():
            node.name = ''
    else:
        for child in node:
            del_undecl_variables_and_constants_from_node(child)


def extract_ingredient(node, target):
    global tmp_undecl_variable, program_file_path, new_snippets
    
    stmt = code_generator.visit(node)
    # 提取未声明的变量
    tmp_undecl_variable = tmp_all_variable - tmp_decl_variable

    if len(tmp_undecl_variable) <= 15 and program_file_path == node.coord.file:
        tmp_node = copy.deepcopy(node)
        # * 1. 删除node中未声明变量和常量的结点
        del_undecl_variables_and_constants_from_node(node)
        stmt_copy = code_generator.visit(node)
        # print(stmt_copy)

        # * 2. 将格式化后的stmt加入new_snippets中
        new_snippets_len = len(new_snippets)
        new_snippets.add(stmt_copy)

        # * 3. 如果new_snippets的长度增加了，说明找到了新的snippets
        if len(new_snippets) > new_snippets_len:
            # todo 如果是while的话，这里特殊处理一下，将for循环转换为while循环
            # if target == 'while':
            #     stmt = transform_for2while(tmp_node)

            snippet = '//'
            for variable in tmp_undecl_variable:
                if variable in all_variable2type.keys():
                    snippet += variable + ':' + all_variable2type[variable] + ';'
            if snippet[-1] != ';':
                snippet += ';'
            snippet = snippet[:-1] + '\n' + stmt
            print(snippet)
            if not os.path.exists(os.path.join(code_snippets_dir, target)):
                os.makedirs(os.path.join(code_snippets_dir, target))
            with open(os.path.join(code_snippets_dir, target, str(len(new_snippets)) + '.c'), 'a+') as f:
                f.write(snippet)
            print("=========================================")
        if len(new_snippets) >= 10000:
            exit(0)
   
    tmp_all_variable.clear()
    tmp_decl_variable.clear()
    tmp_undecl_variable.clear()


# 将for循环转换为while循环
def transform_for2while(node):
    init_stmt = code_generator.visit(node.init)
    cond_stmt = code_generator.visit(node.cond)
    next_stmt = code_generator.visit(node.next)
    stmt = code_generator.visit(node.stmt)
    snippet = ''
    snippet += init_stmt + ';\n'
    snippet += 'while(' + cond_stmt + ')\n{\n'
    # 在stmt的每个\n后加4个空格
    stmt = re.sub(r'\n', '\n    ', stmt)
    snippet += '    ' + stmt + '\n'
    snippet += '    ' + next_stmt + ';\n'
    snippet += '}\n'
    # print(snippet)
    return snippet


def visit(node, target):
    # 提取所有变量
    extract_all_variables(node)
    # 提取声明的变量
    DeclVisitor(target).visit(node)      
    extract_ingredient(node, target)


class ForVisitor(NodeVisitor):
    def visit_For(self, node):
        visit(node, 'for')


class IfVisitor(NodeVisitor):
    def visit_If(self, node):
        visit(node, 'if')


class SwitchVisitor(NodeVisitor):
    def visit_Switch(self, node):
        visit(node, 'switch')


class AssignmentVisitor(NodeVisitor):
    def visit_Assignment(self, node):
        visit(node, 'assignment')


class FuncDefVisitor(NodeVisitor):
    def visit_FuncDef(self, node):
        visit(node, 'func_def')


class WhileVisitor(NodeVisitor):
    def visit_While(self, node):
        visit(node, 'while')


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


def main():
    """
    @description: 运行代码时需要输入两个参数，
                  第一个参数是待处理的程序文件夹，
                  第二个参数是选择的结构化特征
    @return {*}
    """
    start = datetime.datetime.now()
    global all_variable2type, local_variable2type, global_variable2type, \
        program_file_path, new_snippets

    programs_dir = sys.argv[1]
    for program_file_name in os.listdir(programs_dir):
        print('*********************', program_file_name, '*********************')
        program_file_path = os.path.join(programs_dir, program_file_name)

        try:
            ast = parse_file(program_file_path, use_cpp=True, 
                            cpp_path=PARSER_FILE_CPP_PATH, 
                            cpp_args=['-E',
                                      r'-I' + CSMITH_INCLUDE_DIR,
                                      r'-I' + PYCPARSER_INCLUDE_DIR,])
        except Exception as e:
            print(e)
            continue
        
        all_variable2type.clear()
        local_variable2type.clear()
        global_variable2type.clear()

        DeclVisitor().visit(ast.ext)
        FuncDef4LocalVariablesVisitor().visit(ast.ext)
        for variable in all_variable2type.keys():
            if variable not in local_variable2type.keys():
                global_variable2type[variable] = all_variable2type[variable]

        select = sys.argv[2]

        if select == 'while':
            WhileVisitor().visit(ast.ext)
        elif select == 'for':
            ForVisitor().visit(ast.ext)
        elif select == 'if':
            IfVisitor().visit(ast.ext)
        elif select == 'switch':
            SwitchVisitor().visit(ast.ext)
        elif select == 'assignment':
            AssignmentVisitor().visit(ast.ext)
        elif select == 'func_def':
            FuncDefVisitor().visit(ast.ext)
        print('length of new_snippets:', len(new_snippets))

    end = datetime.datetime.now()
    print('time:', end - start)


if __name__ == "__main__":
    main()
