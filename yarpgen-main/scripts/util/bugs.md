# Something Record

## some compilers have deleted from the system

1. clang-18

```
Ubuntu clang version 18.0.0 (++20231016053113+d392073f6747-1~exp1~20231016173220.809)
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
```

# Bug Record

## Description

Bug ID:

- e.g. 1-20231030 -> {bug num}-{found time}

Bug status:

- confirmed
- fixed

## 1-20231030 -> fixed 20231031

```bash
Traceback (most recent call last):
  File "/home/jwzeng/tools/miniconda3/lib/python3.9/multiprocessing/process.py", line 315, in _bootstrap
    self.run()
  File "/home/jwzeng/tools/miniconda3/lib/python3.9/multiprocessing/process.py", line 108, in run
    self._target(*self._args, **self._kwargs)
  File "/home/jwzeng/workplace/compiler_testing/scripts/run_gen.py", line 1742, in gen_and_test
    test = Test(stat=stat, seed=seed, proc_num=num, blame=blame,
  File "/home/jwzeng/workplace/compiler_testing/scripts/run_gen.py", line 252, in __init__
    is_mutate_success, mutation_operator_label = mutate_program_csmith(test_dir=os.getcwd(), proc_num=proc_num, seed=self.seed, lock=lock)
  File "/home/jwzeng/workplace/compiler_testing/scripts/util/mutate_util.py", line 470, in mutate_program_csmith
    insert_code_snippet_node(global_decl, ast, opt[1])
  File "/home/jwzeng/workplace/compiler_testing/scripts/util/mutate/mutate_insert.py", line 376, in insert_code_snippet_node
    select_func_def_node = random.choice(func_def_nodes)
  File "/home/jwzeng/tools/miniconda3/lib/python3.9/random.py", line 346, in choice
    return seq[self._randbelow(len(seq))]
IndexError: list index out of range
```

## 2-20231031

This bug occurs in the tcc compiler.

Bug info:

> test.c:56: error: too many initializers

Description:
```c
struct S0
{
  const volatile signed f0 : 7;
  unsigned f1 : 2;
  uint32_t f2;
  uint8_t f3;
  volatile unsigned f4 : 21;
  volatile signed f5 : 26;
  signed f6 : 17;
  const volatile unsigned : 0;
};
struct S2
{
  signed f0 : 11;
};
struct S1
{
  volatile int32_t f0;
  uint8_t f1;
  uint16_t f2;
  uint32_t f3;
  struct S0 f4;
  int8_t f5;
  int32_t f6;
  int32_t f7;
  uint32_t f8;
  const uint64_t f9;
};
struct S3
{
  const uint8_t f0;
  uint32_t f1;
  volatile struct S0 f2;
  struct S2 f3;
  const uint32_t f4;
  signed f5 : 11;
  uint32_t f6;
  const uint32_t f7;
  volatile uint64_t f8;
  struct S1 f9;
};
// bug scene
struct S3 r6IoWs2Z = {(unsigned char)16, crc32_context, 0, 1, crc32_context, 1, crc32_context, crc32_context, 13636786020143269932ULL, 0};
```

## 3-20231113 - maybe fixed 20231113

Description:

```
Traceback (most recent call last):
  File "/home/jwzeng/workplace/compiler_testing/scripts/util/unit_test/test_2/test.py", line 25, in <module>
    is_free, mutate_label = mutate_program_csmith_for_test('.', is_first=False)
  File "/home/jwzeng/workplace/compiler_testing/scripts/util/mutate_util.py", line 541, in mutate_program_csmith_for_test
    insert_code_snippet_node(global_decl, ast, opt[1])
  File "/home/jwzeng/workplace/compiler_testing/scripts/util/mutate/mutate_insert.py", line 413, in insert_code_snippet_node
    func_body.insert(len(func_body) - 1, hash_stmt)
AttributeError: 'NoneType' object has no attribute 'insert'
```

## 3-20231204

Bug report:

```shell
Traceback (most recent call last):
  File "/home/jwzeng/tools/miniconda3/lib/python3.9/multiprocessing/process.py", line 315, in _bootstrap
    self.run()
  File "/home/jwzeng/tools/miniconda3/lib/python3.9/multiprocessing/process.py", line 108, in run
    self._target(*self._args, **self._kwargs)
  File "/home/jwzeng/workplace/compiler_testing/scripts/run_onebyone.py", line 1777, in gen_and_test
    test = Test(stat=stat, seed=seed, proc_num=num, blame=blame,
  File "/home/jwzeng/workplace/compiler_testing/scripts/run_onebyone.py", line 286, in __init__
    is_free_ub = check_program_by_all_sanitizers(
  File "/home/jwzeng/workplace/compiler_testing/scripts/util/check_program.py", line 241, in check_program_by_all_sanitizers
    check_compiler_ICE(crash_compiler, program_file_path, tmp_dir, proc_num, seed, lock, mutation_operator_label)
  File "/home/jwzeng/workplace/compiler_testing/scripts/util/check_program.py", line 213, in check_compiler_ICE
    err_output = f.read()
  File "/home/jwzeng/tools/miniconda3/lib/python3.9/codecs.py", line 322, in decode
    (result, consumed) = self._buffer_decode(data, self.errors, final)
UnicodeDecodeError: 'utf-8' codec can't decode byte 0xd1 in position 19175: invalid continuation byte
```
