#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int lzcnt(int x)
{
  int  RmOxez7w = -13473446;
  int * HrfzE7mg = &RmOxez7w;
  int oplJ1hrH = 2147483647;
  int count = 0;
  while (x > 0)
  {
    count++;
    x = x >> 1;
  }

  transparent_crc(oplJ1hrH, "oplJ1hrH", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *HrfzE7mg &= 1 % oplJ1hrH;
  return count;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int x = 1;
  int y = lzcnt(x);
  printf("count  = %d\n", y);
  return 0;
}

