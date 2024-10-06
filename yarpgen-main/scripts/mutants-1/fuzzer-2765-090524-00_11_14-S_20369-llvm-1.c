#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet

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
  int y0O9X8h5 = -1647791246;
  int XjQSbPes = 2147483647;
  int MKRPS7Qr = -2147483648;
  fn3();
  if (c[1][2] != 1)
  {
    while (MKRPS7Qr)
      if (XjQSbPes == y0O9X8h5)
      XjQSbPes = MKRPS7Qr;

    __builtin_abort();
  }
  transparent_crc(MKRPS7Qr, "MKRPS7Qr", 1);
  transparent_crc(XjQSbPes, "XjQSbPes", 1);
  transparent_crc(y0O9X8h5, "y0O9X8h5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

