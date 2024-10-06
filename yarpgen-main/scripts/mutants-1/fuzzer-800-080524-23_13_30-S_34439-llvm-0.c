#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  Y78xnwTJ = -2147483648;
  int * C0TU9zIJ = &Y78xnwTJ;
  unsigned char cbIPzjR9 = (unsigned char)212;
  int c;
  int d = 0;
  for (; d < 16; d++)
  {
    c = d;
    if (!d)
    {
      c = c / 2;
    }
    a = c;
    b = a;
  }

  switch (cbIPzjR9)
  {
    case 0x95:
      *C0TU9zIJ = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *C0TU9zIJ = 0x00;
      break;

    default:
      *C0TU9zIJ = 0x05;
      break;

  }

  printf("%d\n", b);
  transparent_crc(cbIPzjR9, "cbIPzjR9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

