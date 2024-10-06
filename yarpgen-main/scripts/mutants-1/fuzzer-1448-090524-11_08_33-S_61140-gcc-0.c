#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[1] = {1};
int b = 1;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * gv5FO_Al = &b;
  unsigned char HXw1QyZG = (unsigned char)0;
  for (; c < 1; c++)
  {
    if (a[0])
    {
      switch (HXw1QyZG)
      {
        case 0x95:
          *gv5FO_Al = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *gv5FO_Al = 0x00;
          break;

        default:
          *gv5FO_Al = 0x05;
          break;

      }

      a[0] &= 1;
      b = 0;
    }
  }

  printf("%d\n", b);
  transparent_crc(HXw1QyZG, "HXw1QyZG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

