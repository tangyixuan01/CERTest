#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet -> insert-assignment-snippet -> insert-if-snippet

int a = 1;
int c;
int d;
int e;
int f;
int g;
char h;
char fn1(char p1, int p2)
{
  return ((p1 > 1) || (p1 > p2)) ? (p1) : (p1 << p2);
}

static int fn2(long long p1, char p2)
{
  short Hq1aibTk = (short)-32768;
  unsigned short yv_fEWHl = (unsigned short)65535;
  int UVnx2Q3o = 2147483647;
  int _BTLlzN4 = -2021920350;
  int DOEVpQJx = -1657820035;
  int TsOc5DK3 = 2147483647;
  if (p1 < p2)
  {
    _BTLlzN4 = UVnx2Q3o || 1;
    switch (DOEVpQJx)
    {
      if (Hq1aibTk < yv_fEWHl)
      {
        yv_fEWHl = Hq1aibTk;
        Hq1aibTk = ~Hq1aibTk;
      }
      case 5:
        TsOc5DK3 = 1;
        break;

      case 6:
        TsOc5DK3 = 2;
        break;

      case 7:
        TsOc5DK3 = 3;
        break;

    }

    fn2(f, f);
  }
  c = h;
  transparent_crc(TsOc5DK3, "TsOc5DK3", 1);
  transparent_crc(DOEVpQJx, "DOEVpQJx", 1);
  transparent_crc(_BTLlzN4, "_BTLlzN4", 1);
  transparent_crc(UVnx2Q3o, "UVnx2Q3o", 1);
  transparent_crc(yv_fEWHl, "yv_fEWHl", 1);
  transparent_crc(Hq1aibTk, "Hq1aibTk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return h;
}

int fn3()
{
  int * xzZJ7RGe = &a;
  unsigned char fCFQ9dMY = (unsigned char)242;
  int i = fn1(a, 3);
  switch (fCFQ9dMY)
  {
    case 0x95:
      *xzZJ7RGe = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *xzZJ7RGe = 0x00;
      break;

    default:
      *xzZJ7RGe = 0x05;
      break;

  }

  g = fn2(a, a);
  c = h;
  transparent_crc(fCFQ9dMY, "fCFQ9dMY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return i;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if (fn3() < 8)
  {
    __builtin_printf("%d%d\n", d, e);
  }
  return 0;
}

