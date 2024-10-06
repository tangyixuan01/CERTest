#!/bin/bash

gcc_compiler="/home/jwzeng/compilers/gcc/gcc-trunk-20230829/bin/gcc"
clang_compiler="clang-18"
tcc_compiler="/home/jwzeng/compilers/tcc/tcc-trunk-20230831/bin/tcc"
icx_compiler="icx"

opts="-O0 -O1 -O2 -O3 -Os"
other_opt="-I/home/jwzeng/tools/csmith/include -ldl -lm"

# target_files="init.h func.c driver.c"
target_files="test.c"

# gcc opt
for opt in $opts; do
    echo
    echo "$gcc_compiler $opt"
    $gcc_compiler $target_files $opt -w $other_opt
    ./a.out
done

# gcc opt asan
for opt in $opts; do
    echo
    echo "$gcc_compiler $opt asan"
    $gcc_compiler $target_files -fsanitize=address $opt -w $other_opt
    ./a.out
done

# gcc opt ubsan
for opt in $opts; do
    echo
    echo "$gcc_compiler $opt ubsan"
    $gcc_compiler $target_files -fsanitize=undefined $opt -w $other_opt
    ./a.out
done

# clang opt
for opt in $opts; do
    echo
    echo "$clang_compiler $opt"
    $clang_compiler $target_files $opt -w $other_opt
    ./a.out
done

# clang opt asan
for opt in $opts; do
    echo
    echo "$clang_compiler $opt asan"
    $clang_compiler $target_files -fsanitize=address $opt -w $other_opt
    ./a.out
done

# clang opt ubsan
for opt in $opts; do
    echo
    echo "$clang_compiler $opt ubsan"
    $clang_compiler $target_files -fsanitize=undefined $opt -w $other_opt
    ./a.out
done

# clang opt msan
for opt in $opts; do
    echo
    echo "$clang_compiler $opt msan"
    $clang_compiler $target_files $opt -fsanitize=memory -w $other_opt
    ./a.out
done

# tcc opt
for opt in $opts; do
    echo
    echo "$tcc_compiler $opt"
    $tcc_compiler $target_files $opt -w $other_opt
    ./a.out
done

# icx opt
for opt in $opts; do
    echo
    echo "$icx_compiler $opt"
    $icx_compiler $target_files $opt -w $other_opt
    ./a.out
done
