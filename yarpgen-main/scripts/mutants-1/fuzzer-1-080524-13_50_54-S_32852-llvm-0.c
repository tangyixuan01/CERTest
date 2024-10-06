#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
void foo()
{
  int  F8Wx0Qst = 2147483647;
  int * HuKvAdPk = &F8Wx0Qst;
  unsigned char o40wAlH5 = (unsigned char)33;
  transparent_crc(o40wAlH5, "o40wAlH5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((a >= 0) && (a > 0))
  {
    switch (o40wAlH5)
    {
      case 0x95:
        *HuKvAdPk = o40wAlH5 - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *HuKvAdPk = o40wAlH5 - 0x80;
        break;

      default:
        *HuKvAdPk = 0;
        break;

    }

    __builtin_printf("0\n");
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo();
  return 0;
}

