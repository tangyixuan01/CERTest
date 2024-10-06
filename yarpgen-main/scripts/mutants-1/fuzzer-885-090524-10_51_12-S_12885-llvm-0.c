#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

struct S1
{
  int f0;
  int f2;
  int f3;
  int f6;
  char f8;
} a[1];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  WjpPr8JD = -2147483648;
  int * SfHyBgnR = &WjpPr8JD;
  unsigned char BHQyelaF = (unsigned char)0;
  struct S1 b[] = {1, 1, 1, 1, 1, 1, 1};
  switch (BHQyelaF)
  {
    case 0x95:
      *SfHyBgnR = BHQyelaF - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *SfHyBgnR = BHQyelaF - 0x80;
      break;

    default:
      *SfHyBgnR = 0;
      break;

  }

  b[0].f0 = 0;
  a[0] = b[1];
  transparent_crc(BHQyelaF, "BHQyelaF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

