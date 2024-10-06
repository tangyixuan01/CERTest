#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int c;
int fn1()
{
  short hxMgeyT0 = (short)-27432;
  short gqVKJe9i = (short)-22423;
  int vRBskZV9 = 2147483647;
  int iTfbSMNs = -2147483648;
  int RcZYV5Wy = -2147483648;
  unsigned e = c = 0;
  RcZYV5Wy = (hxMgeyT0 | (iTfbSMNs * (gqVKJe9i && 9))) | vRBskZV9;
  for (; c < 1; c++)
  {
    for (; e < 1; e++)
    {
      int f;
      if (!a)
      {
        return b;
      }
    }

  }

  transparent_crc(RcZYV5Wy, "RcZYV5Wy", 1);
  transparent_crc(iTfbSMNs, "iTfbSMNs", 1);
  transparent_crc(vRBskZV9, "vRBskZV9", 1);
  transparent_crc(gqVKJe9i, "gqVKJe9i", 1);
  transparent_crc(hxMgeyT0, "hxMgeyT0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  return fn1();
}

