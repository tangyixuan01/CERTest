#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
struct S0
{
  int f0;
  int f1;
  int f2;
  int f3;
  int f4;
} b = {0, 0, 1, 0, 0};
int a;
void foo(struct S0 p)
{
  b.f2 = 0;
  if (p.f2)
  {
    a = 1;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  long jB6HnoRQ = 9223372036854775807LL;
  unsigned kwsKpCYD = 0U;
  int ZgP_W9XQ = 477640039;
  int wpZhRN2B = 2147483647;
  while (1)
  {
    int m = kwsKpCYD;
    L:
    kwsKpCYD = ~(-(m || (ZgP_W9XQ & jB6HnoRQ)));

    ZgP_W9XQ = (1 ^ kwsKpCYD) / wpZhRN2B;
    if (ZgP_W9XQ)
      goto L;
    break;
  }

  foo(b);
  printf("%d\n", a);
  transparent_crc(wpZhRN2B, "wpZhRN2B", 1);
  transparent_crc(ZgP_W9XQ, "ZgP_W9XQ", 1);
  transparent_crc(kwsKpCYD, "kwsKpCYD", 1);
  transparent_crc(jB6HnoRQ, "jB6HnoRQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

