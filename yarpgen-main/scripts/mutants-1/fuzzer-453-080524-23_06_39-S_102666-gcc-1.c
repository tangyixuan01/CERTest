#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  o4An_KH2 = 70473066;
  int * ONVuCTJ2 = &o4An_KH2;
  unsigned char yHLmJSp8 = (unsigned char)39;
  int wIRUSoGD = -2147483648;
  int U1bl3w8o = -2147483648;
  for (unsigned a = 0, b = 0; a < 6; a += 1, b += 2)
  {
    switch (wIRUSoGD)
    {
      case 5:
        U1bl3w8o = 1;
        break;

      case 6:
        U1bl3w8o = 2;
        break;

      case 7:
        U1bl3w8o = 3;
        break;

    }

    switch (yHLmJSp8)
    {
      case 0x95:
        *ONVuCTJ2 = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *ONVuCTJ2 = 0x00;
        break;

      default:
        *ONVuCTJ2 = 0x05;
        break;

    }

    if (b < a)
    {
      return 1;
    }
  }

  transparent_crc(U1bl3w8o, "U1bl3w8o", 1);
  transparent_crc(wIRUSoGD, "wIRUSoGD", 1);
  transparent_crc(yHLmJSp8, "yHLmJSp8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

