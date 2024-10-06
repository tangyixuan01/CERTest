#!/bin/bash

/home/compilers/gcc/gcc-trunk/bin/gcc init.h func.c driver.c -O0; ./a.out
/home/compilers/gcc/gcc-trunk/bin/gcc init.h func.c driver.c -O1; ./a.out
/home/compilers/gcc/gcc-trunk/bin/gcc init.h func.c driver.c -O2; ./a.out
/home/compilers/gcc/gcc-trunk/bin/gcc init.h func.c driver.c -O3; ./a.out
/home/compilers/gcc/gcc-trunk/bin/gcc init.h func.c driver.c -Os; ./a.out