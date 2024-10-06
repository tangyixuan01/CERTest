#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int k6Ihs2rw = 1552788563;
  unsigned int l_vH4afn = 0U;
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
      while (1)
      {
        if (l_vH4afn < 10)
          return k6Ihs2rw;
        if (l_vH4afn < (10 * 10))
          return k6Ihs2rw + 1;
        if (l_vH4afn < ((10 * 10) * 10))
          return k6Ihs2rw + 2;
        if (l_vH4afn < (((10 * 10) * 10) * 10))
          return k6Ihs2rw + 3;
        k6Ihs2rw += 4;
        l_vH4afn /= ((10 * 10) * 10) * 10;
      }

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
  transparent_crc(l_vH4afn, "l_vH4afn", 1);
  transparent_crc(k6Ihs2rw, "k6Ihs2rw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

