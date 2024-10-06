#!/bin/bash

# /home/compilers/llvm/llvm-15.0.0/bin/clang -O2 -o gcc.out 2056.c
/home/compilers/gcc/gcc-13.1.0/bin/gcc -fsanitize=undefined 2056.c -o gcc.out
if [ $? -ne 0 ]; then
  echo '--- exit 1'
  exit 1
fi

/home/compilers/gcc/gcc-13.1.0/bin/gcc -fsanitize=undefined -O2 2056.c -o clang.out
if [ $? -ne 0 ]; then
  echo '--- exit 2'
  exit 1
fi

./gcc.out > gcc.txt 2>&1
if [ $? -ne 0 ]; then
  echo '--- exit 3'
  exit 1
fi

./clang.out > clang.txt 2>&1
if [ $? -ne 0 ]; then
  echo '--- exit 4'
  exit 1
fi

diff gcc.txt clang.txt
if [ $? -ne 0 ]; then
  echo '--- exit 0'
  exit 0 # output is different, interesting!
else
  echo '--- exit 5'
  exit 1 # output is the same, boring!
fi

