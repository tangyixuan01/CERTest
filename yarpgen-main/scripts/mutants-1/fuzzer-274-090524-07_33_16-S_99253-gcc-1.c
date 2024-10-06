#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int a = 0;
static int b = 0;
long c = 0;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int hEP7LJ9T = 2147483647;
  int xDzVJhrL = -2147483648;
  int * pbWNeHqz = &a;
  unsigned char jz4Ie8QF = (unsigned char)6;
  for (int d = 0; d < 8; d++)
  {
    a ^= c;
    b = a;
    a ^= 1;
  }

  if (b != 1)
  {
    __builtin_abort();
    switch (jz4Ie8QF)
    {
      switch (hEP7LJ9T)
      {
        case 5:
          xDzVJhrL = 1;
          break;

        case 6:
          xDzVJhrL = 2;
          break;

        case 7:
          xDzVJhrL = 3;
          break;

      }

      case 0x95:
        *pbWNeHqz = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *pbWNeHqz = 0x00;
        break;

      default:
        *pbWNeHqz = 0x05;
        break;

    }

  }
  transparent_crc(jz4Ie8QF, "jz4Ie8QF", 1);
  transparent_crc(xDzVJhrL, "xDzVJhrL", 1);
  transparent_crc(hEP7LJ9T, "hEP7LJ9T", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

