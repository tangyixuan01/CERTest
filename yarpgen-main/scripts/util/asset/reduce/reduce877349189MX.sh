#!/bin/bash
xgcc=/usr/gcc-11-trunk/bin/gcc
gcc=gcc-9
clang=clang-10
src=877349189MX.c

rm -rf *.out
rm -rf *out*.*
rm -rf *.err.*

ulimit -t 5

if 
$clang $opt -pedantic -Wall -Wextra -I/home/fyu/MinCond/csmith/RRS_runtime_test/ -I/home/fyu/MinCond/csmith/build/runtime/ $src -DUSE_MATH_MACROS -o clang.out >outb.txt 2>&1 &&\
  ! grep 'conversions than data arguments' outb.txt &&\
  ! grep 'incompatible redeclaration' outb.txt &&\
  ! grep 'ordered comparison between pointer' outb.txt &&\
  ! grep 'eliding middle term' outb.txt &&\
  ! grep 'end of non-void function' outb.txt &&\
  ! grep 'invalid in C99' outb.txt &&\
  ! grep 'specifies type' outb.txt &&\
  ! grep 'should return a value' outb.txt &&\
  ! grep 'uninitialized' outb.txt &&\
  ! grep 'incompatible pointer to' outb.txt &&\
  ! grep 'incompatible integer to' outb.txt &&\
  ! grep 'type specifier missing' outb.txt &&\
$gcc -O2 -pedantic -Wall -Wextra -fsanitize=undefined -I/home/fyu/MinCond/csmith/RRS_runtime_test/ -I/home/fyu/MinCond/csmith/build/runtime/ $src -DUSE_MATH_MACROS -o gccsan.out >out.txt 2>&1 &&\
  ! grep "uninitialized" out.txt &&\
  ! grep 'without a cast' out.txt &&\
  ! grep 'expects a matching' out.txt &&\
  ! grep 'control reaches end' out.txt &&\
  ! grep 'return type defaults' out.txt &&\
  ! grep 'cast from pointer to integer' out.txt &&\
  ! grep 'useless type name in empty declaration' out.txt &&\
  ! grep 'no semicolon at end' out.txt &&\
  ! grep 'type defaults to' out.txt &&\
  ! grep 'too few arguments for format' out.txt &&\
  ! grep 'incompatible pointer' out.txt &&\
  ! grep 'ordered comparison of pointer with integer' out.txt &&\
  ! grep 'declaration does not declare anything' out.txt &&\
  ! grep 'expects type' out.txt &&\
  ! grep 'pointer from integer' out.txt &&\
  ! grep 'incompatible implicit' out.txt &&\
  ! grep 'excess elements in struct initializer' out.txt &&\
  ! grep 'comparison between pointer and integer' out.txt &&\
$xgcc -O2 -pedantic -Wall -Wextra  -I/home/fyu/MinCond/csmith/RRS_runtime_test/ -I/home/fyu/MinCond/csmith/build/runtime/ $src -DUSE_MATH_MACROS -o gcc.out >outa.txt 2>&1 &&\
  ! grep '\-Wuninitialized' out.txt &&\
  ! grep 'without a cast' outa.txt &&\
  ! grep 'expects a matching' outa.txt &&\
  ! grep 'control reaches end' outa.txt &&\
  ! grep 'return type defaults' outa.txt &&\
  ! grep 'cast from pointer to integer' outa.txt &&\
  ! grep 'useless type name in empty declaration' outa.txt &&\
  ! grep 'no semicolon at end' outa.txt &&\
  ! grep 'type defaults to' outa.txt &&\
  ! grep 'too few arguments for format' outa.txt &&\
  ! grep 'incompatible pointer' outa.txt &&\
  ! grep 'ordered comparison of pointer with integer' outa.txt &&\
  ! grep 'declaration does not declare anything' outa.txt &&\
  ! grep 'expects type' outa.txt &&\
  ! grep 'pointer from integer' outa.txt &&\
  ! grep 'incompatible implicit' outa.txt &&\
  ! grep 'excess elements in struct initializer' outa.txt &&\
  ! grep 'comparison between pointer and integer' outa.txt &&\
./gccsan.out 2>gccsan.err.txt > gccsan.out.txt      &&\
./gcc.out 2>gcc.err.txt > gcc.out.txt          &&\
! cat gcc.err.txt | grep "error"      &&\
! cat gccsan.err.txt | grep "error"    &&\
! diff gcc.out.txt gccsan.out.txt   

then
    exit 0;
else
    exit 1;
fi;