#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a = 0;
static int b = 0;
long c = 0;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * gt2mOr81 = &a;
  unsigned char wW5tm6_J = (unsigned char)0;
  for (int d = 0; d < 8; d++)
  {
    a ^= c;
    b = a;
    a ^= 1;
  }

  if (b != 1)
  {
    switch (wW5tm6_J)
    {
      case 0x95:
        *gt2mOr81 = wW5tm6_J - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *gt2mOr81 = wW5tm6_J - 0x80;
        break;

      default:
        *gt2mOr81 = 0;
        break;

    }

    __builtin_abort();
  }
  transparent_crc(wW5tm6_J, "wW5tm6_J", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

