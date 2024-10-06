#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
struct 
{
  int f0;
  int f1 : 1;
  int f2 : 2;
} a = {0, 0, 1};
int b;
int c;
int *d;
int e;
int f;
int fn1()
{
  for (; b < 1; ++b)
  {
    for (e = 0; e < 1; e = 1)
    {
      int **g = &d;
      *g = &c;
    }

    *d = 0;
    f = a.f1;
    if (f)
    {
      return 0;
    }
  }

  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned Z95zKcLG = 4294967295U;
  int xLyKpA31 = -2090454513;
  unsigned RjcxMTAi = 4294967295U;
  fn1();
  printf("%d\n", b);
  transparent_crc(RjcxMTAi, "RjcxMTAi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (int g = 2; g <= xLyKpA31; g++)
  {
    Z95zKcLG += 5 - g;
    RjcxMTAi += g + 4;
  }

  transparent_crc(xLyKpA31, "xLyKpA31", 1);
  transparent_crc(Z95zKcLG, "Z95zKcLG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

