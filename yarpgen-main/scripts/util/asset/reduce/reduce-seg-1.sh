#!/bin/bash

test_makefile="/home/jwzeng/workplace/compiler_testing/scripts/testing-20230914-10t3csmith-v3-ubuntu/result/clang/runfail/S_287706997/reduce/Test_Makefile"

make -f $test_makefile clang_no_opt >/dev/null 2>&1 &&\
./clang_no_opt_out > output1.txt
if [ $? -eq 139 ]; then
    echo "1 Segmentation fault"
    exit 1
else
    make -f $test_makefile clang_opt_o3 >/dev/null 2>&1 &&\
    ./clang_opt_o3_out > output2.txt &&
    diff output1.txt output2.txt
    if [ $? -eq 139 ]; then
        echo "2 Segmentation fault"
        exit 1
    else
        make -f $test_makefile clang_opt_o1 >/dev/null 2>&1 &&\
        ./clang_opt_o1_out >> log.txt 2>&1
        if [ $? -eq 139 ]; then
            echo "3 Segmentation fault"
            exit 0
        else
            echo "No segmentation fault"
            exit 1
        fi
    fi
fi
