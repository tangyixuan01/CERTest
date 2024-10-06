#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
struct 
{
  char f1;
} a;
char fn1(int p1, int p2)
{
  return p1 * p2;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  nCa8KQRt = -2147483648;
  int * M8j3KiCa = &nCa8KQRt;
  unsigned char TO0X8xhI = (unsigned char)255;
  char *b = &a.f1;
  while (fn1(--(*b), 3))
  {
    ;
    switch (TO0X8xhI)
    {
      case 0x95:
        *M8j3KiCa = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *M8j3KiCa = 0x00;
        break;

      default:
        *M8j3KiCa = 0x05;
        break;

    }

  }

  printf("%d\n", a.f1);
  transparent_crc(TO0X8xhI, "TO0X8xhI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

