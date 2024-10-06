#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

struct S2
{
  unsigned f0 : 27;
  unsigned f1 : 17;
  signed f2 : 18;
};
struct S2 g_99 = {0, 0, 0};
struct S2 *g_248 = &g_99;
int printf(const char *format, ...);
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int xyARq3bF = -2147483648;
  int  b3NSLJn1 = -2147483648;
  int * D902jP5L = &b3NSLJn1;
  unsigned char UlyA29m7 = (unsigned char)255;
  struct S2 l_438 = {1, 1, 1};
  *g_248 = l_438;
  *g_248 = g_99;
  printf("g_99.f0 = %d\n", g_99.f0);
  switch (UlyA29m7)
  {
    case 0x95:
      *D902jP5L = UlyA29m7 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *D902jP5L = UlyA29m7 - 0x80;
      break;

    switch (xyARq3bF)
      case 111:
      case 222:
      case 44:
      return 0;




    default:
      *D902jP5L = 0;
      break;

  }

  transparent_crc(UlyA29m7, "UlyA29m7", 1);
  transparent_crc(xyARq3bF, "xyARq3bF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

