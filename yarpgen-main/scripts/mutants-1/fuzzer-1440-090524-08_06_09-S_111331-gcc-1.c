#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

int printf(const char *, ...);
int a;
int b;
int c(int d, int e, int f)
{
  volatile unsigned short  cCTIWifR = (unsigned short)65535;
  volatile unsigned short * BOGVjNeX = &cCTIWifR;
  int  NgrIBzq6 = 2070580903;
  int * Wmt_g3TI = &NgrIBzq6;
  unsigned char mfsJSL3F = (unsigned char)71;
  if (d < e)
  {
    return e;
  }
  if (d > f)
  {
    return f;
    *(BOGVjNeX + 0) = 0xAA;
    switch (mfsJSL3F)
    {
      case 0x95:
        *Wmt_g3TI = mfsJSL3F - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *Wmt_g3TI = mfsJSL3F - 0x80;
        break;

      default:
        *Wmt_g3TI = 0;
        break;

    }

  }
  transparent_crc(mfsJSL3F, "mfsJSL3F", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return d;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int g = -1;
  a = c(b + 30, 29, g + 29);
  printf("%d\n", a);
}

