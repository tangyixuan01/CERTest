#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[16];
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  KjgdIY_9 = -2147483648;
  int * kab1uhmT = &KjgdIY_9;
  unsigned char jJ7hxTvL = (unsigned char)0;
  int c = 0;
  for (; c < 16; c++)
  {
    a[c] = c;
    b = a[1];
  }

  switch (jJ7hxTvL)
  {
    case 0x95:
      *kab1uhmT = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *kab1uhmT = 0x00;
      break;

    default:
      *kab1uhmT = 0x05;
      break;

  }

  printf("%d\n", b);
  transparent_crc(jJ7hxTvL, "jJ7hxTvL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

