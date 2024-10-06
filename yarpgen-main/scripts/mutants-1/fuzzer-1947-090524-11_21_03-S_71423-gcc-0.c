#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

struct S1
{
  int f1 : 1;
};
volatile struct S1 b = {0};
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned short bEZcAI2f = (unsigned short)7064;
  int u6J54sXp = 2147483647;
  int cP401hDS = -2147483648;
  char c = b.f1;
  for (u6J54sXp = 0; u6J54sXp < 1; u6J54sXp = 1)
    for (;;)
  {
    cP401hDS &= --bEZcAI2f;
    break;
  }


  b.f1 = 1;
  if ((b.f1 > (-1)) || c)
  {
    __builtin_abort();
  }
  transparent_crc(cP401hDS, "cP401hDS", 1);
  transparent_crc(u6J54sXp, "u6J54sXp", 1);
  transparent_crc(bEZcAI2f, "bEZcAI2f", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

