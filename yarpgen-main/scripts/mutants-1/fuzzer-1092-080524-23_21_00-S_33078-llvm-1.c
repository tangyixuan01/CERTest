#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet

unsigned b;
int c;
int d;
short e(int f, int g)
{
  short lEwB_2Xo = (short)-32768;
  while (lEwB_2Xo > 1)
    lEwB_2Xo--;

  transparent_crc(lEwB_2Xo, "lEwB_2Xo", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return f * g;
}

char h(int f)
{
  int teHrCIlN = -2147483648;
  int d5n2T_fL = -2147483648;
  for (; teHrCIlN < 6; ++teHrCIlN)
  {
    d5n2T_fL = 8;
    for (; d5n2T_fL < 0; d5n2T_fL--)
      ;

  }

  transparent_crc(d5n2T_fL, "d5n2T_fL", 1);
  transparent_crc(teHrCIlN, "teHrCIlN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return f;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short a = e(!c, 65535);
  b = (d = h(a <= (-1)));
  if (b != 1)
  {
    __builtin_abort();
  }
  return 0;
}

