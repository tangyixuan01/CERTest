#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  opn751Yi = 2147483647;
  int * xyONSrWL = &opn751Yi;
  unsigned char L7_251wk = (unsigned char)231;
  int d = 0;
  L:
  for (; c;)
  {
    d = d < 1;
  }


  for (b = -2; b < (-1); b++)
  {
    switch (L7_251wk)
    {
      case 0x95:
        *xyONSrWL = L7_251wk - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *xyONSrWL = L7_251wk - 0x80;
        break;

      default:
        *xyONSrWL = 0;
        break;

    }

    d = 0;
  }

  if (a)
  {
    goto L;
  }
  transparent_crc(L7_251wk, "L7_251wk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

