#!/bin/bash

# Run Csmith
#cd /home/user42/fuzzers/copy_6/llvm-csmith-6/csmith/build

# Run in a loop for X time
#./csmith

output_folder=/home/jwzeng/workplace/dataset/experiment/csmith	# where to put all the generated programs
genrator=csmith

# rm -rf $output_folder
mkdir -p $output_folder
i=0

curr_ts=`date -d '+0 day +0 hour +0 minutes' '+%F %T'`
end_ts=`date -d '+0 day +24 hour +0 minutes' '+%F %T'`
echo "Starts Csmith $curr_ts and will end at $end_ts"

curr_total=`date -d "$curr_ts" +%s`
end_total=`date -d "$end_ts" +%s`
echo curr_total: $curr_total
echo end_total: $end_total
# exit 0
seed_list=`cat seeds_100t_8and9_csmith.txt`
for seed in $seed_list; do
	echo $i-th seed: $seed
	timestamp=`date +"%m-%d-%y-%T"`
	(ulimit -St 50; $genrator -s $seed -o $output_folder/fuzzer-file-$i-$timestamp-S_$seed.c)
	i=$((i+1)) # Update index of test cases
	curr_ts=`date -d '+0 day +0 hour +0 minutes' '+%F %T'` # Update current
	curr_total=`date -d "$curr_ts" +%s`
	if [ "$curr_total" -ge "$end_total" ]; then
		break
	fi
done
x=`ls -l $output_folder/*.c | wc -l`
echo "End Fuzzing with Csmith. Generated $x files in $output_folder"
