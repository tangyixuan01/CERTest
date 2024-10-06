#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

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
  struct S d = {0, 0, 0};
  c = d.f0;
  b = d;
  return b.f1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int BwPmdTr3 = 2147483647;
  c = foo();
  if (!c)
  {
    while (1)
    {
      int m = BwPmdTr3;
      while (m)
        m /= 2;

      break;
    }

    a = 0;
  }
  printf("%d\n", a);
  transparent_crc(BwPmdTr3, "BwPmdTr3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

