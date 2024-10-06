#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

extern int printf(const char *, ...);
int a[8][10];
short b;
int c;
int i;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short M5rpEfG8 = (short)-32768;
  a[2][5] = (b = 4);
  for (; b; b--)
  {
    c = 0;
    for (; c <= 6; c++)
    {
      a[c + 1][b + 2] = a[c][b + 1];
      while (M5rpEfG8 > 1)
        M5rpEfG8--;

    }

  }

  for (; i < 8; i++)
  {
    d = 0;
    for (; d < 10; d++)
    {
      printf("%d\n", a[i][d]);
    }

  }

  transparent_crc(M5rpEfG8, "M5rpEfG8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

