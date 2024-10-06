#!/bin/bash

echo "gcc-tk -O0 asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=address -O0 -w; ./a.out

echo
echo "gcc-tk -O0"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc -std=c99 -fPIC -mcmodel=large -w -fpermissive init.h func.c driver.c -O0 -w; ./a.out

echo
echo "clang-18 -O0 asan"
clang-18 init.h func.c driver.c -fsanitize=address -O0 -w; ./a.out

echo
echo "clang-18 -O1 asan"
clang-18 init.h func.c driver.c -fsanitize=address -O1 -w; ./a.out

echo
echo "clang-18 -Os asan"
clang-18 init.h func.c driver.c -fsanitize=address -Os -w; ./a.out

echo
echo "clang-18 -O2 asan"
clang-18 init.h func.c driver.c -fsanitize=address -O2 -w; ./a.out

echo
echo "clang-18 -O3 asan"
clang-18 init.h func.c driver.c -fsanitize=address -O3 -w; ./a.out

