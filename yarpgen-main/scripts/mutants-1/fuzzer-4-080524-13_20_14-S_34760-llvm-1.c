#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a;
int b;
int c[1][8];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  jbNA5Cu7 = 2147483647;
  int * tPoUiJKc = &jbNA5Cu7;
  unsigned char zPX459Um = (unsigned char)255;
  int WmyZ4Qr1 = -1105454614;
  signed iJxP8Sbk = 1;
  long v2IlXKWo = -9223372036854775807LL;
  for (; a < 1; a++)
  {
    for (b = 0; b < 8; b++)
    {
      c[a][b] = 0;
    }

    iJxP8Sbk = iJxP8Sbk << (WmyZ4Qr1 / v2IlXKWo);
    switch (zPX459Um)
    {
      case 0x95:
        *tPoUiJKc = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *tPoUiJKc = 0x00;
        break;

      default:
        *tPoUiJKc = 0x05;
        break;

    }

  }

  printf("%d\n", a);
  transparent_crc(v2IlXKWo, "v2IlXKWo", 1);
  transparent_crc(iJxP8Sbk, "iJxP8Sbk", 1);
  transparent_crc(WmyZ4Qr1, "WmyZ4Qr1", 1);
  transparent_crc(zPX459Um, "zPX459Um", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

