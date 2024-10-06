#!/bin/bash

##### frama-c
frama-c -eva -eva-slevel 100 -eva-plevel 256 -eva-precision 5 -eva-warn-undefined-pointer-comparison pointer -eva-no-alloc-returns-null -warn-signed-overflow -eva-no-show-progress -machdep x86_64 -cpp-extra-args=-I/home/jwzeng/tools/csmith/include test.c > output.log

##### grep crash
grep -e"Unexpected error" -e"BUG" -e"bug" -e"Bug" -e"Please" -e"please" -e"PLEASE" -e"Please" output.log | grep -ve"copysign_bug" -ve"debug" -ve "u32 bug " -ve "In function ‘bug’:" -ve"Please use" -ve"bug when they were" -ve"This tests for a bug in regstack" -ve"int showbug" -ve"unsigned bug " -ve"Bug in reorg.c" -ve"This bug exists in " -ve"had a bug that causes the final" -ve"If some target has a Max alignment less than 32" -ve"information to understand the bug" -ve"https://git.frama-c.com/pub/frama-c/-/wikis/Guidelines-for-reporting-bugs" -ve"eva:final-states" -ve"The following decl of" -ve"4294966804 (auto)"

##### grep program's error
sed -i ':a;N;$!ba;s/\n / /g' output.log
cat output.log | grep ".c:" | grep -ve "starting to merge loop iterations" -ve "Automatic loop unrolling" -ve "function strcmp" -ve "Values at end of function" -ve "Trace partitioning superposing" -ve "valid_read(argv" -ve "∈" -ve "but got argument of type 'uint" -ve "but got argument of type 'int" -ve "Warning:   unsigned overflow. assert " -ve "assertion 'Eva,unsigned_overflow' got final status invalid." -ve " unsigned overflow." -ve "escaping" -ve "Eva,dangling_pointer" -ve"Old style" -ve"Neither code nor specification for function" -ve"Assuming no side effects beyond" -ve'Warning:   pointer comparison.  assert \\pointer_comparable' -ve'Unexpected error (Z.Overflow)' -ve'cannot properly split on'
