#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
struct 
{
  int v;
} a[2];
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int CagprOK6 = 2147483647;
  int dFen9oPc = -1386548925;
  int  UL1iB9o6 = -299767604;
  int * BcRp7fGJ = &UL1iB9o6;
  unsigned char A53vbGHX = (unsigned char)255;
  switch (A53vbGHX)
  {
    case 0x95:
      *BcRp7fGJ = A53vbGHX - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *BcRp7fGJ = A53vbGHX - 0x80;
      break;

    default:
      *BcRp7fGJ = 0;
      break;

  }

  a[1].v = 1;
  a[0] = a[1];
  a[1].v = 0;
  for (; b < 1; b++)
  {
    printf("%d\n", a[0].v);
    switch (CagprOK6)
    {
      case 5:
        dFen9oPc = 1;
        break;

      case 6:
        dFen9oPc = 2;
        break;

      case 7:
        dFen9oPc = 3;
        break;

    }

  }

  transparent_crc(A53vbGHX, "A53vbGHX", 1);
  transparent_crc(dFen9oPc, "dFen9oPc", 1);
  transparent_crc(CagprOK6, "CagprOK6", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

