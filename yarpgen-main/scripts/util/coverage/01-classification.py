"""
@Author       : jun-wei-zeng
@Date         : 2023-10-15 14:00:33
@LastEditTime : 2023-10-16 12:11:44
@FilePath     : 01-classification.py
@Description  : 
@
@Copyright (c) 2023 by jun-wei-zeng, All Rights Reserved. 
"""


import os


def all_files_path(target_dir, file_paths):
    for root, dirs, files in os.walk(target_dir):
        for file in files:
            if file.endswith('.c'):
                file_paths.append(os.path.join(root, file))


def move_files_to_target_dir(programs_dir, target_dir, per_dir_num=2500):
    file_paths = []
    # all_files_path(programs_dir, file_paths)
    file_paths = os.listdir(programs_dir)
    file_paths = [os.path.join(programs_dir, file_path) for file_path in file_paths]
    file_paths = sorted(file_paths, key=lambda x: int(x.split('/')[-1].split('-')[1]))
    print(file_paths)
    print(len(file_paths))

    new_dir_num = len(file_paths) // per_dir_num + 1

    for i in range(1, new_dir_num + 1):
        print(i, '====')
        new_dir = os.path.join(target_dir, 'seg-' + str(i))
        os.makedirs(new_dir, exist_ok=True)
        end_idx = i * per_dir_num if i < new_dir_num else len(file_paths)
        for file_path in file_paths[(i - 1) * per_dir_num: end_idx]:
            os.system(f'mv {file_path} {new_dir}')


def move_target_dir_to_src_dir(target_dir, src_dir):
    for i in range(1, 50):
        files = os.listdir(os.path.join(target_dir, 'seg-' + str(i)))
        for file in files:
            os.system(f'mv {os.path.join(target_dir, "seg-" + str(i), file)} {src_dir}')


if __name__ == '__main__':
    move_files_to_target_dir('./csmith-mutate', './csmith-mutate')
    # move_target_dir_to_src_dir('./csmith', './csmith')
