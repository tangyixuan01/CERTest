#!/bin/bash
/home/compilers/gcc/gcc-13.1.0/bin/gcc -fsanitize=undefined -O1 2056.c >/dev/null 2>&1 &&\
./a.out >gcc_out.txt 2>&1 &&\
grep "which is not a valid value for type '_Bool'" gcc_out.txt >/dev/null 2>&1
