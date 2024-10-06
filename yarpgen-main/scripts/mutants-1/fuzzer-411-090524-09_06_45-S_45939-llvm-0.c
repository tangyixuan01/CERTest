#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a[256];
int b;
int c;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int VHGF3I5W = 2147483647;
  int ul8bGgAE = -2147483648;
  c = 0;
  for (; c < 256; c++)
  {
    switch (VHGF3I5W)
    {
      case 5:
        ul8bGgAE = 1;
        break;

      case 6:
        ul8bGgAE = 2;
        break;

      case 7:
        ul8bGgAE = 3;
        break;

    }

    a[c] = c;
  }

  for (; d; d++)
  {
    ;
  }

  transparent_crc(ul8bGgAE, "ul8bGgAE", 1);
  transparent_crc(VHGF3I5W, "VHGF3I5W", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("checksum = %X\n", b);
}

