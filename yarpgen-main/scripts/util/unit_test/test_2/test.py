import time
import os, sys
sys.path.append(os.path.abspath(os.path.join(os.getcwd(), "..", "..", "..")))
from util.mutate_util import *
from scripts.util.mutator_scheduler import *



if __name__ == "__main__":
    os.chdir('tmp')
    mutate_label2num = {}
    ub_caused_mutate_label2num = {}
    seed_mutate_nums = []
    all_seed_mutate_times = []
    for i in range(1000):
        print(i, 'th seed ==========================')
        exec_cmd('csmith -o test.c')
        is_frist = True

        mutate_num = 0
        begin_time = time.time()
        while True:
            print(mutate_num, 'th mutate ******************************')
            if is_frist:
                is_frist = False
                is_free, mutate_label = mutate_program_csmith_for_test('.', is_first=True)
            else:
                is_free, mutate_label = mutate_program_csmith_for_test('.', is_first=False)
            print(is_free, mutate_label, '-----')
            if mutate_label not in mutate_label2num:
                mutate_label2num[mutate_label] = 1
            else:
                mutate_label2num[mutate_label] += 1
            mutate_label2rate_score = calculate(['test.c'], mutate_label2num, ub_caused_mutate_label2num, mutate_label, is_free)
            mutate_num += 1
            if not is_free:
                if mutate_label not in ub_caused_mutate_label2num:
                    ub_caused_mutate_label2num[mutate_label] = 1
                else:
                    ub_caused_mutate_label2num[mutate_label] += 1
                seed_mutate_nums.append(mutate_num)
                break
            if mutate_num >= 20:
                mutate_num = 0
                break
        end_time = time.time()
        print(">>>> this seed mutate time: ", end_time - begin_time)
        all_seed_mutate_times.append(end_time - begin_time)

        if i % 10 == 0:
            with open('res.log', 'a+') as f:
                f.write(str(i) + 'th ======================\n')
                f.write('>> avg_mutate_num: ' + str(sum(seed_mutate_nums) / len(seed_mutate_nums)) + '\n')
                f.write('>> mutate_label2num: ' + str(mutate_label2num) + '\n')
                f.write('>> mutate_label2rate_score: ' + str(mutate_label2rate_score) + '\n')
                f.write('>> all_seed_mutate_times: ' + str(all_seed_mutate_times) + '\n')
                f.write('>> per_seed_mutate_times: ' + str(sum(all_seed_mutate_times) / len(all_seed_mutate_times)) + '\n')
    
    with open('res.log', 'a+') as f:
        f.write('end ======================\n')
        f.write('>> avg_mutate_num: ' + str(sum(seed_mutate_nums) / len(seed_mutate_nums)) + '\n')
        f.write('>> mutate_label2num: ' + str(mutate_label2num) + '\n')
        f.write('>> mutate_label2rate_score: ' + str(mutate_label2rate_score) + '\n')
        f.write('>> seed_mutate_nums: ' + str(seed_mutate_nums) + '\n')