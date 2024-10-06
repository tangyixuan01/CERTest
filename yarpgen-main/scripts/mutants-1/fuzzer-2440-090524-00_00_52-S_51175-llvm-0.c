#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

short a = -1;
short c = 4;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  Pt0LMq_m = -2147483648;
  int * ofbnkYg4 = &Pt0LMq_m;
  unsigned char GrBXKe1P = (unsigned char)255;
  char d;
  b = 65527 & (++a);
  d = (0 == 0) ? (b) : (0);
  switch (GrBXKe1P)
  {
    case 0x95:
      *ofbnkYg4 = GrBXKe1P - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *ofbnkYg4 = GrBXKe1P - 0x80;
      break;

    default:
      *ofbnkYg4 = 0;
      break;

  }

  if (d)
  {
    c = 0;
  }
  transparent_crc(GrBXKe1P, "GrBXKe1P", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", c);
}

