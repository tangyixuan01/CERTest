"""
@Author       : jun-wei-zeng
@Date         : 2023-12-02 22:40:20
@LastEditTime : 2023-12-02 22:53:45
@FilePath     : find_target_files.py
@Description  : 从目标目录中找出所有的log.txt文件，然后找出其中Optset不是gcc_no_opt的文件
运行方式： python find_target_files.py /path/to/target_dir
@
@Copyright (c) 2023 by jun-wei-zeng, All Rights Reserved. 
"""

import os, sys
# target_dir下所有的log.txt文件
def get_target_files(target_dir, target_file_name="log.txt"):
    target_files = []
    for root, dirs, files in os.walk(target_dir):
        for file in files:
            if file == target_file_name:
                target_files.append(os.path.join(root, file))
    return target_files

target_files = get_target_files(sys.argv[1])

for file in target_files:
    with open(file, 'r') as f:
        lines = f.readlines()
        for i in range(len(lines)):
            if lines[i].startswith("==== BAD =================================="):
                if not lines[i+1].strip().endswith("no_opt"):
                    print(file)
                break
