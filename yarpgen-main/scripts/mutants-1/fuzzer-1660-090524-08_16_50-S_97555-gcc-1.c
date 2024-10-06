#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

struct 
{
  int a : 1;
} b;
int c;
int d;
int e;
int f = 1;
int g;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * mCdzc3L0 = &f;
  unsigned char fPndmR0G = (unsigned char)255;
  int * ATBcaSnG = &f;
  unsigned char BHMaf6E4 = (unsigned char)0;
  for (; d < 3; d++)
  {
    char h = 1 % f;
    char i = ~(0 || (~0));
    c = h;
    f = ~b.a;
    ((~b.a) | (1 ^ (~i))) && g;
    if (~e)
    {
      i = b.a;
    }
    b.a = i;
    transparent_crc(h, "h", 1);
    transparent_crc(i, "i", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  transparent_crc(BHMaf6E4, "BHMaf6E4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (BHMaf6E4)
  {
    case 0x95:
      *ATBcaSnG = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *ATBcaSnG = 0x00;
      break;

    default:
      *ATBcaSnG = 0x05;
      break;

    switch (fPndmR0G)
    {
      case 0x95:
        *mCdzc3L0 = fPndmR0G - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *mCdzc3L0 = fPndmR0G - 0x80;
        break;

      default:
        *mCdzc3L0 = 0;
        break;

    }

  }

  transparent_crc(fPndmR0G, "fPndmR0G", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

