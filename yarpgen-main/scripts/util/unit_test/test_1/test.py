import os, sys
sys.path.append(os.path.abspath(os.path.join(os.getcwd(), "..", "..", "..")))
from util.mutate_util import *

"""
测试变异算子：
将赋值语句替换成函数
"""

def test_mytest(test_dir, proc_num=-1, seed=-1, lock=None):
    global program_file_path
    program_file_path.append(os.path.join(test_dir, 'mytest.c'))
    test_program = program_file_path[0]

    ast = parse_c_program_file(test_program)
    with open('ast.txt', 'w') as f:
        f.write(str(ast))

    global_decl, main_node = get_global_decl_and_main_node(ast)
    global_decl.init()

    trans_stmt_to_compound(global_decl, ast)
    # global_decl.print_all()
    # call_func_in_main(global_decl, main_node)

    ################## mutation ##################
    mutation_operator_label = replace_assignment_with_func(global_decl, ast)
    ##############################################

    new_code = code_generator.visit(ast)
    with open(test_program + '.new', 'w') as f:
        f.write(new_code)

    return mutation_operator_label


def test_csmith(test_dir, proc_num=-1, seed=-1, lock=None):
    exec_cmd('csmith -s ' + str(seed) + ' -o test.c')
    # exec_cmd('csmith -o test.c')
    
    global program_file_path
    program_file_path.append(os.path.join(test_dir, 'test.c'))
    test_program = program_file_path[0]

    ast = parse_c_program_file(test_program)
    with open('ast.txt', 'w') as f:
        f.write(str(ast))

    global_decl, main_node = get_global_decl_and_main_node(ast)
    global_decl.init()

    trans_stmt_to_compound(global_decl, ast)
    # global_decl.print_all()
    # call_func_in_main(global_decl, main_node)

    ################## mutation ##################
    mutation_operator_label = replace_assignment_with_func(global_decl, ast)
    ##############################################
    
    new_code = code_generator.visit(ast)
    lines = new_code.split('\n')
    lines = lines[726:]
    lines.insert(0, '#include "csmith.h"\n')
    new_code = '\n'.join(lines)
    with open('test-new.c', 'w') as f:
        f.write(new_code)

    return 'replace_assignment_with_func'


if __name__ == "__main__":
    if not os.path.exists('tmp'):
        os.mkdir('tmp')
    os.chdir('tmp')
    # test_mytest('.', -1, -1)
    # exit()

    cnt = 0
    for i in range(1000):
        print('=====================')
        seed = random.randint(0, 1000000000)
        # seed = '689949167'
        # seed = '328480304'
        # seed = '1180670756'
        print(i, '- seed:', seed)
        mutation_operator_label = test_csmith(test_dir='.', seed=seed)

        print(mutation_operator_label)
        compile_program_cmd = ['clang-18', 'test-new.c', '-I/home/jwzeng/tools/csmith/include', '-w']
        ret_code, output, err_output, is_time_expired, elapsed_time = \
            run_command(compile_program_cmd, check_timeout, -1, compiler_mem_limit)
        if ret_code != 0:
            cnt += 1
            print('now error:', cnt)
            new_name = 'error-' + str(cnt) + '-S_' + str(seed) + '.c'
            with open('mutate_replace_assignment_with_func.log', 'a+') as f:
                f.write('seed: ' + str(seed) + '\n')
                f.write('mutate_label: ' + str(mutation_operator_label) + '\n')
                f.write('ret_code: ' + str(ret_code) + '\n')
                f.write('output: ' + output.decode() + '\n')
                f.write('err_output: ' + err_output.decode() + '\n')
                f.write('is_time_expired: ' + str(is_time_expired) + '\n')
                f.write('elapsed_time: ' + str(elapsed_time) + '\n')
                f.write(new_name + ' =====================\n')

            os.rename('test-new.c', new_name)
    print(cnt)