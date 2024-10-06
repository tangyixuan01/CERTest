#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  uqHQPgIE = 769889311;
  int * zwty4NMx = &uqHQPgIE;
  unsigned char IOS4CPV_ = (unsigned char)255;
  for (; a < 2; a += 2)
  {
    for (b = 0; b < 1; b++)
    {
      if (a < 1)
      {
        c = 0;
      }
    }

    for (; c < 1; c++)
    {
      ;
    }

  }

  if (a != 2)
  {
    switch (IOS4CPV_)
    {
      case 0x95:
        *zwty4NMx = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *zwty4NMx = 0x00;
        break;

      default:
        *zwty4NMx = 0x05;
        break;

    }

    __builtin_abort();
  }
  transparent_crc(IOS4CPV_, "IOS4CPV_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

