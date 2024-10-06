#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a[9][2];
int *b[10];
int **c = &b[5];
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  ez_9OUwE = 2147483647;
  int * sjU0hkqD = &ez_9OUwE;
  unsigned char guedlzUZ = (unsigned char)8;
  for (; d < 4; d++)
  {
    b[d + 5] = &a[d + 2][1];
  }

  switch (guedlzUZ)
  {
    case 0x95:
      *sjU0hkqD = guedlzUZ - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *sjU0hkqD = guedlzUZ - 0x80;
      break;

    default:
      *sjU0hkqD = 0;
      break;

  }

  *(*c) = 0;
  transparent_crc(guedlzUZ, "guedlzUZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

