#!/usr/bin/env python
# -*- encoding: utf-8 -*-
"""
@Author       : jwzeng
@Date         : 2023-08-27 16:14:10
@LastEditTime : 2023-12-08 18:36:14
@FilePath     : mutate_replace.py
@Description  : 
@
@Copyright (c) 2023 by jwzeng, All Rights Reserved. 
"""

import os, sys
sys.path.append(os.path.abspath(os.path.join(os.getcwd(), "..", "..")))
from util.config import *
from util.mutate.mutate_common import *
from util.mutate.mutate_config import *


# ⬇⬇ ******************** replace for yarpgen ******************** ⬇⬇ #
test_func_code = ''

# ⬇ ******************* replace init value ******************* ⬇ #
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
    FuncDef4InitReplacePositionsVisitor(replace_position_2_variable_and_value).visit(ast)
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

    global TYPE_DECL_2_SIMPLE_TYPE, TYPE_2_RANGE
    # print(type_decl)
    simple_type = TYPE_DECL_2_SIMPLE_TYPE[type_decl[:type_decl.find('[')].strip()]
    type_range = TYPE_2_RANGE[simple_type]

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


def replace_init_value(ast):
    global program_file_path
    driver_file_path = program_file_path[2]
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
# ⬆ ******************* replace init value ******************* ⬆ #


# ⬇ ******************* replace for stmt ******************* ⬇ #

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


class FuncLocation4ReplaceVisitor(NodeVisitor):
    def visit_FuncDef(self, node):
        if node.decl.name == 'test':
            ForReplaceVisitor().visit(node)
            code = code_generator.visit(node)
            code = code.replace('()', '')
            global test_func_code
            test_func_code = code


def replace_for_stmt(ast):
    FuncLocation4ReplaceVisitor().visit(ast)

    global program_file_path
    func_test_path = program_file_path[1]
    lines = []
    with open(func_test_path, 'r') as f:
        lines = f.readlines()
        lines = lines[:9]
        global test_func_code
        lines.append(test_func_code)
    with open(func_test_path, 'w') as f:
        f.writelines(lines)
# ⬆ ******************* replace for stmt ******************* ⬆ #

# ⬇ ******************* replace type declaration ******************* ⬇ #
class IdentifierType4TypeReplaceVisitor(NodeVisitor):
    def __init__(self, variable_name, type_decl, variable2new_type):
        self.variable_name = variable_name
        self.type_decl = type_decl
        self.variable2new_type = variable2new_type

    def visit_IdentifierType(self, node):
        # if variable has been replaced, then directly use the existing new type
        if self.variable_name in self.variable2new_type.keys():
            node.names = self.variable2new_type[self.variable_name]
        else:
            global TYPE_2_NEW_TYPE
            new_types = TYPE_2_NEW_TYPE[self.type_decl]
            new_type = random.choice(new_types)
            node.names = new_type.strip().split()
            self.variable2new_type[self.variable_name] = node.names


class Decl4TypeReplaceVisitor(NodeVisitor):
    def __init__(self, file_line2decl, variable2new_type):
        self.file_line2decl = file_line2decl
        self.variable2new_type = variable2new_type

    def visit_Decl(self, node):
        file_name = node.coord.file.split('/')[-1]
        if file_name.strip() == 'func.c':
            return

        global global_variable2type
        # must a global variable && not a function && in init.h or driver.c
        if node.name in global_variable2type and \
              not isinstance(node.type, c_ast.FuncDecl) and \
                file_name.strip() in ('init.h', 'driver.c'):
            type_decl = global_variable2type[node.name].strip()
            if '[' in type_decl:
                type_decl = type_decl[:type_decl.find('[')].strip()

            global TYPE_2_NEW_TYPE
            if type_decl not in TYPE_2_NEW_TYPE:
                return
            # print('>> ori_decl:', code_generator.visit(node))

            IdentifierType4TypeReplaceVisitor(node.name, type_decl, self.variable2new_type).visit(node)
            file_line = file_name + ':' + str(node.coord.line - 1)
            self.file_line2decl[file_line] = code_generator.visit(node) + ';\n'

            # with open('./test/node.txt', 'a+') as f:
            #     f.write(str(node))
            #     f.write('\n====================\n')
            # print('>> new_decl:', code_generator.visit(node))
            # print('=================================')


def replace_type_declaration(ast):
    # read original files
    global program_file_path
    init_file_path = program_file_path[0]
    driver_file_path = program_file_path[2]
    with open(init_file_path, 'r') as f:
        init_lines = f.readlines()
    with open(driver_file_path, 'r') as f:
        driver_lines = f.readlines()

    # replace type declaration
    file_line2decl = {}
    variable2new_type = {}
    Decl4TypeReplaceVisitor(file_line2decl, variable2new_type).visit(ast)
    for file_line, decl in file_line2decl.items():
        file_line = file_line.split(':')
        file_name = file_line[0]
        line = int(file_line[1])
        if file_name.strip() == 'init.h':
            init_lines[line] = decl
            # print('>> ori init.h:', init_lines[line])
            # print('>> new init.h:', decl)
        elif file_name.strip() == 'driver.c':
            driver_lines[line] = decl
            # print('>> ori driver.c:', driver_lines[line])
            # print('>> new driver.c:', decl)

    # write new files
    with open(init_file_path, 'w') as f:
        f.writelines(init_lines)
    with open(driver_file_path, 'w') as f:
        f.writelines(driver_lines)
# ⬆ ******************* replace type declaration ******************* ⬆ #


# ⬇ ******************* replace stmt with func ******************* ⬇ #
# original variable name => new argument name
ori_variable2new_arg_name = {}
args_nodes = []
func_num = 0
arg_num = 0
new_func_code_list = []


def get_all_variables_from_node(node):
    """
    @description: 获取结点所有的普通变量和数组变量，
                  将变量到新参数的映射关系保存到字典中，
                  并将变量结点保存到列表中（保证变量顺序）
    @param {*} node
    @return {*}
    """
    global ori_variable2new_arg_name, args_nodes, arg_num
    if isinstance(node, c_ast.ArrayRef) or isinstance(node, c_ast.ID):
        ori_variable = code_generator.visit(node)
        if ori_variable not in ori_variable2new_arg_name.keys():
            # 原变量名 => 新参数名
            new_arg_name = 'arg_' + str(arg_num)
            ori_variable2new_arg_name[ori_variable] = new_arg_name
            arg_num += 1
            args_nodes.append(node)
    else:
        for child in node:
            get_all_variables_from_node(child)


def replace_ori_variables_with_new_args(node):
    """
    @description: 将node结点中的所有普通变量替换为新参数;
                  并将数组变量的变量名替换为新参数，将下标去掉
    @param {*} node
    @return {*}
    """
    global ori_variable2new_arg_name
    if isinstance(node, c_ast.ArrayRef):
        # 如果是数组变量，需要将数组下标去掉
        ori_variable = code_generator.visit(node)
        new_arg_name = ori_variable2new_arg_name[ori_variable]
        node.name = c_ast.ID(new_arg_name)
        # 这里设置为None后，数组的括号还在，但是下标没有了。后面处理时需要将[]替换为空
        node.subscript = None
    elif isinstance(node, c_ast.ID):
        # 如果是普通变量，直接替换
        node.name = ori_variable2new_arg_name[node.name]
    else:
        for child in node:
            replace_ori_variables_with_new_args(child)


def construct_new_func_code(node):
    """
    @description: 构建新的函数代码
    @param {*} node 赋值语句节点
    @return {*}
    """
    global func_num, ori_variable2new_arg_name, args_nodes, arg_num, all_variable2type, new_func_code_list

    """
    @step 1: 获取赋值语句左边变量的类型
    @new_func_code:
        int func_0(
    """
    left_value = code_generator.visit(node.lvalue)
    left_value = left_value[:left_value.find('[')] if '[' in left_value else left_value
    left_value_type = all_variable2type[left_value.strip()]
    left_value_type = left_value_type[:left_value_type.find('[')] if '[' in left_value_type else left_value_type
    new_func_code = left_value_type.strip() + ' func_' + str(func_num) + '('

    """
    @step 2: 获取赋值语句右边的所有变量，构造函数参数
    @new_func_code:
        int func_0(int arg_0, char arg_1, ...
    """
    for arg_node in args_nodes:
        ori_variable = code_generator.visit(arg_node)
        new_arg_name = ori_variable2new_arg_name[ori_variable]
        ori_variable = ori_variable[:ori_variable.find('[')] if '[' in ori_variable else ori_variable
        
        type_decl = all_variable2type[ori_variable.strip()]
        type_decl = type_decl[:type_decl.find('[')] if '[' in type_decl else type_decl

        new_func_code += type_decl + ' ' + new_arg_name + ', '
    new_func_code = new_func_code[:-2] if new_func_code[-1] != '(' else new_func_code
    
    """
    @step 3: 将赋值语句右边的所有变量替换为函数参数
    @new_func_code:
        int func_0(int arg_0, char arg_1, ...)
        {
            return arg0 + arg1 + ...;
        }
    """
    replace_ori_variables_with_new_args(node.rvalue)
    right_value = code_generator.visit(node.rvalue)
    right_value = right_value.replace('[]', '') # 承上，将数组的[]替换为空
    new_func_code += ')\n{\n    return ' + right_value + ';\n}\n'

    new_func_code_list.append(new_func_code)


class Assignment4ReplaceStmtWithFuncVisitor(NodeVisitor):
    def visit_Assignment(self, node):
        global func_num, arg_num, ori_variable2new_arg_name, args_nodes

        # print('>> ori code:', code_generator.visit(node))
        get_all_variables_from_node(node.rvalue)

        construct_new_func_code(copy.deepcopy(node))
        # print('>> new func code:')
        # print(new_func_code_list[-1])

        new_args_nodes = copy.deepcopy(args_nodes)
        node.rvalue = c_ast.FuncCall(c_ast.ID('func_' + str(func_num)), c_ast.ExprList(new_args_nodes))

        # print('>> new code:', code_generator.visit(node))
        # print('===========================')

        func_num += 1
        ori_variable2new_arg_name.clear()
        args_nodes.clear()
        arg_num = 0


class FuncDef4ReplaceStmtWithFuncVisitor(NodeVisitor):
    new_test_func_code = ''

    def visit_FuncDef(self, node):
        if node.decl.name == 'test':
            Assignment4ReplaceStmtWithFuncVisitor().visit(node)
            self.new_test_func_code = code_generator.visit(node)


def replace_stmt_with_func(ast):
    test_func = FuncDef4ReplaceStmtWithFuncVisitor()
    test_func.visit(ast)

    global program_file_path, func_num, new_func_code_list, new_test_func_code
    func_test_path = program_file_path[1]
    with open(func_test_path, 'r') as f:
        lines = f.readlines()
        lines = lines[:10] + new_func_code_list + [test_func.new_test_func_code]

    with open(func_test_path, 'w') as f:
        f.writelines(lines)

    func_num = 0
    new_func_code_list.clear()
# ⬆ ******************* replace stmt with func ******************* ⬆ #


def replace(ast):
    select = random.randint(0, 3)
    if select == 0:
        replace_init_value(ast)
        return 'replace-init-value'
    elif select == 1:
        replace_for_stmt(ast)
        return 'replace-for-stmt'
    elif select == 2:
        replace_type_declaration(ast)
        return 'replace-type-declaration'
    else:
        replace_stmt_with_func(ast)
        return 'replace-stmt-with-func'
# ⬆⬆ ******************** replace for yarpgen ******************** ⬆⬆ #


# ⬇⬇ ******************** replace on nodes ******************** ⬇⬇ #
def rename_first_str_name_of_the_root(root, new_name):
    if isinstance(root, c_ast.ID):
        root.name = new_name
        return
    for child in root:
        if isinstance(child, c_ast.ID):
            child.name = new_name
            return
        rename_first_str_name_of_the_root(root, new_name)


def get_ori_vari2type(global_decl, all_vari2type, root, ori_vari2type, vari_idx_list):
    """
    @description: 获取原变量名到类型的映射关系
        例如： 
        v->a => int
        v[1].a => int
        v[1][2].a => int
        v[1][2] => int
        v => int
        *v => int
    @param {*} global_decl 全局变量声明
    @param {*} all_vari2type 变量名到类型的映射关系，包括全局变量和局部变量
    @param {*} root 当前结点
    @param {*} ori_vari2type 返回结果：原变量名到类型的映射关系
    @param {*} vari_idx_list 返回结果：变量名索引列表
    @return {*}
    """
    if isinstance(root, c_ast.ID):
        vari_name = root.name
        # vari_name is in (global_decl, local_decl)
        if vari_name in all_vari2type.keys():
            if vari_name not in ori_vari2type.keys():
                ori_vari2type[vari_name] = all_vari2type[vari_name]
                vari_idx_list.append(vari_name)
            new_name = 'arg_' + str(vari_idx_list.index(vari_name))
            root.name = new_name
    for child in root:
        # if isinstance(child, c_ast.StructRef) or\
        #       isinstance(child, c_ast.ArrayRef) or\
        #           isinstance(child, c_ast.ID):
        #     vari_name = code_generator.visit(child.name)\
        #         if not isinstance(child, c_ast.ID) else child.name
        #     vari_name = transform_vari_name(vari_name)

        #     # vari_name is in (global_decl, local_decl)
        #     if vari_name in all_vari2type.keys():
        #         if vari_name not in ori_vari2type.keys():
        #             ori_vari2type[vari_name] = all_vari2type[vari_name]
        #             vari_idx_list.append(vari_name)
        #         new_name = 'arg_' + str(vari_idx_list.index(vari_name))
        #         rename_first_str_name_of_the_root(child, new_name)
        get_ori_vari2type(global_decl, all_vari2type, child, ori_vari2type, vari_idx_list)


def construct_return_assignment_func_node(func_name, arg_nodes, return_stmt_node, return_type="int"):
    """
    @description: 构建返回赋值语句的函数结点
    @param {*} func_name 函数名
    @param {*} arg_nodes 参数结点列表
    @param {*} return_stmt_node 返回赋值语句结点
    @param {*} return_type 返回类型
    @return {*}
    """
    func_decl_node = c_ast.FuncDecl(c_ast.ParamList(arg_nodes), 
                                    c_ast.TypeDecl(declname=func_name,
                                                   quals=[],
                                                   align=None,
                                                   type=c_ast.IdentifierType(names=[return_type])
                                                   ))
    decl_node = c_ast.Decl(func_name, [], [], [], [], func_decl_node, None, None)
    func_def_node = c_ast.FuncDef(decl_node, None, c_ast.Compound([return_stmt_node]))
    
    return func_def_node


def construct_func_call_node(func_name, args_list):
    return\
        c_ast.FuncCall(name=c_ast.ID(name=func_name),
                       args=c_ast.ExprList(exprs=args_list))


def replace_assignment_with_func(global_decl, ast):
    # todo: 差一种情况没有实现：如果赋值语句左边是结构体变量，例如： ss.a.b
    # todo: 另一种情况： *(*vari)
    # 1. 选择一个赋值语句
    func_def_nodes = get_func_def_nodes(ast)
    if func_def_nodes is None or len(func_def_nodes) == 0:
        return
    select_func_def_node = random.choice(func_def_nodes)
    assignment_nodes = get_specify_nodes_from_func([select_func_def_node], c_ast.Assignment)
    if len(assignment_nodes) == 0:
        return None
    select_assignment_node = random.choice(assignment_nodes)
    # print('ori assignment:', code_generator.visit(select_assignment_node))
    
    # 2. 整合：局部变量和全局变量
    local_vari2type = get_local_decl_from_func(select_func_def_node)
    global_vari2type = global_decl.global_vari2type
    all_vari2type = {**local_vari2type, **global_vari2type}
    # print('local:', local_vari2type)
    # print('global:', global_vari2type)
    # print('all:', all_vari2type)
    # print('=========================== variable')

    # 3. 原变量转化为参数变量
    ori_vari2type = {}
    vari_idx_list = []
    get_ori_vari2type(global_decl, all_vari2type, select_assignment_node.rvalue, ori_vari2type, vari_idx_list)
    return_stmt_node = c_ast.Return(copy.deepcopy(select_assignment_node.rvalue))
    # print('ori_vari2type:', ori_vari2type)
    # print('ori_vari_idx_list:', vari_idx_list)
    # print('new return:', code_generator.visit(return_stmt_node))

    arg_nodes = []
    # print('==== arg nodes begin')
    for i in range(len(vari_idx_list)):
        vari = vari_idx_list[i]
        arg = 'arg_' + str(i)
        ori_type = ori_vari2type[vari]
        if ori_type.find('[') != -1:
            arg += ori_type[ori_type.find('['):]
            ori_type = ori_type[:ori_type.find('[')]
        arg_node = gen_type_decl_node(arg, ori_type)
        arg_nodes.append(arg_node)
    #     print(code_generator.visit(arg_node))
    # print('==== arg nodes end')
    
    # 4. 生成新函数和函数调用语句
    func_name = 'func_' + generate_random_variable_name()
    ori_lvalue_name = code_generator.visit(select_assignment_node.lvalue)
    simple_lvalue_name = transform_vari_name(ori_lvalue_name)
    ori_lvalue_type = all_vari2type[simple_lvalue_name] if simple_lvalue_name in all_vari2type.keys() else 'int'
    ori_lvalue_name_pointer_num = ori_lvalue_name.count('*')
    """
    处理前：
    ori_lvalue_type -> int *** [1][2]
    ori_lvalue_name -> *x
    处理后：
    ori_lvalue_type -> int **
    """
    # print('======')
    # print(ori_lvalue_type)
    # print('======')
    if ori_lvalue_name_pointer_num != 0:
        for i in range(ori_lvalue_name_pointer_num):
            if '*' in ori_lvalue_type:
                ori_lvalue_type = ori_lvalue_type[:ori_lvalue_type.rfind('*')]
    if ori_lvalue_type.find('[') != -1:
        ori_lvalue_type = ori_lvalue_type[:ori_lvalue_type.find('[')]
    return_type = ori_lvalue_type

    new_func_node = construct_return_assignment_func_node(func_name, arg_nodes, return_stmt_node, return_type)
    
    vari_idx_list = [c_ast.ID(name=vari) for vari in vari_idx_list]
    new_func_call = construct_func_call_node(func_name, vari_idx_list)
    select_assignment_node.rvalue = new_func_call
    
    # print('result: ************************')
    # print('>> new func:')
    # print(code_generator.visit(new_func_node))
    # print('>> new assignment:')
    # print(code_generator.visit(select_assignment_node))

    # 5. 得到函数插入位置并插入
    simple_program_file_path = [path.split('/')[-1].strip() for path in program_file_path]
    i = 0
    for node in ast.ext:
        file_path = node.coord.file.split('/')[-1].strip()
        # 排除main结点以及非program_file_path文件的函数结点
        if isinstance(node, c_ast.FuncDef) and \
                node.decl.name != 'main' and \
                file_path in simple_program_file_path:
            new_func_node.coord = plyparser.Coord(program_file_path[0] if len(program_file_path) > 0 else 'test.c', -1)
            ast.ext.insert(i, new_func_node)
            break
        i += 1


def replace_assignment_lvalue(global_decl, ast):
    func_def_nodes = get_func_def_nodes(ast)
    assignment_nodes = get_specify_nodes_from_func(func_def_nodes, c_ast.Assignment)
    if (len(assignment_nodes) == 0):
        return None

    n = 5
    while n:
        n -= 1
        target_node = random.choice(assignment_nodes)
        vari = code_generator.visit(target_node.lvalue)
        # print('>> ori assignment:', code_generator.visit(target_node))
        if vari.find('*') == -1 and vari.find('[') == -1:
            new_vari = random.choice(list(global_decl.type_decls.keys()))
            target_node.lvalue = c_ast.ID(name=new_vari)
            # print('>> new assignment:', code_generator.visit(target_node))
            break
    return True


def replace_sth(global_decl, ast):
    pass
    # res = replace_assignment_lvalue(global_decl, ast)
    # if res is None:
    #     return None
    # return 'replace-assignment-lvalue'

    # # todo: 未完成，后续再开发
    # res = replace_assignment_with_func(global_decl, ast)
