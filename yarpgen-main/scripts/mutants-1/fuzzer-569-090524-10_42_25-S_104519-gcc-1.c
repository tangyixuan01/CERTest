#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

char a;
char b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  BvJ92AiD = 2147483647;
  int * M27yvLb4 = &BvJ92AiD;
  unsigned char tx1BYCaP = (unsigned char)139;
  int iB6eMAWa = -1486161847;
  int vo_SMNqr = 2147483647;
  for (b = -7; b; b += 3)
  {
    switch (tx1BYCaP)
    {
      case 0x95:
        *M27yvLb4 = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *M27yvLb4 = 0x00;
        break;

      default:
        *M27yvLb4 = 0x05;
        break;

    }

    if (a)
    {
      if (vo_SMNqr < 1)
        vo_SMNqr = iB6eMAWa;
      __builtin_abort();
    }
  }

  transparent_crc(vo_SMNqr, "vo_SMNqr", 1);
  transparent_crc(iB6eMAWa, "iB6eMAWa", 1);
  transparent_crc(tx1BYCaP, "tx1BYCaP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

