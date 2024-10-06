#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a = 1;
int c;
struct S
{
  char f0;
  int : 31;
  char f1;
  int f2;
} b;
int foo()
{
  int UQz4mrJn = -2147483648;
  struct S d = {0, 0, 0};
  UQz4mrJn = UQz4mrJn - ((-0x7fffffff) - 1);
  c = d.f0;
  b = d;
  transparent_crc(UQz4mrJn, "UQz4mrJn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return b.f1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  c = foo();
  if (!c)
  {
    a = 0;
  }
  printf("%d\n", a);
  return 0;
}

