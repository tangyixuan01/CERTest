#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

static int *a;
int b;
int d;
int *c = &b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  iMDvZYXW = 2147483647;
  int * b2vQ9arD = &iMDvZYXW;
  unsigned char JCmLIsWR = (unsigned char)187;
  switch (JCmLIsWR)
  {
    case 0x95:
      *b2vQ9arD = JCmLIsWR - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *b2vQ9arD = JCmLIsWR - 0x80;
      break;

    default:
      *b2vQ9arD = 0;
      break;

  }

  int e[3] = {2, 1, -2139220656};
  a = &e[0];
  d = (e[2] < 0) || (e[2] > (7 >> e[2]));
  *c = d;
  transparent_crc(JCmLIsWR, "JCmLIsWR", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", b);
}

