#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

volatile int a;
volatile int b = -1;
char buf[64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Ba1NQVvD = -2147483648;
  int _OSPpjWd = 1570629257;
  int * UXYhMBHJ = &b;
  unsigned char de_4fZ79 = (unsigned char)0;
  int c = a;
  int d = b;
  if ((((c >= (-35791395)) && (c < 35791394)) && (d >= (-1))) && (d < 0x7fffffff))
  {
    int e = __builtin_sprintf(buf, "%+03d%02d", c + 1, d + 1);
    if (e > 7)
    {
      __builtin_abort();
      switch (de_4fZ79)
      {
        case 0x95:
          *UXYhMBHJ = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *UXYhMBHJ = 0x00;
          break;

        default:
          *UXYhMBHJ = 0x05;
          break;

      }

      _OSPpjWd = ~((~0) / (_OSPpjWd ^ Ba1NQVvD));
    }
    transparent_crc(e, "e", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }
  transparent_crc(de_4fZ79, "de_4fZ79", 1);
  transparent_crc(_OSPpjWd, "_OSPpjWd", 1);
  transparent_crc(Ba1NQVvD, "Ba1NQVvD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

