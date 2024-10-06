#!/bin/bash

rm -rf *.out
rm -rf *out*.*
rm -rf *.err.*

ulimit -t 30

other_opt="-I/home/jwzeng/tools/csmith/include"

icx $other_opt -O0 -w test.c &&\
./a.out > output1.txt &&\
icx $other_opt -O1 -w test.c &&\
./a.out > output2.txt &&\
diff output1.txt output2.txt &&\
icx $other_opt -O2 -w test.c &&\
./a.out > output3.txt &&\
diff output1.txt output3.txt &&\
icx $other_opt -Os -w test.c &&\
./a.out > output4.txt &&\
diff output1.txt output4.txt &&\
icx $other_opt -O3 -w test.c &&\
./a.out > output5.txt &&\
! diff output1.txt output5.txt
