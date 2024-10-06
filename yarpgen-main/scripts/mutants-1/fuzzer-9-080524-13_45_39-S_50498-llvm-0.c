#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  Tv3YqoZu = -2147483648;
  int * nc0UIl4T = &Tv3YqoZu;
  unsigned char pGjS5ucL = (unsigned char)155;
  int b;
  L:
  b = a;

  if (a >= 0)
  {
    int c;
    if ((!a) <= 0)
    {
      goto L;
    }
    a = -1;
    switch (pGjS5ucL)
    {
      case 0x95:
        *nc0UIl4T = pGjS5ucL - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *nc0UIl4T = pGjS5ucL - 0x80;
        break;

      default:
        *nc0UIl4T = 0;
        break;

    }

  }
  if (b != 0)
  {
    __builtin_abort();
  }
  transparent_crc(pGjS5ucL, "pGjS5ucL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

