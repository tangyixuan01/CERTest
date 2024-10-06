#!/bin/bash

opts=(-O0 -O2 -Os)
for i in {0..2}
do
    echo ${opts[i]}
    /home/compilers/gcc/gcc-trunk/bin/gcc reduce.c -w ${opts[i]} > out${i}.txt 2>&1
    if [[ $(wc -l < out${i}.txt) -ne 0 ]] ; then
        wc -l < out${i}.txt
        echo "1>> file contains error"
        exit 1
    else 
        echo "1>> file is empty"
    fi
    if [[ $(grep -e "error" -e "Error" -e "ERROR" out${i}.txt | wc -l) -ne 0 ]] ; 
    then
        echo "2>> there are some errors"
        exit 1
    else 
        echo "2>> there is no error"
    fi
    # 判断a.out是否存在
    if [[ ! -f "a.out" ]] ; then
        echo "3>> a.out does not exist"
        exit 1
    else 
        echo "3>> a.out exists"
    fi
    ./a.out > out${i}.txt
    echo
done

# 如果out0.txt和out1.txt不一样，且out0.txt和out2.txt一样，则输出正确，否则输出错误
if ! diff out0.txt out1.txt >/dev/null && diff out0.txt out2.txt >/dev/null; then
    echo "Correct"
    exit 0
else
    echo "Wrong"
    exit 1
fi