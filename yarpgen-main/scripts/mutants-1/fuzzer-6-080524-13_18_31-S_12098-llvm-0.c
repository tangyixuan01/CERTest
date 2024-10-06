#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
#pragma pack(1)
struct S0
{
  int : 8;
  int f1 : 31;
  int f2 : 1;
};
struct S0 a = {};
void fn1(struct S0 p2)
{
}

void fn2()
{
  fn1(a);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  (a.f2 = 1) | (a.f1 = 0);
  printf("%d\n", a.f2);
  return 0;
}

