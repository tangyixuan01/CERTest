#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  nrFy8d5h = 2147483647;
  int * uDW4NLqT = &nrFy8d5h;
  unsigned char ZemXr1NB = (unsigned char)255;
  int c = 0;
  long d;
  for (; b < 1; b++)
  {
    ((c && d) & 3) || a;
    switch (ZemXr1NB)
    {
      case 0x95:
        *uDW4NLqT = ZemXr1NB - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *uDW4NLqT = ZemXr1NB - 0x80;
        break;

      default:
        *uDW4NLqT = 0;
        break;

    }

    d = c;
    c = -1;
    if (d)
    {
      __builtin_abort();
    }
  }

  transparent_crc(ZemXr1NB, "ZemXr1NB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

