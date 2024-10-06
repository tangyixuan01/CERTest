#!/bin/bash

rm -rf *.out
rm -rf *out*.*
rm -rf *.err.*

icx="icx"
includes="-I/home/jwzeng/tools/csmith/include"

$icx -O0 $includes test.c -o icx0.out >outa.txt 2>&1 &&\
  ! grep '\-Wuninitialized' outa.txt &&\
  ! grep 'without a cast' outa.txt &&\
  ! grep 'expects a matching' outa.txt &&\
  ! grep 'control reaches end' outa.txt &&\
  ! grep 'no return statement' outa.txt &&\
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
  ! grep 'conversions than data arguments' outa.txt &&\
  ! grep 'incompatible redeclaration' outa.txt &&\
  ! grep 'ordered comparison between pointer' outa.txt &&\
  ! grep 'eliding middle term' outa.txt &&\
  ! grep 'end of non-void function' outa.txt &&\
  ! grep 'invalid in C99' outa.txt &&\
  ! grep 'specifies type' outa.txt &&\
  ! grep 'should return a value' outa.txt &&\
  ! grep 'uninitialized' outa.txt &&\
  ! grep 'incompatible pointer to' outa.txt &&\
  ! grep 'incompatible integer to' outa.txt &&\
  ! grep 'type specifier missing' outa.txt &&\
  ! grep 'non-void function does not return a value' outa.txt &&\
  ! grep 'missing-variable-declarations' outa.txt &&\
  ! grep 'linker command failed with exit code 1' outa.txt &&\
  ! grep 'at end of declaration list' outa.txt &&\
$icx -O3 $includes test.c -o icx3.out >outc.txt 2>&1 &&\
  ! grep '\-Wuninitialized' outc.txt &&\
  ! grep 'without a cast' outc.txt &&\
  ! grep 'expects a matching' outc.txt &&\
  ! grep 'control reaches end' outc.txt &&\
  ! grep 'no return statement' outc.txt &&\
  ! grep 'return type defaults' outc.txt &&\
  ! grep 'cast from pointer to integer' outc.txt &&\
  ! grep 'useless type name in empty declaration' outc.txt &&\
  ! grep 'no semicolon at end' outc.txt &&\
  ! grep 'type defaults to' outc.txt &&\
  ! grep 'too few arguments for format' outc.txt &&\
  ! grep 'incompatible pointer' outc.txt &&\
  ! grep 'ordered comparison of pointer with integer' outc.txt &&\
  ! grep 'declaration does not declare anything' outc.txt &&\
  ! grep 'expects type' outc.txt &&\
  ! grep 'pointer from integer' outc.txt &&\
  ! grep 'incompatible implicit' outc.txt &&\
  ! grep 'excess elements in struct initializer' outc.txt &&\
  ! grep 'comparison between pointer and integer' outc.txt &&\
  ! grep 'conversions than data arguments' outc.txt &&\
  ! grep 'incompatible redeclaration' outc.txt &&\
  ! grep 'ordered comparison between pointer' outc.txt &&\
  ! grep 'eliding middle term' outc.txt &&\
  ! grep 'end of non-void function' outc.txt &&\
  ! grep 'invalid in C99' outc.txt &&\
  ! grep 'specifies type' outc.txt &&\
  ! grep 'should return a value' outc.txt &&\
  ! grep 'uninitialized' outc.txt &&\
  ! grep 'incompatible pointer to' outc.txt &&\
  ! grep 'incompatible integer to' outc.txt &&\
  ! grep 'type specifier missing' outc.txt &&\
  ! grep 'non-void function does not return a value' outc.txt &&\
  ! grep 'missing-variable-declarations' outc.txt &&\
  ! grep 'linker command failed with exit code 1' outc.txt &&\
  ! grep 'at end of declaration list' outc.txt &&\
 ./icx3.out 2>icx3.err.txt > icx3.out.txt &&\
 ./icx0.out 2>icx0.err.txt > icx0.out.txt &&\
  ! diff icx3.out.txt icx0.out.txt &&\
    ! grep 'error' icx3.err.txt &&\
    ! grep 'error' icx0.err.txt
