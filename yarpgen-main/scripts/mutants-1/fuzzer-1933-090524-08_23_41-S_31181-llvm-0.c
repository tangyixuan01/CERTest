#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  woT7aF4m = -2147483648;
  int * W51aDxA3 = &woT7aF4m;
  unsigned char f1oecsXh = (unsigned char)169;
  for (a = -2; a < (-1); a++)
  {
    ;
    switch (f1oecsXh)
    {
      case 0x95:
        *W51aDxA3 = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *W51aDxA3 = 0x00;
        break;

      default:
        *W51aDxA3 = 0x05;
        break;

    }

  }

  transparent_crc(f1oecsXh, "f1oecsXh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

