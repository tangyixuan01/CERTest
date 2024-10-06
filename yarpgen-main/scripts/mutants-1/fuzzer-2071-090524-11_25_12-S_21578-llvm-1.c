#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-assignment-snippet

short a;
short fn1(int p1, int p2)
{
  unsigned short blwpYKJ6 = (unsigned short)0;
  unsigned short gz6Vb7QS = (unsigned short)17514;
  long long R8wESXMT = 9223372036854775807LL;
  int sRold_Up = 452049966;
  int tpW_MUlh = 2147483647;
  unsigned short r7ad0WoB = (unsigned short)3216;
  short k2TyODp8 = (short)11783;
  unsigned short xapqoh6r = (unsigned short)65535;
  transparent_crc(xapqoh6r, "xapqoh6r", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (k2TyODp8 < xapqoh6r)
  {
    xapqoh6r = k2TyODp8;
    k2TyODp8 = ~k2TyODp8;
    sRold_Up = (~(r7ad0WoB || gz6Vb7QS)) ^ (gz6Vb7QS >> ((R8wESXMT && blwpYKJ6) * tpW_MUlh));
  }
  transparent_crc(k2TyODp8, "k2TyODp8", 1);
  transparent_crc(r7ad0WoB, "r7ad0WoB", 1);
  transparent_crc(tpW_MUlh, "tpW_MUlh", 1);
  transparent_crc(sRold_Up, "sRold_Up", 1);
  transparent_crc(R8wESXMT, "R8wESXMT", 1);
  transparent_crc(gz6Vb7QS, "gz6Vb7QS", 1);
  transparent_crc(blwpYKJ6, "blwpYKJ6", 1);
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

