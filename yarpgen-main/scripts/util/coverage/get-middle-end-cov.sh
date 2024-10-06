#!/bin/bash

target_dir=$1       # /home/jwzeng/workplace/dataset/experiment/coverage/csmith-res
start_idx=$2        # 1
end_idx=$3          # 24
line_prefix_name=$4 # table_file_line
func_prefix_name=$5 # table_file_func
llvm_source_name=$6 # llvm-project

#########################
# ./get-middle-end-cov.sh /home/jwzeng/workplace/dataset/experiment/coverage/csmith-res 1 25 table_file_line table_file_func llvm-project
# ./get-middle-end-cov.sh /home/jwzeng/workplace/dataset/experiment/coverage/csmith-res-24h 1 25 table_file_line table_file_func llvm-project
#########################

cd $target_dir
pwd

for i in $(seq $start_idx $end_idx); do
    # cat $line_prefix_name.$i.csv | grep -e'clang/lib/Analysis/' -e'llvm-project/llvm/lib/Analysis/' -e'llvm-project/llvm/lib/BinaryFormat/' -e'llvm-project/llvm/lib/DebugInfo/' -e'llvm-project/llvm/lib/IR/' -e'llvm-project/llvm/lib/IRReader/' -e'llvm-project/llvm/lib/Object/' -e'llvm-project/llvm/lib/ObjectYAML/' -e'llvm-project/llvm/lib/Passes/' -e'llvm-project/llvm/lib/Support/' -e'llvm-project/llvm/lib/Transforms/'  | sed '1d' |   cut -d',' -f3 | awk '{ sum += $1 } END { print sum }'
    cat $line_prefix_name.$i.csv | grep -e'clang/lib/Analysis/' -e'/lib/Analysis/' -e'/lib/BinaryFormat/' -e'/lib/DebugInfo/' -e'/lib/IR/' -e'/lib/IRReader/' -e'/lib/Object/' -e'/lib/ObjectYAML/' -e'/lib/Passes/' -e'/lib/Support/' -e'/lib/Transforms/' | sed '1d' | cut -d',' -f3 | awk '{ sum += $1 } END { print sum }'
done

# echo " === "

# cat  func_cov_v1.csv.0| grep -e'clang/lib/Analysis/' -e'$llvm_source_name/lib/Analysis/' -e'$llvm_source_name/lib/BinaryFormat/' -e'$llvm_source_name/lib/DebugInfo/' -e'$llvm_source_name/lib/IR/' -e'$llvm_source_name/lib/IRReader/' -e'$llvm_source_name/lib/Object/' -e'$llvm_source_name/lib/ObjectYAML/' -e'$llvm_source_name/lib/Passes/' -e'$llvm_source_name/lib/Support/' -e'$llvm_source_name/lib/Transforms/'  | sed '1d' |   cut -d',' -f3 | awk '{ sum += $1 } END { print sum }'
