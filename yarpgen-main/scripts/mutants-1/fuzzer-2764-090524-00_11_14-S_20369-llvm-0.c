#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a;
int b;
int c[4][8] = {{1}};
int d;
int e;
int fn1(int p)
{
  return (p) ? (1 % p) : (0);
}

void fn2()
{
  short ZqJ39soV = (short)-32768;
  unsigned char ixqenho4 = (unsigned char)79;
  for (; ZqJ39soV != 8; ZqJ39soV = ZqJ39soV + 4)
    ixqenho4 = 0;

  transparent_crc(ixqenho4, "ixqenho4", 1);
  transparent_crc(ZqJ39soV, "ZqJ39soV", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (e = 0; e < 4; e++)
  {
    c[d + 1][e + 1] = c[e][e];
    b = fn1(a ^ 1);
  }

}

void fn3()
{
  fn2();
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn3();
  if (c[1][2] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

