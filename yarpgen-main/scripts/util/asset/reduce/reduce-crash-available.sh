#!/bin/bash

icx -I/home/jwzeng/tools/csmith/include -std=c99 -fPIC -mcmodel=large -w -fopenmp-simd -mllvm -vec-threshold=0 -O2 -o icx_opt_o2_test.o -c test.c > out.txt 2>&1

if grep "submit a bug report" out.txt; then
    exit 0
else
    exit 1
fi
