#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet -> insert-switch-snippet

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  XFAvNUbV = 1007239976;
  int * ixSM6Wtw = &XFAvNUbV;
  unsigned char x7UatdJw = (unsigned char)86;
  int  mPs4ThEq = -2147483648;
  int * sDHuIvBL = &mPs4ThEq;
  unsigned char SnKNYVWQ = (unsigned char)255;
  int fkatWPB9 = 2147483647;
  int d8qv5B6x = 2147483647;
  char b[128];
  int l = __builtin_sprintf(b, "%.2d", -1);
  __builtin_printf("b: '%s', length: %d\n", b, l);
  if (l != 3)
  {
    __builtin_abort();
    switch (fkatWPB9)
    {
      switch (x7UatdJw)
      {
        case 0x95:
          *ixSM6Wtw = x7UatdJw - 0x91;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *ixSM6Wtw = x7UatdJw - 0x80;
          break;

        default:
          *ixSM6Wtw = 0;
          break;

      }

      case 5:
        d8qv5B6x = 1;
        break;

      case 6:
        d8qv5B6x = 2;
        break;

      case 7:
        d8qv5B6x = 3;
        break;

    }

  }
  transparent_crc(d8qv5B6x, "d8qv5B6x", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (SnKNYVWQ)
  {
    case 0x95:
      *sDHuIvBL = SnKNYVWQ - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *sDHuIvBL = SnKNYVWQ - 0x80;
      break;

    default:
      *sDHuIvBL = 0;
      break;

  }

  transparent_crc(fkatWPB9, "fkatWPB9", 1);
  transparent_crc(SnKNYVWQ, "SnKNYVWQ", 1);
  transparent_crc(x7UatdJw, "x7UatdJw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

