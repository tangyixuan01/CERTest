#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int yu[][1] = {{0}, {0}, {1}, {1}};
int t4 = 0;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int hIJDYE37 = -2147483648;
  int D4Q9k6GM = -1747809981;
  int dx;
  int zh;
  int ro;
  for (dx = 0; dx < 2; ++dx)
  {
    if (!hIJDYE37)
      return D4Q9k6GM;
    for (zh = 0; zh < 2; ++zh)
    {
      for (ro = 0; ro < 3; ++ro)
      {
        yu[ro][t4] = yu[zh + 1][t4];
      }

    }

  }

  transparent_crc(D4Q9k6GM, "D4Q9k6GM", 1);
  transparent_crc(hIJDYE37, "hIJDYE37", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return yu[0][t4] != 0;
}

