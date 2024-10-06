#!/bin/bash

target_dir=$1           # /home/jwzeng/workplace/dataset/experiment/coverage/csmith-res
start_idx=$2            # 1
end_idx=$3              # 24
line_prefix_name=$4     # table_file_line
func_prefix_name=$5     # table_file_func
llvm_source_name=$6     # llvm-project

#########################
# ./get-front-end-cov.sh /home/jwzeng/workplace/dataset/experiment/coverage/csmith-res 1 25 table_file_line table_file_func llvm-project
# ./get-front-end-cov.sh /home/jwzeng/workplace/dataset/experiment/coverage/csmith-res-24h 1 25 table_file_line table_file_func llvm-project
#########################

cd $target_dir
pwd

for i in $(seq $start_idx $end_idx)
do
    # echo $i =================
    cat $line_prefix_name.$i.csv | grep -e'clang/include/' -e'clang/lib/APINotes/' -e'clang/lib/AST/' -e'clang/lib/Basic/' -e'clang/lib/Driver/' -e'clang/lib/Edit/' -e'clang/lib/Format/' -e'clang/lib/Frontend/' -e'clang/lib/Frontend/Rewrite/' -e'clang/lib/FrontendTool/' -e'clang/lib/Index/' -e'clang/lib/Lex/' -e'clang/lib/Parse/' -e'clang/lib/Rewrite/' -e'clang/lib/Sema/' -e'clang/lib/Serialization/' -e'clang/lib/StaticAnalyzer/' -e'clang/lib/Tooling/' -e'clang/tools/' -e'/include/' -e'/lib/DebugInfo/' -e'/lib/Demangle/' -e'/lib/InterfaceStub/' -e'/lib/LineEditor/' -e'/lib/Option/' -e'/lib/ProfileData/' -e'/lib/Remarks/' -e'/lib/Support/' -e'/tools/' -e'/unittests/' -e'/utils/count/' -e'/utils/FileCheck/' -e'/utils/not/' -e'/utils/PerfectShuffle/' -e'/utils/yaml-bench/' -e'llvm-cov-16.0.6/' -e'/usr/include/'  | sed '1d' |   cut -d',' -f3 | awk '{ sum += $1 } END { print sum }'
done