#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet

int a;
int c;
int d;
int e;
int f;
char b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  SWf0OK2a = -2147483648;
  int * tz3R2hvX = &SWf0OK2a;
  unsigned char CZ9tv0SK = (unsigned char)29;
  unsigned uqcbhv40 = 4294967295U;
  unsigned yrzcVX_d = 4294967295U;
  unsigned nvNGWsXa = 0U;
  int g = 1;
  char h[1] = {0};
  while (a)
  {
    if (f)
    {
      b = 0;
      if (d)
      {
        continue;
        switch (CZ9tv0SK)
        {
          case 0x95:
            *tz3R2hvX = 0x01;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *tz3R2hvX = 0x00;
            break;

          default:
            *tz3R2hvX = 0x05;
            break;

        }

      }
    }
    if (a < 1)
    {
      g = 0;
      goto L;
    }
  }

  while (c)
  {
    char *j = h;
    int k;
    L:
    if (e && (!g))
    {
      k |= 2 | ((*j) < 0);
    }

    for (uqcbhv40 = 0; uqcbhv40 < 10; uqcbhv40++)
    {
      for (nvNGWsXa = 0; nvNGWsXa < 2; nvNGWsXa++)
      {
        yrzcVX_d++;
        if (yrzcVX_d < uqcbhv40)
        {
          return 123;
        }
      }

    }

  }

  transparent_crc(nvNGWsXa, "nvNGWsXa", 1);
  transparent_crc(yrzcVX_d, "yrzcVX_d", 1);
  transparent_crc(uqcbhv40, "uqcbhv40", 1);
  transparent_crc(CZ9tv0SK, "CZ9tv0SK", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

