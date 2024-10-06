#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  oWHc4pnz = 1472088599;
  int * E7g_fL3S = &oWHc4pnz;
  unsigned char xN2KHGLe = (unsigned char)255;
  int c = 0;
  long d;
  for (; b < 1; b++)
  {
    ((c && d) & 3) || a;
    d = c;
    c = -1;
    if (d)
    {
      __builtin_abort();
    }
    switch (xN2KHGLe)
    {
      case 0x95:
        *E7g_fL3S = xN2KHGLe - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *E7g_fL3S = xN2KHGLe - 0x80;
        break;

      default:
        *E7g_fL3S = 0;
        break;

    }

  }

  transparent_crc(xN2KHGLe, "xN2KHGLe", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

