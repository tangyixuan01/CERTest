#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

struct S
{
  unsigned b4 : 4;
  unsigned b6 : 6;
} s;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int bwrRN0Oa = 907425525;
  int iOqJr2Lm = 640624887;
  s.b6 = 31;
  if (bwrRN0Oa)
    --iOqJr2Lm;
  s.b4 = s.b6;
  s.b6 = s.b4;
  transparent_crc(iOqJr2Lm, "iOqJr2Lm", 1);
  transparent_crc(bwrRN0Oa, "bwrRN0Oa", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (s.b6 == 15) ? (0) : (1);
}

