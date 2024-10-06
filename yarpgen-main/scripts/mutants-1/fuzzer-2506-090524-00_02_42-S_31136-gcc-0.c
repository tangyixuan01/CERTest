#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

struct S
{
  unsigned b4 : 4;
  unsigned b6 : 6;
} s;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int YKGrDRdQ = 2147483647;
  int l_B7VGIj = -2147483648;
  int R5yd8HB4 = -2147483648;
  for (; YKGrDRdQ < 1; YKGrDRdQ++)
    R5yd8HB4 = ((l_B7VGIj >= 2) || (1 >> l_B7VGIj)) ? (0) : (l_B7VGIj);

  s.b6 = 31;
  s.b4 = s.b6;
  s.b6 = s.b4;
  transparent_crc(R5yd8HB4, "R5yd8HB4", 1);
  transparent_crc(l_B7VGIj, "l_B7VGIj", 1);
  transparent_crc(YKGrDRdQ, "YKGrDRdQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (s.b6 == 15) ? (0) : (1);
}

