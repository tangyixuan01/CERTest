

python run_onebyone.py -o testing-20240509-tmp --std c --programs-dir /home/yixuan/yarpgen-main/scripts/mutants-1/ --target "gcc clang" -j 2 --is-need-sanitizer

命令解释：

-o 输出名称

--programs-dir 待测程序文件夹

--target 待测试的编译器

-j 进程数

--is-need-sanitizer 是否开启未定义行为检测，加这个选项就是开启

--std c  这个选项默认，表示测试 c
