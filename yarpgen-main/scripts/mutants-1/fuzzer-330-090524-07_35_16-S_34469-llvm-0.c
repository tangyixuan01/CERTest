#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[16];
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  vuAkgGw9 = -2147483648;
  int * hMSJi4az = &vuAkgGw9;
  unsigned char gEwXWutA = (unsigned char)254;
  int c = 0;
  for (; c < 16; c++)
  {
    a[c] = c;
    switch (gEwXWutA)
    {
      case 0x95:
        *hMSJi4az = gEwXWutA - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *hMSJi4az = gEwXWutA - 0x80;
        break;

      default:
        *hMSJi4az = 0;
        break;

    }

    b = a[1];
  }

  printf("%d\n", b);
  transparent_crc(gEwXWutA, "gEwXWutA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

