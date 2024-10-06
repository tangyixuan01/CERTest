#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a = 0;
static int b = 0;
long c = 0;
int main()
{
  platform_main_begin();
  crc32_gentab();
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
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

