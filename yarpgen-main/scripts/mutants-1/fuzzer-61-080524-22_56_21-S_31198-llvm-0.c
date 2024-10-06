#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[256];
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  cgPAJETi = -1360017775;
  int * HQhu_J0F = &cgPAJETi;
  unsigned char lmO0Xkbn = (unsigned char)116;
  int d = 0;
  for (; d < 256; d++)
  {
    switch (lmO0Xkbn)
    {
      case 0x95:
        *HQhu_J0F = lmO0Xkbn - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *HQhu_J0F = lmO0Xkbn - 0x80;
        break;

      default:
        *HQhu_J0F = 0;
        break;

    }

    a[d] = c;
  }

  for (b = 0; !b; b--)
  {
    printf("%d\n", b);
  }

  transparent_crc(lmO0Xkbn, "lmO0Xkbn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

