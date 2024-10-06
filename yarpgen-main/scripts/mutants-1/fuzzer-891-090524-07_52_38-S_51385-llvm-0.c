#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  By4aRcDL = -794111850;
  int * vhm4F1Dk = &By4aRcDL;
  unsigned char xeRw3Aaz = (unsigned char)255;
  int b;
  L:
  b = a;

  if (a <= 0)
  {
    int c = a;
    a = 1;
    if (c)
    {
      goto L;
    }
    transparent_crc(c, "c", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    switch (xeRw3Aaz)
    {
      case 0x95:
        *vhm4F1Dk = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *vhm4F1Dk = 0x00;
        break;

      default:
        *vhm4F1Dk = 0x05;
        break;

    }

  }
  if (b)
  {
    b = a;
    __builtin_abort();
  }
  transparent_crc(xeRw3Aaz, "xeRw3Aaz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

