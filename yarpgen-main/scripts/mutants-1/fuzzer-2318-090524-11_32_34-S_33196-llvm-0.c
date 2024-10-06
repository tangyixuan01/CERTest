#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c;
int d = 1;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * rCxlLUTS = &d;
  unsigned char y2MuveYp = (unsigned char)0;
  int e = d;
  if (~c)
  {
    e = 0;
    L:
    ;

  }
  a = e;
  short h = b;
  b = 0;
  a = (h + c) + (a & e);
  if (a)
  {
    goto L;
    switch (y2MuveYp)
    {
      case 0x95:
        *rCxlLUTS = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *rCxlLUTS = 0x00;
        break;

      default:
        *rCxlLUTS = 0x05;
        break;

    }

  }
  transparent_crc(y2MuveYp, "y2MuveYp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

