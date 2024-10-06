#!/usr/bin/env python
# -*- encoding: utf-8 -*-
"""
@Author       : jwzeng
@Date         : 2023-08-27 16:14:21
@LastEditTime : 2023-11-13 13:09:38
@FilePath     : mutate_insert.py
@Description  : 
@
@Copyright (c) 2023 by jwzeng, All Rights Reserved. 
"""

import os, sys
sys.path.append(os.path.abspath(os.path.join(os.getcwd(), "..", "..")))
from util.config import *
from util.mutate.mutate_config import *
from util.mutate.mutate_common import *
from util.sys_util import *

# ⬇⬇ ******************** insert snippet stmts ******************** ⬇⬇ #
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
    FuncDef4InsertPositionsVisitor(insert_positions).visit(ast)
    return insert_positions
# ⬆ ******************* extract all insert positions ******************* ⬆ #


# ⬇ ******************* select code snippet ******************* ⬇ #
# 选择代码块，这里只从for、if中选择
def select_code_snippet(code_snippets_dir, snippet_type='for'):
    snippet_type_dir = os.path.join(code_snippets_dir, snippet_type)
    # random choice snippet file
    snippet_file_name = random.choice(os.listdir(snippet_type_dir))
    print('select_code_snippet: '+snippet_file_name)
    snippet_file_path = os.path.join(snippet_type_dir, snippet_file_name)

    # done: file in blacklist has been removed
    # with open(BLACKLIST_FILE_PATH, 'r') as f:
    #     blacklist = [line.strip() for line in f.readlines()]
    # while True:
    #     snippet_type_dir = os.path.join(code_snippets_dir, snippet_type)
    #     # random choice snippet file
    #     snippet_file_name = random.choice(os.listdir(snippet_type_dir))
    #     snippet_file_path = os.path.join(snippet_type_dir, snippet_file_name)
    #     if '/'.join(snippet_file_path.split('/')[-3:]) not in blacklist:
    #         break  
    # print('snippet_file_name:', snippet_file_name)
    # print('snippet_file_path:', snippet_file_path)

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
                    if first_line.strip() != '':
                        for variable_type in first_line.split(';'):
                            variable, type_decl = variable_type.split(':')
                            snippet_variable2type[variable] = type_decl
    return sinppet_str, snippet_variable2type, snippet_file_path
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


def insert_code_snippet(ast, snippet_type):
    # 1. extract all insert positions from ast
    insert_positions = extract_all_insert_positions(ast)

    program = ''
    global program_file_path
    func_file_path = program_file_path[1]
    with open(func_file_path, 'r') as f:
        program = f.readlines()

    # 2. random choice insert position
    pos = random.choice(list(insert_positions))

    # 3. select code snippet
    snippet, snippet_vairable2type, snippet_file_path = select_code_snippet(CODE_SNIPPETS_DIR, snippet_type)
    # print('snippet:', snippet)
    # print('snippet_vairable2type:', snippet_vairable2type)
    # print('snippet_file_path:', snippet_file_path)

    # 4. adapt code snippet
    define_snippet, snippet_str, hash_snippet = adapt_code_snippet(snippet, snippet_vairable2type, global_variable2type)
    program.insert(len(program) - 1, hash_snippet)
    program.insert(pos, snippet_str)
    program.insert(10, define_snippet)

    with open(func_file_path, 'w') as f:
        f.writelines(program)
# ⬆ ******************* adapt code snippet ******************* ⬆ #


def insert(ast):
    choice = ['for', 'if', 'while', 'assignment']
    snippet_type = random.choice(choice)
    insert_code_snippet(ast, snippet_type)
    return 'insert-{}-snippet'.format(snippet_type)
# ⬆⬆ ******************** insert snippet stmts ******************** ⬆⬆ #

# ⬇⬇ ******************** insert snippet nodes ******************** ⬇⬇ #
def transfer_snippet2ast(snippet):
    """
    @description: 将代码片段转换为ast
    @param {*} snippet 代码片段
    @return {*} ast
    """
    print('transfer_snippet2ast')
    #parse_code = '#include <stdio.h>\n' + 'int main()\n{\n'
    parse_code = 'typedef struct __builtin_va_list { } __builtin_va_list;\n' + 'int main()\n{\n'
    parse_code += snippet + '\n}'
    program_file_path = 'tmp.c'
    with open(program_file_path, 'w') as f:
        f.write(parse_code)
    parse_ast = parse_c_program_file(program_file_path)
    os.remove(program_file_path)

    return parse_ast.ext[-1].body.block_items[0]


def construct_init_stmts_4_snippet(global_decl, snippet_vairable2type):
    """
    @description: 为代码片段构建初始化语句
    @param {*} global_decl 全局变量声明
    @param {*} snippet_vairable2type 代码片段中未声明的变量名到类型的映射
    @return {*} 初始化语句列表，代码片段中未声明的变量名到新变量名的映射
    """
    stmts = []
    ori_vari2new_vari = {}      # 用于代码块中变量重命名
    new_vari2type_decl = {}     # 用于新变量哈希处理
    used_variables = set()
    for ori_snippet_vari, type_decl in snippet_vairable2type.items():
        new_vari_name, init_stmts = construct_variable_init_stmt_node(global_decl, type_decl, used_variables)
        used_variables.add(new_vari_name)
        stmts += init_stmts
        ori_vari2new_vari[ori_snippet_vari] = new_vari_name
        if type_decl.find('*') == -1:
            new_vari2type_decl[new_vari_name] = type_decl
    return stmts, ori_vari2new_vari, new_vari2type_decl


def rename_variable_4_snippet_ast(snippet_ast, ori_vari2new_vari):
    """
    @description: 为代码片段中的变量重命名
    @param {*} snippet_ast 代码片段的ast
    @param {*} ori_vari2new_vari 代码片段中未声明的变量名到新变量名的映射
    @return {*}
    """
    for node in snippet_ast:
        ori_name = node.name if hasattr(node, 'name') else None
        if ori_name is not None and ori_name in ori_vari2new_vari.keys():
            node.name = ori_vari2new_vari[ori_name]
        rename_variable_4_snippet_ast(node, ori_vari2new_vari)


def select_and_adapt_code_snippet(global_decl, snippet_type):
    """
    @description: 选择和适配代码片段，并返回初始化语句结点列表、代码片段的ast和hash语句结点列表
    基本步骤：
    1. 选择代码块
    2. 为代码块构建初始化语句
    3. 将代码块转化为ast
    4. 修改代码块中的变量名为新变量名
    5. 为新变量构建hash语句

    存在问题：
    # done: fix 1. 未声明变量中存在函数 
    # done: fix 2. goto语句、Label类型
    TODO 3. 数组

    @param {*} global_decl 全局变量声明
    @param {*} snippet_type 代码片段类型
    @return {*} 初始化语句结点列表、代码片段的ast和hash语句结点列表
    """
    # 1. 选择代码块
    snippet, snippet_variable2type, snippet_file_path = select_code_snippet(CODE_SNIPPETS_DIR, snippet_type)
    # 2. 为代码块构建初始化语句
    init_stmts, ori_vari2new_vari, new_vari2type_decl = construct_init_stmts_4_snippet(global_decl, snippet_variable2type)
    
    print('pppppppppppppppppppppp')
    #print('init_stmts:'+'\n')
    #print(str(init_stmts))
    # 3. 将代码块转化为ast
    snippet_ast = transfer_snippet2ast(snippet)
    # 4. 修改代码块中的变量名为新变量名
    rename_variable_4_snippet_ast(snippet_ast, ori_vari2new_vari)
    # 5. 为新变量构建hash语句
    hash_stmts = []
    for new_vari, type_decl in new_vari2type_decl.items():
        hash_stmts.append(construct_call_transparent_crc(new_vari))

    return init_stmts, snippet_ast, hash_stmts

    print(snippet_type, '================')
    print(snippet_file_path)
    print('v2t*************************')
    print(snippet_vairable2type)
    print('ori*************************')
    print(snippet)
    print('ok**************************')
    for stmt in init_stmts:
        print(code_generator.visit(stmt) + ';')
    print(code_generator.visit(snippet_ast))
    for stmt in hash_stmts:
        print(code_generator.visit(stmt) + ';')
    print('===============================')
    

def insert_code_snippet_node(global_decl, ast, snippet_type):
    print('444444')
    print('insert')
    # 1. 插入点位置选择: func -> compound -> idx
    ## select func
    func_def_nodes = get_func_def_nodes(ast)
    if isinstance(func_def_nodes, list) and len(func_def_nodes) > 0:
        select_func_def_node = random.choice(func_def_nodes)
        print('55555')
    else:
        print('66666')
        return False
    ## select compound
    compound_nodes = get_specify_nodes_from_func([select_func_def_node], c_ast.Compound)
    select_compound_node = random.choice(compound_nodes)
    ## select idx
    len_of_compound_block_items = len(select_compound_node.block_items) \
        if isinstance(select_compound_node.block_items, list) else 0 # done: fix the bug of "TypeError: object of type 'NoneType' has no len()"
    select_idx = random.randint(0, len_of_compound_block_items)

    # print('==============')
    # print('select_func_def_node:', select_func_def_node.decl.name)
    # print('select_compound_node:', code_generator.visit(select_compound_node))
    # print('select_idx:', select_idx)
    # print('==============')

    if snippet_type == 'return':
        # 2. 获取返回值类型，并构建初始化语句
        return_type_decl = code_generator.visit(select_func_def_node.decl.type.type)
        return_vari_name, init_stmts = construct_variable_init_stmt_node(global_decl, return_type_decl)
        # 3. 执行插入，插入顺序：return -> init
        ## return
        if isinstance(select_compound_node.block_items, list):
            select_compound_node.block_items.insert(select_idx, c_ast.Return(c_ast.ID(return_vari_name)))
        ## init
        for init_stmt in init_stmts:
            if isinstance(select_compound_node.block_items, list):
                select_compound_node.block_items.insert(select_idx, init_stmt)
    else:
        # 2. 初始化语句结点列表、代码片段的ast和hash语句结点列表
        init_stmts, snippet_ast, hash_stmts = select_and_adapt_code_snippet(global_decl, snippet_type)
        # 3. 执行插入，插入顺序：hash -> snippet -> init
        func_body = select_func_def_node.body.block_items
        if not isinstance(func_body, list):
            return False
        ## hash
        for hash_stmt in hash_stmts:
            func_body.insert(len(func_body) - 1, hash_stmt)
        ## snippet
        if isinstance(select_compound_node.block_items, list):
            select_compound_node.block_items.insert(select_idx, snippet_ast)
        ## init
        for init_stmt in init_stmts:
            func_body.insert(0, init_stmt)
    return True
# ⬆⬆ ******************** insert snippet nodes ******************** ⬆⬆ #


def insert_sth(global_decl, ast):
    choice = ['for', 'if', 'while', 'assignment', 'doWhile', 'switch', 'return']
    snippet_type = random.choice(choice)
    insert_code_snippet_node(global_decl, ast, snippet_type)
    return 'insert-{}-snippet'.format(snippet_type)


def get_blacklist():
    err_cnt = 0
    global_decl = GlobalDecl({}, {}, {}, {}, {})
    choice = ['for', 'if', 'while', 'assignment', 'doWhile', 'switch']
    for snippet_type in choice:
        cnt = 0
        snippet_type_dir = os.path.join(CODE_SNIPPETS_DIR, snippet_type)
        # random choice snippet file
        snippet_file_paths = os.listdir(snippet_type_dir)
        for file_name in snippet_file_paths:
            snippet_file_path = os.path.join(snippet_type_dir, file_name)
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
                            if first_line.strip() != '':
                                for variable_type in first_line.split(';'):
                                    variable, type_decl = variable_type.split(':')
                                    snippet_variable2type[variable] = type_decl
                init_stmts, ori_vari2new_vari, new_vari2type_decl = construct_init_stmts_4_snippet(global_decl, snippet_variable2type)
                snippet_ast = transfer_snippet2ast(sinppet_str)
                rename_variable_4_snippet_ast(snippet_ast, ori_vari2new_vari)
                
                new_com = ['']
                for init_stmt in init_stmts:
                    new_com.insert(0, init_stmt)
                new_com = new_com[:-1]
                new_com.append(snippet_ast)
                main_node = c_ast.FuncDef(decl=c_ast.Decl(name='main', quals=[], align=[], storage=[], funcspec=[],
                                type=c_ast.FuncDecl(args=None,
                                             type=c_ast.TypeDecl(declname='main', quals=[],
                                             align=None,
                                             type=c_ast.IdentifierType(names=['int']))
                                             ),
                                init=None,bitsize=None),
                                param_decls=None,
                                body=c_ast.Compound(block_items=new_com))
                main_code = '#include "csmith.h"\n' + code_generator.visit(main_node)
                cnt += 1
                print(snippet_type, '-', cnt, '==============')

                with open('tmp.c', 'w') as f:
                    f.write(main_code)
                
                check_timeout = 60              # 60s
                compiler_mem_limit = 10000000   # 10Gb
                compile_program_cmd = ['clang-18', 'tmp.c', '-I/home/jwzeng/tools/csmith/include', '-w']
                ret_code, output, err_output, is_time_expired, elapsed_time = \
                    run_command(compile_program_cmd, check_timeout, -1, compiler_mem_limit)
                if ret_code != 0:
                    with open('append_hash.log', 'a+') as f:
                        f.write('snippet_file_path: ' + snippet_file_path + '\n')
                        f.write('ret_code: ' + str(ret_code) + '\n')
                        f.write('output: ' + output.decode() + '\n')
                        f.write('err_output: ' + err_output.decode() + '\n')
                        f.write('is_time_expired: ' + str(is_time_expired) + '\n')
                        f.write('elapsed_time: ' + str(elapsed_time) + '\n')
                        f.write(str(err_cnt + 1) + '=====================\n')
                        err_cnt += 1
                        print('now error:', err_cnt)
                    with open('newblacklist.txt', 'a+') as f:
                        f.write('/'.join(snippet_file_path.split('/')[-3:]) + '\n')


if __name__ == '__main__':
    # snippet, snippet_vairable2type, snippet_file_path = select_code_snippet(CODE_SNIPPETS_DIR, 'doWhile')
    # define_snippet, snippet_str, hash_snippet = adapt_code_snippet(snippet, snippet_vairable2type, {})
    # tmp_snippet = "#include <stdint.h>\n"+ "int main{\n" + "int seed = 0;\n"
    # tmp_snippet += define_snippet + snippet_str + hash_snippet
    # tmp_snippet += "}\n"
    # print(tmp_snippet)

    # insert_code_snippet_node(None, None, 'return')
    # cnt = 0
    # for i in range(40000):
    #     choice = ['for', 'if', 'while', 'assignment', 'doWhile', 'switch']
    #     snippet_type = random.choice(choice)
    #     is_in_blacklist = select_code_snippet(CODE_SNIPPETS_DIR, snippet_type)
    #     if is_in_blacklist:
    #         cnt += 1
    # print('total:', cnt)

    get_blacklist()

    exit()
    selects = ['assignment', 'doWhile', 'for', 'if', 'while', 'switch']
    for select in selects:
        for i in range(100):
            insert_code_snippet_node(None, None, select)
            exit()
