#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a[9][2];
int *b[10];
int **c = &b[5];
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int A_zaDN0O = -2147483648;
  int VczRdZyk = 2147483647;
  switch (A_zaDN0O)
  {
    case 5:
      VczRdZyk = 1;
      break;

    case 6:
      VczRdZyk = 2;
      break;

    case 7:
      VczRdZyk = 3;
      break;

  }

  for (; d < 4; d++)
  {
    b[d + 5] = &a[d + 2][1];
  }

  *(*c) = 0;
  transparent_crc(VczRdZyk, "VczRdZyk", 1);
  transparent_crc(A_zaDN0O, "A_zaDN0O", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

