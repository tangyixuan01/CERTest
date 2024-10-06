#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *format, ...);
int a;
int b(int c)
{
  return c;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  vUJAK_Dx = -2025975976;
  int * sYNU1cKQ = &vUJAK_Dx;
  unsigned char Q17tbSqH = (unsigned char)0;
  a = -21;
  for (; a <= 0; a = (unsigned short) (b(a + 2) + 8))
  {
    switch (Q17tbSqH)
    {
      case 0x95:
        *sYNU1cKQ = Q17tbSqH - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *sYNU1cKQ = Q17tbSqH - 0x80;
        break;

      default:
        *sYNU1cKQ = 0;
        break;

    }

    ;
  }

  transparent_crc(Q17tbSqH, "Q17tbSqH", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", a);
}

