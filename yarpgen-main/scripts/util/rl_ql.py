"""
@Author       : jun-wei-zeng
@Date         : 2023-09-28 16:48:55
@LastEditTime : 2023-10-24 20:54:23
@FilePath     : reinforcement_learning.py
@Description  : 
@
@Copyright (c) 2023 by jun-wei-zeng, All Rights Reserved. 
"""

import os, sys
import numpy as np
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.metrics.pairwise import cosine_similarity

sys.path.append(os.path.abspath(os.path.join(os.getcwd(), "..")))
from util.sys_util import *
from util.mutate_util import *



"""
Q-learning实现：
动作：12种变异算子，每次选择一种对程序进行变异
状态：2种状态，一种是变异后程序与变异前程序的向量距离，二是变异后程序是否无未定义行为
奖励规则：如果向量距离增加，说明程序复杂性增加，奖励值加1；如果变异后的程序无未定义行为，则奖励值加1
"""

mutation2state = {
    # insert
    'insert-for-snippet': 0,
    'insert-if-snippet': 1,
    'insert-while-snippet': 2,
    'insert-assignment-snippet': 3,
    'insert-doWhile-snippet': 4,
    'insert-switch-snippet': 5,
    'insert-return-snippet': 6,
    # prune
    'prune-if-snippet': 7,
    'prune-for-snippet': 8,
    'prune-assignment-snippet': 9,
    'prune-compound-snippet': 10,
    'prune-return-snippet': 11,
}

action2mutation = {
    0: 'insert-for',
    1: 'insert-if',
    2: 'insert-while',
    3: 'insert-assignment',
    4: 'insert-doWhile',
    5: 'insert-switch',
    6: 'insert-return',
    7: 'prune-if',
    8: 'prune-for',
    9: 'prune-assignment',
    10: 'prune-compound',
    11: 'prune-return'
}


#### new
import numpy as np
class QLearning:
    def __init__(self, num_actions, num_states, alpha=0.1, gamma=0.9, epsilon=0.1):
        self.num_actions = num_actions
        self.num_states = num_states
        self.Q = np.zeros((self.num_states, self.num_actions))
        self.alpha = alpha
        self.gamma = gamma
        self.epsilon = epsilon

    def map_state(self, current_distance, is_ub):
        return int((current_distance + int(is_ub)) * 100)

    def choose_action(self, state):
        if np.random.rand() < self.epsilon:
            return np.random.randint(self.num_actions)
        else:
            return np.argmax(self.Q[state, :])

    def update_q_value(self, state, action, new_state, reward):
        self.Q[state, action] = (1 - self.alpha) * self.Q[state, action] + self.alpha * (reward + self.gamma * np.max(self.Q[new_state, :]))

    def train(self, num_episodes, max_steps, seeds, run_dir):
        # 初始化TF-IDF向量化器
        vectorizer = TfidfVectorizer()
        seed_idx = 0
        os.chdir(run_dir)
        mutate_nums = []
        for episode in range(num_episodes):
            print('***********', episode, 'episode', '***********')
            # 初始化环境
            similarity_list = [1]
            is_ub = False
            step = 0
            
            seed = seeds[seed_idx]
            print('>> ' + str(seed_idx) + '-th seed:', seed)

            exec_cmd('csmith -s ' + str(seed) + ' -o test.c')
            ast, global_decl = program_preprocessing('.')
            new_code = code_generator.visit(ast)
            lines = new_code.split('\n')
            lines = lines[726:]
            lines.insert(0, '#include "csmith.h"\n')
            new_code = '\n'.join(lines)
            program_texts = [new_code]

            mutate_cnt = 0
            while True:
                state = self.map_state(sum(similarity_list) / len(similarity_list), is_ub)
                print('>>>>>>>> state:', state)
                action = self.choose_action(state)
                # 执行动作，获得新状态和奖励
                mutation = action2mutation[action]
                mutation = mutation.split('-')
                if mutation[0] == 'insert':
                    insert_code_snippet_node(global_decl, ast, mutation[1])
                    mutation_operator_label = 'insert-{}-snippet'.format(mutation[1])
                else:
                    is_prune = prune_code_snippet_node(global_decl, ast, mutation[1])
                    if not is_prune:
                        continue
                    mutation_operator_label = 'prune-{}-snippet'.format(mutation[1])
                print('  ->', mutation_operator_label)
                new_code = code_generator.visit(ast)
                lines = new_code.split('\n')
                lines = lines[726:]
                lines.insert(0, '#include "csmith.h"\n')
                new_code = '\n'.join(lines)
                with open('test.c', 'w') as f:
                    f.write(new_code)
                program_texts.append(new_code)
                # 将程序文本转化为TF-IDF特征向量
                X = vectorizer.fit_transform(program_texts)
                # 计算新程序与其他程序之间的余弦相似度
                cosine_sims = cosine_similarity(X[0], X[1:])[0]
                # 计算平均距离
                new_similarity = sum(cosine_sims) / len(cosine_sims)

                for sanitizer in ['MSAN', 'ASAN', 'UBSAN']:
                    if not check_program_by_sanitizer_with_single_threaded(SANITIZER, sanitizer, 
                                                      program_file_path, '.', 
                                                      -1, seed, None, 
                                                      mutation_operator_label, 10):
                        print('error----')
                        is_ub = True
                        break
                
                new_state = self.map_state(sum(similarity_list) / len(similarity_list), is_ub)
                reward = 0
                if new_similarity < (sum(similarity_list) / len(similarity_list)):
                    reward += 1
                else:
                    reward -= 1
                if not is_ub:
                    reward += 1
                else:
                    reward -= 1
                self.update_q_value(state, action, new_state, reward)

                similarity_list.append(new_similarity)
                mutate_cnt += 1
                step += 1
                if step >= max_steps:
                    break

                if is_ub:
                    print()
                    similarity_list.append(1)
                    if is_ub:
                        print('ub +++++ 1')
                        mutate_nums.append(mutate_cnt)
                    is_ub = False
                    mutate_cnt = 0

                    seed_idx += 1
                    seed = seeds[seed_idx]
                    print('>> ' + str(seed_idx) + '-th seed:', seed, '=====> step', step)

                    exec_cmd('csmith -s ' + str(seed) + ' -o test.c')
                    ast, global_decl = program_preprocessing('.')
                    new_code = code_generator.visit(ast)
                    lines = new_code.split('\n')
                    lines = lines[726:]
                    lines.insert(0, '#include "csmith.h"\n')
                    new_code = '\n'.join(lines)
                    program_texts.append(new_code)
            
            with open('res.log', 'a+') as f:
                f.write(str(episode) + ' ==============\n')
                f.write('>> Q-table is following:\n')
                f.write(str(self.Q) + '\n')
                avg_of_mutate_nums = sum(mutate_nums) / len(mutate_nums) if len(mutate_nums) > 0 else -1
                f.write('>> avg of mutate_nums:' + str(avg_of_mutate_nums) + '\n')
            np.save('Q_values-{}.npy'.format(str(episode)), self.Q)

            seed_idx += 1
        with open('res.log', 'a+') as f:
            f.write('==================\n')
            f.write('==================\n')
            f.write('>> mutate_nums:\n')
            f.write(str(mutate_nums))


if __name__ == "__main__":
    with open('/home/jwzeng/workplace/compiler_testing/scripts/seeds/seeds_100t_8_csmith.txt', 'r') as f:
        seeds = f.readlines()
    seeds = [s.strip() for s in seeds]

    # 示例用法
    q_learning = QLearning(num_actions=12, num_states=201, alpha=0.1, gamma=0.9, epsilon=0.2)

    num_episodes = 5
    q_learning.train(num_episodes, 100, seeds, '/home/jwzeng/workplace/compiler_testing/scripts/util/test/dqn')

    # chosen_action = q_learning.select_action()
    # print("选择的动作:", chosen_action)
