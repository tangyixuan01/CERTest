#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int c;
void d(unsigned f)
{
  int  T12jIkPJ = -1337875250;
  int * IBdbnrUY = &T12jIkPJ;
  unsigned char HjLKxV7R = (unsigned char)255;
  switch (HjLKxV7R)
  {
    case 0x95:
      *IBdbnrUY = HjLKxV7R - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *IBdbnrUY = HjLKxV7R - 0x80;
      break;

    default:
      *IBdbnrUY = 0;
      break;

  }

  transparent_crc(HjLKxV7R, "HjLKxV7R", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = f;
}

#pragma pack(1)
struct 
{
  unsigned : 15;
  signed : 21;
  signed : 26;
  signed a : 9;
} b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned long e = b.a;
  d(e >> 56);
  printf("%d\n", c);
  return 0;
}

