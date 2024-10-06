#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int b;
int c;
int d;
int e;
int f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  x89okMi_ = 973675454;
  int * _CsSh9Bz = &x89okMi_;
  unsigned char KjM8YIuf = (unsigned char)234;
  int g;
  short h = 1;
  for (; e < 2; e++)
  {
    L1:
    f = 1;

    while ((b > 0) || (a > 0))
    {
      g++;
      h++;
      printf("%d", g);
    }

    L2:
    if ((!h) && ((!c) || a))
    {
      goto L1;
    }

    switch (KjM8YIuf)
    {
      case 0x95:
        *_CsSh9Bz = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *_CsSh9Bz = 0x00;
        break;

      default:
        *_CsSh9Bz = 0x05;
        break;

    }

    if (c)
    {
      goto L2;
    }
  }

  transparent_crc(KjM8YIuf, "KjM8YIuf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

