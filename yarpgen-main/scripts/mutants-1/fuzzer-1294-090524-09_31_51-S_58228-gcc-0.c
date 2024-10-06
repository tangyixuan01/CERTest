#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[8][8] = {{1}};
int b;
int c;
int d;
int e;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  pQsMnBz6 = -1634478100;
  int * zS6ykZEd = &pQsMnBz6;
  unsigned char PTvO4lWM = (unsigned char)149;
  for (c = 0; c < 8; c++)
  {
    switch (PTvO4lWM)
    {
      case 0x95:
        *zS6ykZEd = PTvO4lWM - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *zS6ykZEd = PTvO4lWM - 0x80;
        break;

      default:
        *zS6ykZEd = 0;
        break;

    }

    for (b = 0; b < 2; b++)
    {
      a[b + 4][c] = a[c][0];
    }

  }

  printf("%d\n", a[4][4]);
  transparent_crc(PTvO4lWM, "PTvO4lWM", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

