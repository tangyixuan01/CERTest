#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  int IEb3jVgk = -2147483648;
  int  ytPK8zXq = 1291920484;
  int * XdYs3ZEj = &ytPK8zXq;
  a[2][5] = (b = 4);
  for (; b; b--)
  {
    c = 0;
    XdYs3ZEj = &IEb3jVgk;
    for (; c <= 6; c++)
    {
      a[c + 1][b + 2] = a[c][b + 1];
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

  transparent_crc(IEb3jVgk, "IEb3jVgk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

