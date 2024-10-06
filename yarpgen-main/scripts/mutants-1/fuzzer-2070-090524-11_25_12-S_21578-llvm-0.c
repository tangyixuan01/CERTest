#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

short a;
short fn1(int p1, int p2)
{
  short k2TyODp8 = (short)11783;
  unsigned short xapqoh6r = (unsigned short)65535;
  transparent_crc(xapqoh6r, "xapqoh6r", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (k2TyODp8 < xapqoh6r)
  {
    xapqoh6r = k2TyODp8;
    k2TyODp8 = ~k2TyODp8;
  }
  transparent_crc(k2TyODp8, "k2TyODp8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p1 * p2;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  while (fn1(++a, 3))
  {
    ;
  }

  if (a != 0)
  {
    __builtin_abort();
  }
  return 0;
}

