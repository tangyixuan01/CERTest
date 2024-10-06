#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-assignment-snippet

int yu[][1] = {{0}, {0}, {1}, {1}};
int t4 = 0;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int lV2xp7wn = -1512376114;
  int * dXDyAM3b = &t4;
  char v4pm25ia = (signed char)127;
  int okBXUFn7 = -577595568;
  int iY9gXkjT = -2147483648;
  int dx;
  int zh;
  int ro;
  for (dx = 0; dx < 2; ++dx)
  {
    for (zh = 0; zh < 2; ++zh)
    {
      lV2xp7wn = (*dXDyAM3b ^= v4pm25ia);
      for (ro = 0; ro < 3; ++ro)
      {
        if (iY9gXkjT && okBXUFn7)
          return 0;
        yu[ro][t4] = yu[zh + 1][t4];
      }

    }

  }

  transparent_crc(iY9gXkjT, "iY9gXkjT", 1);
  transparent_crc(okBXUFn7, "okBXUFn7", 1);
  transparent_crc(v4pm25ia, "v4pm25ia", 1);
  transparent_crc(lV2xp7wn, "lV2xp7wn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return yu[0][t4] != 0;
}

