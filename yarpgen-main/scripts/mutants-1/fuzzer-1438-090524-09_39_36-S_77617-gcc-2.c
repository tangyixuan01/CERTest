#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-assignment-snippet -> insert-if-snippet

static unsigned good(unsigned x, unsigned n)
{
  unsigned short cPI7LvFb = (unsigned short)65535;
  int zBkCeAVy = -2147483648;
  unsigned short _afmAhgl = (unsigned short)41154;
  n &= 0x1F;
  transparent_crc(_afmAhgl, "_afmAhgl", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (cPI7LvFb + (_afmAhgl * (~(0 != 5))))
    zBkCeAVy = (-(~(_afmAhgl * (~(0 != 5))))) + 2147483647;
  transparent_crc(zBkCeAVy, "zBkCeAVy", 1);
  transparent_crc(cPI7LvFb, "cPI7LvFb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (n) ? (x + n) : (x);
}

static unsigned fail(unsigned x, unsigned n)
{
  int vBEmt3hJ = 2147483647;
  short lmeM8sCI = (short)-8571;
  int r6Eqb9YS = -1716153833;
  int Wszpb7Lg = -1909421245;
  vBEmt3hJ |= lmeM8sCI;
  transparent_crc(Wszpb7Lg, "Wszpb7Lg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; r6Eqb9YS < 1; r6Eqb9YS++)
    if ((!Wszpb7Lg) && Wszpb7Lg)
    ;

  transparent_crc(r6Eqb9YS, "r6Eqb9YS", 1);
  transparent_crc(lmeM8sCI, "lmeM8sCI", 1);
  transparent_crc(vBEmt3hJ, "vBEmt3hJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return n &= (0x1F) ? (x + n) : (x);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  return fail(0xDEADBEEFU, 16U) == 0xDEADBEFFU;
}

