#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a = 5;
int b;
int c;
int d;
unsigned long e = 20862985922;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * kTey4CnN = &a;
  unsigned char uT6D_WtU = (unsigned char)255;
  unsigned f = 4294967292;
  e = e | f;
  c = (-1) % (((~f) ^ 4294967292) - (e - d));
  b = (~(-(~e))) % (~(-d));
  if (b)
  {
    a = 0;
  }
  if (a < 1)
  {
    __builtin_abort();
    switch (uT6D_WtU)
    {
      case 0x95:
        *kTey4CnN = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *kTey4CnN = 0x00;
        break;

      default:
        *kTey4CnN = 0x05;
        break;

    }

  }
  transparent_crc(uT6D_WtU, "uT6D_WtU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

