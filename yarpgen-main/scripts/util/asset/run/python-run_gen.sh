#!/bin/bash

# python run_gen.py
python run_gen.py -o testing-20230830-100t6-v2-ubuntu --std c -j 20 --target "gcc clang ubsan_clang ubsan_gcc icx tcc"
python run_gen.py -o testing-20230912-1t0csmith-v3-ubuntu --std c -j 20 --target "gcc clang ubsan_clang ubsan_gcc icx tcc"

# creduce
creduce  ./reduce-wrong-code.sh test.c --n 15 --abs-timing
