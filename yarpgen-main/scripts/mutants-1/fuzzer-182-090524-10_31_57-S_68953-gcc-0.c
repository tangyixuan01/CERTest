#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int yu[][1] = {{0}, {0}, {1}, {1}};
int t4 = 0;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  short wDvRUqk2 = (short)32767;
  unsigned char RyLKXoVi = (unsigned char)242;
  int dx;
  int zh;
  int ro;
  for (dx = 0; dx < 2; ++dx)
  {
    for (zh = 0; zh < 2; ++zh)
    {
      wDvRUqk2 = ((-RyLKXoVi) + 2147483647) << 0;
      for (ro = 0; ro < 3; ++ro)
      {
        yu[ro][t4] = yu[zh + 1][t4];
      }

    }

  }

  transparent_crc(RyLKXoVi, "RyLKXoVi", 1);
  transparent_crc(wDvRUqk2, "wDvRUqk2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return yu[0][t4] != 0;
}

