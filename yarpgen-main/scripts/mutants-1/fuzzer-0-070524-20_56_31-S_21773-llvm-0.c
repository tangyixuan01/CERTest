#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int c;
short d;
char fn1(int p1, int p2)
{
  int  OIxuZwf0 = -794899967;
  int * _Y2bKNUt = &OIxuZwf0;
  unsigned char CHvDeFpi = (unsigned char)38;
  transparent_crc(CHvDeFpi, "CHvDeFpi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (CHvDeFpi)
  {
    case 0x95:
      *_Y2bKNUt = CHvDeFpi - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *_Y2bKNUt = CHvDeFpi - 0x80;
      break;

    default:
      *_Y2bKNUt = 0;
      break;

  }

  return p1 * p2;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  lbl:
  ++a;

  d--;
  c = fn1(d, 146);
  if (c)
  {
    goto lbl;
  }
  printf("%d\n", a);
  return 0;
}

