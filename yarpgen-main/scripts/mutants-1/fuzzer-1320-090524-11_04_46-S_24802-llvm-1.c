#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

static int a[3];
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  HhZJOclK = -2147483648;
  int * qztc81WB = &HhZJOclK;
  unsigned char biGHfO07 = (unsigned char)0;
  int  twM4Oehr = 2147483647;
  int * jM9qsTGe = &twM4Oehr;
  unsigned char lRbmMKIj = (unsigned char)255;
  int c[1] = {0};
  switch (lRbmMKIj)
  {
    case 0x95:
      *jM9qsTGe = lRbmMKIj - 0x91;
      break;

    switch (biGHfO07)
    {
      case 0x95:
        *qztc81WB = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *qztc81WB = 0x00;
        break;

      default:
        *qztc81WB = 0x05;
        break;

    }

    case 0x80:

    case 0x81:

    case 0x82:
      *jM9qsTGe = lRbmMKIj - 0x80;
      break;

    default:
      *jM9qsTGe = 0;
      break;

  }

  a[2] = 1;
  for (b = 0; b < 3; b++)
  {
    a[b] = 0;
  }

  if (a[2] != 0)
  {
    __builtin_abort();
  }
  transparent_crc(lRbmMKIj, "lRbmMKIj", 1);
  transparent_crc(biGHfO07, "biGHfO07", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

