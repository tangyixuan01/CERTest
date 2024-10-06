#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

unsigned a;
unsigned b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned char LIpbAm2Y = (unsigned char)76;
  int  VrfaSIjD = 311896017;
  int * DpTgbeRA = &VrfaSIjD;
  unsigned char pRrQ_E9W = (unsigned char)255;
  unsigned c = 0;
  for (a = 0; a < 2; a++)
  {
    while ((unsigned char) ((LIpbAm2Y--) * 6))
      ;

    for (b = 0; b < 2; b++)
    {
      if ((++c) < a)
      {
        __builtin_abort();
      }
    }

    switch (pRrQ_E9W)
    {
      case 0x95:
        *DpTgbeRA = pRrQ_E9W - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *DpTgbeRA = pRrQ_E9W - 0x80;
        break;

      default:
        *DpTgbeRA = 0;
        break;

    }

  }

  transparent_crc(pRrQ_E9W, "pRrQ_E9W", 1);
  transparent_crc(LIpbAm2Y, "LIpbAm2Y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

