#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  unsigned zOhHlYMJ = 3626188371U;
  unsigned Y1US_Qae = 4294967295U;
  unsigned pKMzhuO7 = 2723395063U;
  volatile unsigned char a = 1;
  long b = 0x80000000L;
  int c = -(((int) (-b)) - ((-0x7FFFFFFF) * a));
  if (c != 1)
  {
    for (zOhHlYMJ = 0; zOhHlYMJ < 10; zOhHlYMJ++)
    {
      for (pKMzhuO7 = 0; pKMzhuO7 < 2; pKMzhuO7++)
      {
        Y1US_Qae++;
        if (Y1US_Qae < zOhHlYMJ)
        {
          return 123;
        }
      }

    }

    __builtin_abort();
  }
  transparent_crc(pKMzhuO7, "pKMzhuO7", 1);
  transparent_crc(Y1US_Qae, "Y1US_Qae", 1);
  transparent_crc(zOhHlYMJ, "zOhHlYMJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

