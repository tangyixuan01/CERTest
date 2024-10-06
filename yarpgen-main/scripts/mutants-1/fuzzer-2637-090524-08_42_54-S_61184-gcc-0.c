#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

short a;
void foo(void)
{
  for (a = 0; a >= 0; a++)
  {
    ;
  }

}

extern void foo(void);
int main()
{
  platform_main_begin();
  crc32_gentab();
  int h56PVfrC = 2147483647;
  volatile unsigned int  THVUMc4A = 0U;
  volatile unsigned int * ItFWi6Dw = &THVUMc4A;
  int y412Zxzb = -1733173736;
  for (y412Zxzb = 0xbad; y412Zxzb >= 0; y412Zxzb--)
  {
    if (y412Zxzb == 1)
      ItFWi6Dw[0x708 / 4] = 0xbeefdead;
    for (h56PVfrC = 1; h56PVfrC >= 0; h56PVfrC--)
    {
      ItFWi6Dw[0x708 / 4] = 0xbadcab;
      ItFWi6Dw[0x704 / 4] = h56PVfrC;
    }

  }

  foo();
  transparent_crc(y412Zxzb, "y412Zxzb", 1);
  transparent_crc(h56PVfrC, "h56PVfrC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

