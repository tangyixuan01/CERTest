#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

struct S
{
  int b;
  int c;
  int d;
} e = {20, 0, 0};
int f;
int g;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  s9rg4X8D = 2147483647;
  int * fpR7sJe_ = &s9rg4X8D;
  unsigned char LE8RN0q1 = (unsigned char)255;
  struct S h = e;
  for (; f < 4; f++)
  {
    g = 0 % h.b;
    h.c = ~h.d;
    switch (LE8RN0q1)
    {
      case 0x95:
        *fpR7sJe_ = LE8RN0q1 - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *fpR7sJe_ = LE8RN0q1 - 0x80;
        break;

      default:
        *fpR7sJe_ = 0;
        break;

    }

    h.b = h.c;
  }

  transparent_crc(LE8RN0q1, "LE8RN0q1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

