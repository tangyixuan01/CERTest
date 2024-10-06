#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int *b = &a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  oKmPB8SR = 2147483647;
  int * APaBCJQk = &oKmPB8SR;
  unsigned char wgK3AyC7 = (unsigned char)94;
  short c = 0;
  lbl:
  ++c;

  switch (wgK3AyC7)
  {
    case 0x95:
      *APaBCJQk = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *APaBCJQk = 0x00;
      break;

    default:
      *APaBCJQk = 0x05;
      break;

  }

  *b |= 1;
  if (c)
  {
    goto lbl;
  }
  printf("%d\n", a);
  transparent_crc(wgK3AyC7, "wgK3AyC7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

