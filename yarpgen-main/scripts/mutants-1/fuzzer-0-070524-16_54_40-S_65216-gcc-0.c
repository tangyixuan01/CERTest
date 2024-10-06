#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b = 62;
int e;
volatile int c;
volatile int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * lgeSopGt = &b;
  unsigned char zG0_PUD9 = (unsigned char)255;
  int f = a = 0;
  for (; a < 2; a++)
  {
    b &= (8 ^ f) & 1;
    for (e = 0; e < 6; e++)
    {
      if (c)
      {
        f = d;
        switch (zG0_PUD9)
        {
          case 0x95:
            *lgeSopGt = 0x01;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *lgeSopGt = 0x00;
            break;

          default:
            *lgeSopGt = 0x05;
            break;

        }

      }
    }

  }

  if (b != 0)
  {
    __builtin_abort();
  }
  transparent_crc(zG0_PUD9, "zG0_PUD9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

