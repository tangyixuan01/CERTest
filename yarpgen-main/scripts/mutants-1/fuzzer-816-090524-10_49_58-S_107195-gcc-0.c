#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  lSNPHUyh = -2147483648;
  int * IDgrkHfA = &lSNPHUyh;
  unsigned char MmUsVIDN = (unsigned char)255;
  int c = 0;
  if (a)
  {
    c = 1;
    switch (MmUsVIDN)
    {
      case 0x95:
        *IDgrkHfA = MmUsVIDN - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *IDgrkHfA = MmUsVIDN - 0x80;
        break;

      default:
        *IDgrkHfA = 0;
        break;

    }

  }
  c = (1 & (a && c)) && b;
  if (a)
  {
    b = c;
    __builtin_abort();
  }
  transparent_crc(MmUsVIDN, "MmUsVIDN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

