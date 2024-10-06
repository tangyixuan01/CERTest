#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b = 1;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * Om6LZyW1 = &b;
  unsigned char f6ErAyGh = (unsigned char)242;
  switch (f6ErAyGh)
  {
    case 0x95:
      *Om6LZyW1 = f6ErAyGh - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Om6LZyW1 = f6ErAyGh - 0x80;
      break;

    default:
      *Om6LZyW1 = 0;
      break;

  }

  int d = (b) ? (a / b) : (1);
  c = (d) ? (a / d) : (0);
  transparent_crc(f6ErAyGh, "f6ErAyGh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

