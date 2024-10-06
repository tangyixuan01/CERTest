#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a = 2;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * Q1xA6JjU = &a;
  unsigned char vP8HYBAs = (unsigned char)255;
  int c;
  if (!b)
  {
    b = a;
    c = (a == 0) ? (1) : (1 % a);
    if (c)
    {
      switch (vP8HYBAs)
      {
        case 0x95:
          *Q1xA6JjU = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *Q1xA6JjU = 0x00;
          break;

        default:
          *Q1xA6JjU = 0x05;
          break;

      }

      b = 0;
    }
  }
  printf("%d\n", b);
  transparent_crc(vP8HYBAs, "vP8HYBAs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

