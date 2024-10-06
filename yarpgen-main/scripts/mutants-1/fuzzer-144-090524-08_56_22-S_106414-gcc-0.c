#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int c;
int e;
const int b = 1;
char d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  _ifAHE09 = 2052275512;
  int * bw3OV7sN = &_ifAHE09;
  unsigned char o6LMT2dP = (unsigned char)145;
  a = (~(e || 0)) ^ (b & (~d));
  d = ~(a | (~2));
  if (d)
  {
    __builtin_abort();
    switch (o6LMT2dP)
    {
      case 0x95:
        *bw3OV7sN = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *bw3OV7sN = 0x00;
        break;

      default:
        *bw3OV7sN = 0x05;
        break;

    }

  }
  transparent_crc(o6LMT2dP, "o6LMT2dP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

