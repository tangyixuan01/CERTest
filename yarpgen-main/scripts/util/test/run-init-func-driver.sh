#!/bin/bash

echo
echo "gcc-tk -O0 asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=address -O0 -w; ./a.out
echo
echo "gcc-tk -O1 asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=address -O1 -w; ./a.out
echo
echo "gcc-tk -O2 asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=address -O2 -w; ./a.out
echo
echo "gcc-tk -O3 asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=address -O3 -w; ./a.out
echo
echo "gcc-tk -Os asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=address -Os -w; ./a.out

echo
echo "clang-18 -O0 asan"
clang-18 init.h func.c driver.c -fsanitize=address -O0 -w; ./a.out
echo
echo "clang-18 -O1 asan"
clang-18 init.h func.c driver.c -fsanitize=address -O1 -w; ./a.out
echo
echo "clang-18 -O2 asan"
clang-18 init.h func.c driver.c -fsanitize=address -O2 -w; ./a.out
echo
echo "clang-18 -O3 asan"
clang-18 init.h func.c driver.c -fsanitize=address -O3 -w; ./a.out
echo
echo "clang-18 -Os asan"
clang-18 init.h func.c driver.c -fsanitize=address -Os -w; ./a.out

echo
echo "gcc-tk -O0 ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=undefined -O0 -w; ./a.out
echo
echo "gcc-tk -O1 ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=undefined -O1 -w; ./a.out
echo
echo "gcc-tk -O2 ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=undefined -O2 -w; ./a.out
echo
echo "gcc-tk -O3 ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=undefined -O3 -w; ./a.out
echo
echo "gcc-tk -Os ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -fsanitize=undefined -Os -w; ./a.out

echo
echo "clang-18 -O0 ubsan"
clang-18 init.h func.c driver.c -fsanitize=undefined -O0 -w; ./a.out
echo
echo "clang-18 -O1 ubsan"
clang-18 init.h func.c driver.c -fsanitize=undefined -O1 -w; ./a.out
echo
echo "clang-18 -O2 ubsan"
clang-18 init.h func.c driver.c -fsanitize=undefined -O2 -w; ./a.out
echo
echo "clang-18 -O3 ubsan"
clang-18 init.h func.c driver.c -fsanitize=undefined -O3 -w; ./a.out
echo
echo "clang-18 -Os ubsan"
clang-18 init.h func.c driver.c -fsanitize=undefined -Os -w; ./a.out

echo
echo "gcc-tk -O0"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -O0 -w; ./a.out
echo
echo "gcc-tk -O1"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -O1 -w; ./a.out
echo
echo "gcc-tk -O2"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -O2 -w; ./a.out
echo
echo "gcc-tk -O3"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -O3 -w; ./a.out
echo
echo "gcc-tk -Os"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc init.h func.c driver.c -Os -w; ./a.out

echo
echo "clang-18 -O0"
clang-18 init.h func.c driver.c -O0 -w; ./a.out
echo
echo "clang-18 -O1"
clang-18 init.h func.c driver.c -O1 -w; ./a.out
echo
echo "clang-18 -O2"
clang-18 init.h func.c driver.c -O2 -w; ./a.out
echo
echo "clang-18 -O3"
clang-18 init.h func.c driver.c -O3 -w; ./a.out
echo
echo "clang-18 -Os"
clang-18 init.h func.c driver.c -Os -w; ./a.out