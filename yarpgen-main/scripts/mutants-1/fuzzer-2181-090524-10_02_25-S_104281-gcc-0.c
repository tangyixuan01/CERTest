#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

unsigned a = 1;
int b;
int c = 2;
long d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int VWP718Yt = 151942639;
  char Yacrl_WX = (signed char)103;
  char r35RD_Ip = (signed char)-121;
  while (1)
  {
    int m = a;
    L:
    a = ~(-(m || (b & d)));

    for (; Yacrl_WX != 3; Yacrl_WX = Yacrl_WX + 7)
    {
      VWP718Yt = r35RD_Ip & VWP718Yt;
      if (VWP718Yt)
        break;
    }

    b = (1 ^ a) / c;
    if (b)
    {
      goto L;
    }
    break;
    transparent_crc(m, "m", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  transparent_crc(r35RD_Ip, "r35RD_Ip", 1);
  transparent_crc(Yacrl_WX, "Yacrl_WX", 1);
  transparent_crc(VWP718Yt, "VWP718Yt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

