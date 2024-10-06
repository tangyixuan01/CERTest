#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int a[36];
int b;
int c;
int d;
int e;
int f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  Z5rXkHlY = 2147483647;
  int * esjRydTf = &Z5rXkHlY;
  unsigned char WMtqLX4m = (unsigned char)0;
  int  HCEs_mfh = 1260702068;
  int * cIuQ6Eiy = &HCEs_mfh;
  unsigned char WYKEFuJ6 = (unsigned char)204;
  switch (WYKEFuJ6)
  {
    case 0x95:
      *cIuQ6Eiy = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *cIuQ6Eiy = 0x00;
      break;

    default:
      *cIuQ6Eiy = 0x05;
      break;

  }

  for (c = 0; c < 6; c++)
  {
    switch (WMtqLX4m)
    {
      case 0x95:
        *esjRydTf = WMtqLX4m - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *esjRydTf = WMtqLX4m - 0x80;
        break;

      default:
        *esjRydTf = 0;
        break;

    }

    for (d = 0; d < 6; d++)
    {
      for (b = 0; b < 6; b++)
      {
        a[6 + c] = a[(c * 6) + c] ^ 1;
      }

    }

  }

  if (a[7] != 0)
  {
    __builtin_abort();
  }
  transparent_crc(WYKEFuJ6, "WYKEFuJ6", 1);
  transparent_crc(WMtqLX4m, "WMtqLX4m", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

