#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
int a[256];
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short fsuljYKT = (short)32767;
  int ZwkMoByW = -2147483648;
  int RjGWDVCL = -856045267;
  int z_Ao6l4G = 2147483647;
  int d = 0;
  for (; d < 256; d++)
  {
    while (!z_Ao6l4G)
    {
      ZwkMoByW = RjGWDVCL;
      z_Ao6l4G = ~(1L << fsuljYKT);
    }

    a[d] = c;
  }

  for (b = 0; !b; b--)
  {
    printf("%d\n", b);
  }

  transparent_crc(z_Ao6l4G, "z_Ao6l4G", 1);
  transparent_crc(RjGWDVCL, "RjGWDVCL", 1);
  transparent_crc(ZwkMoByW, "ZwkMoByW", 1);
  transparent_crc(fsuljYKT, "fsuljYKT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

