#!/bin/bash

### 说明：保证对比优化情况下，进程不超时且不segmentation fault； 
###      目标优化情况下，进程不超时且segmentation fault

rm -rf *.out
rm -rf *out*.*
rm -rf *.err.*
rm -rf out*.txt

ulimit -t 30

gcc="/home/jwzeng/compilers/gcc/gcc-13.1.0/bin/gcc"
clang="clang-18"

other_opt="-I/home/jwzeng/tools/csmith/include"


if 
$gcc $other_opt -c -Wall -Wextra -O1 test.c  >outa.txt 2>&1 &&\
  ! grep uninitialized outa.txt &&\
  ! grep 'control reaches end' outa.txt &&\
  ! grep 'no semicolon at end' outa.txt &&\
  ! grep 'incompatible pointer' outa.txt &&\
  ! grep 'cast from pointer to integer' outa.txt &&\
  ! grep 'ordered comparison of pointer with integer' outa.txt &&\
  ! grep 'declaration does not declare anything' outa.txt &&\
  ! grep 'expects type' outa.txt &&\
  ! grep 'assumed to have one element' outa.txt &&\
  ! grep 'division by zero' outa.txt &&\
  ! grep 'pointer from integer' outa.txt &&\
  ! grep 'incompatible implicit' outa.txt &&\
  ! grep 'excess elements in struct initializer' outa.txt &&\
  ! grep 'comparison between pointer and integer' outa.txt &&\
$clang $other_opt  -pedantic -Wall -O1 -c test.c  >out.txt 2>&1 &&\
  ! grep 'conversions than data arguments' out.txt &&\
  ! grep 'incompatible redeclaration' out.txt &&\
  ! grep 'ordered comparison between pointer' out.txt &&\
  ! grep 'eliding middle term' out.txt &&\
  ! grep 'end of non-void function' out.txt &&\
  ! grep 'invalid in C99' out.txt &&\
  ! grep 'specifies type' out.txt &&\
  ! grep 'should return a value' out.txt &&\
  ! grep 'uninitialized' out.txt &&\
  ! grep 'incompatible pointer to' out.txt &&\
  ! grep 'incompatible integer to' out.txt &&\
  ! grep 'type specifier missing' out.txt 
then
  $clang -I/home/jwzeng/tools/csmith/include -std=c99 -fPIC -mcmodel=large -w -fopenmp-simd -O2 test.c
  ./a.out
  t=$?
  if [ $t = "137" ] || [ $t = "139" ]; then
    # echo "1----"
    exit 1
  fi
  $clang -I/home/jwzeng/tools/csmith/include -std=c99 -fPIC -mcmodel=large -w -fopenmp-simd -O1 test.c
  ./a.out
  t=$?
  if [ $t = "137" ] || [ ! $t = "139" ]; then
    # echo "2----"
    exit 1
  fi
  # echo "3----"
  exit 0
else
  # echo "4----"
  exit 1
fi

# ./a.out
# if [ $? -eq 139 ]; then
#   echo "segmentation fault"
#   exit 0
# fi

