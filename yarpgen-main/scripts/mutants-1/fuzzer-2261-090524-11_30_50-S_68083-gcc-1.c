#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int a = 2;
int b = 1;
int c = 1;
int fn1()
{
  int * Y7Mc_WV0 = &b;
  unsigned char jZWKOnAd = (unsigned char)126;
  int d;
  for (; a; a--)
  {
    for (d = 0; d < 4; d++)
    {
      int k;
      if (c < 1)
      {
        if (k)
        {
          c = 0;
        }
      }
      if (b)
      {
        continue;
        switch (jZWKOnAd)
        {
          case 0x95:
            *Y7Mc_WV0 = 0x01;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *Y7Mc_WV0 = 0x00;
            break;

          default:
            *Y7Mc_WV0 = 0x05;
            break;

        }

      }
      return 0;
    }

    b = !1;
  }

  transparent_crc(jZWKOnAd, "jZWKOnAd", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * jpnXF46k = &b;
  unsigned char k97PV5yQ = (unsigned char)0;
  fn1();
  switch (k97PV5yQ)
  {
    case 0x95:
      *jpnXF46k = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *jpnXF46k = 0x00;
      break;

    default:
      *jpnXF46k = 0x05;
      break;

  }

  if (a != 1)
  {
    __builtin_abort();
  }
  transparent_crc(k97PV5yQ, "k97PV5yQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

