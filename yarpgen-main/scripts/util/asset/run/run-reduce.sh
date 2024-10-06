#!/bin/bash

echo
echo "icc -O0"
icc -O0 reduce.c -w -diag-disable=10441; ./a.out
echo
echo "icc -O1"
icc -O1 reduce.c -w -diag-disable=10441; ./a.out
echo
echo "icc -O2"
icc -O2 reduce.c -w -diag-disable=10441; ./a.out
echo
echo "icc -O3"
icc -O3 reduce.c -w -diag-disable=10441; ./a.out
echo
echo "icc -Os"
icc -Os reduce.c -w -diag-disable=10441; ./a.out

echo
echo "gcc-tk -O0 asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=address -O0 -w; ./a.out
echo
echo "gcc-tk -O1 asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=address -O1 -w; ./a.out
echo
echo "gcc-tk -O2 asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=address -O2 -w; ./a.out
echo
echo "gcc-tk -O3 asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=address -O3 -w; ./a.out
echo
echo "gcc-tk -Os asan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=address -Os -w; ./a.out

echo
echo "clang-18 -O0 asan"
clang-18 reduce.c -fsanitize=address -O0 -w; ./a.out
echo
echo "clang-18 -O1 asan"
clang-18 reduce.c -fsanitize=address -O1 -w; ./a.out
echo
echo "clang-18 -O2 asan"
clang-18 reduce.c -fsanitize=address -O2 -w; ./a.out
echo
echo "clang-18 -O3 asan"
clang-18 reduce.c -fsanitize=address -O3 -w; ./a.out
echo
echo "clang-18 -Os asan"
clang-18 reduce.c -fsanitize=address -Os -w; ./a.out

echo
echo "gcc-tk -O0 ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=undefined -O0 -w; ./a.out
echo
echo "gcc-tk -O1 ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=undefined -O1 -w; ./a.out
echo
echo "gcc-tk -O2 ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=undefined -O2 -w; ./a.out
echo
echo "gcc-tk -O3 ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=undefined -O3 -w; ./a.out
echo
echo "gcc-tk -Os ubsan"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -fsanitize=undefined -Os -w; ./a.out

echo
echo "clang-18 -O0 ubsan"
clang-18 reduce.c -fsanitize=undefined -O0 -w; ./a.out
echo
echo "clang-18 -O1 ubsan"
clang-18 reduce.c -fsanitize=undefined -O1 -w; ./a.out
echo
echo "clang-18 -O2 ubsan"
clang-18 reduce.c -fsanitize=undefined -O2 -w; ./a.out
echo
echo "clang-18 -O3 ubsan"
clang-18 reduce.c -fsanitize=undefined -O3 -w; ./a.out
echo
echo "clang-18 -Os ubsan"
clang-18 reduce.c -fsanitize=undefined -Os -w; ./a.out

echo
echo "gcc-tk -O0"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -O0 -w; ./a.out
echo
echo "gcc-tk -O1"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -O1 -w; ./a.out
echo
echo "gcc-tk -O2"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -O2 -w; ./a.out
echo
echo "gcc-tk -O3"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -O3 -w; ./a.out
echo
echo "gcc-tk -Os"
/home/jwzeng/compilers/gcc/gcc-trunk-20230823/bin/gcc reduce.c -Os -w; ./a.out

echo
echo "clang-18 -O0"
clang-18 reduce.c -O0 -w; ./a.out
echo
echo "clang-18 -O1"
clang-18 reduce.c -O1 -w; ./a.out
echo
echo "clang-18 -O2"
clang-18 reduce.c -O2 -w; ./a.out
echo
echo "clang-18 -O3"
clang-18 reduce.c -O3 -w; ./a.out
echo
echo "clang-18 -Os"
clang-18 reduce.c -Os -w; ./a.out
