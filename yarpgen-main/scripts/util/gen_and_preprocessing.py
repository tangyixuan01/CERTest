"""
@Author       : jwzeng
@Date         : 2023-07-28 12:56:41
@LastEditTime : 2023-07-29 14:03:23
@FilePath     : \scripts\util\gen_and_preprocessing.py
@Description  : 自动生成程序并进行预处理
@
@Copyright (c) 2023 by jwzeng, All Rights Reserved. 
"""

from sys_util import *
import sys

yarpgen = '/home/workplace/paper_reproduction/yarpgen/scripts/yarpgen'

def gen_and_preprocessing_cpp(tmp_dir, target_dir, target_file):
    """
    @description: 使用yarpgen生成程序并进行预处理，将多文件合并为单文件
    @param {*} tmp_dir 临时文件夹，用于存放yarpgen生成的多文件
    @param {*} target_dir 目标文件夹，用于存放预处理后的单文件
    @param {*} target_file 目标文件，合并后的单文件
    @return {*}
    """
    
    if not os.path.exists(target_dir):
        os.makedirs(target_dir)
    if not os.path.exists(tmp_dir):
        os.makedirs(tmp_dir)
    
    os.chdir(tmp_dir)
    exec_cmd(yarpgen)

    # return
    func_cpp, driver_cpp = '', ''
    with open('func.cpp', 'r') as f:
        func_cpp = f.readlines()
    with open('driver.cpp', 'r') as f:
        driver_cpp = f.readlines()
    with open(target_file, 'w') as f:
        driver_cpp.insert(0, '#include <iostream>\n')
        driver_cpp += func_cpp[7:]
    
        f.writelines(driver_cpp)


def main():
    target_dir = sys.argv[1]
    tmp_dir = target_dir + '/tmp'
    for i in range(1000):
        print(i)
        gen_and_preprocessing_cpp(tmp_dir, target_dir, target_dir + '/' + str(i) + '.cpp')
        # exec_cmd('rm -rf ' + tmp_dir + '/*')

main()