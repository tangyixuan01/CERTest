#!/bin/bash

target_dir=$1       # /home/jwzeng/workplace/dataset/experiment/coverage/csmith-res
start_idx=$2        # 1
end_idx=$3          # 24
line_prefix_name=$4 # table_file_line
func_prefix_name=$5 # table_file_func
llvm_source_name=$6 # llvm-project

#########################
# ./get-back-end-cov.sh /home/jwzeng/workplace/dataset/experiment/coverage/csmith-res 1 25 table_file_line table_file_func llvm-project
# ./get-back-end-cov.sh /home/jwzeng/workplace/dataset/experiment/coverage/csmith-res-24h 1 25 table_file_line table_file_func llvm-project
#########################

cd $target_dir
pwd

for i in $(seq $start_idx $end_idx); do
    # echo $i =================
    cat $line_prefix_name.$i.csv | grep -e'clang/lib/CodeGen/' -e'/lib/AsmParser/' -e'/lib/Bitcode/' -e'/lib/CodeGen/' -e'/lib/DebugInfo/' -e'/lib/ExecutionEngine/' -e'/lib/Linker/' -e'/lib/LTO/' -e'/lib/MC/' -e'/lib/MCA/' -e'/lib/Support/' -e'/lib/Target/' -e'/utils/TableGen/' | sed '1d' | cut -d',' -f3 | awk '{ sum += $1 } END { print sum }'
done
