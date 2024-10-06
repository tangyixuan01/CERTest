#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

volatile int a;
volatile int b = -1;
char buf[64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * wmRzP7en = &b;
  unsigned char RUnKN9E8 = (unsigned char)255;
  int c = a;
  int d = b;
  if ((((c >= (-35791395)) && (c < 35791394)) && (d >= (-1))) && (d < 0x7fffffff))
  {
    int e = __builtin_sprintf(buf, "%+03d%02d", c + 1, d + 1);
    if (e > 7)
    {
      switch (RUnKN9E8)
      {
        case 0x95:
          *wmRzP7en = RUnKN9E8 - 0x91;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *wmRzP7en = RUnKN9E8 - 0x80;
          break;

        default:
          *wmRzP7en = 0;
          break;

      }

      __builtin_abort();
    }
    transparent_crc(e, "e", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }
  transparent_crc(RUnKN9E8, "RUnKN9E8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

