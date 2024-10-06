#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a[36];
int b;
int c;
int d;
int e;
int f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int ZzRO8vi7 = 1147070775;
  short IZKVY2Ma = (short)-32768;
  for (c = 0; c < 6; c++)
  {
    for (d = 0; d < 6; d++)
    {
      for (b = 0; b < 6; b++)
      {
        a[6 + c] = a[(c * 6) + c] ^ 1;
      }

      for (; ZzRO8vi7 < 10; ZzRO8vi7++)
        while (IZKVY2Ma > 1)
        IZKVY2Ma--;


    }

  }

  if (a[7] != 0)
  {
    __builtin_abort();
  }
  transparent_crc(IZKVY2Ma, "IZKVY2Ma", 1);
  transparent_crc(ZzRO8vi7, "ZzRO8vi7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

