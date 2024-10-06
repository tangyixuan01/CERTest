#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
short a;
volatile unsigned b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  LJtcin8M = -511995299;
  int * thzcFaQX = &LJtcin8M;
  unsigned char Ibw9lCqr = (unsigned char)255;
  short *c = &a;
  lbl:
  b--;

  (*c)--;
  if (a)
  {
    switch (Ibw9lCqr)
    {
      case 0x95:
        *thzcFaQX = Ibw9lCqr - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *thzcFaQX = Ibw9lCqr - 0x80;
        break;

      default:
        *thzcFaQX = 0;
        break;

    }

    goto lbl;
  }
  printf("%d\n", b);
  transparent_crc(Ibw9lCqr, "Ibw9lCqr", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

