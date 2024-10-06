#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet -> insert-if-snippet -> insert-if-snippet

int lzcnt(int x)
{
  volatile unsigned int  jJ5KGXAc = 4294967295U;
  volatile unsigned int * fgTb9FIO = &jJ5KGXAc;
  int N8y6V0qc = -1140080528;
  int  YPiFT9NA = 910298338;
  int * FmaK6UEk = &YPiFT9NA;
  int  RmOxez7w = -13473446;
  int * HrfzE7mg = &RmOxez7w;
  int oplJ1hrH = 2147483647;
  int count = 0;
  while (x > 0)
  {
    count++;
    *FmaK6UEk = 1;
    x = x >> 1;
  }

  transparent_crc(oplJ1hrH, "oplJ1hrH", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (N8y6V0qc == 1)
    fgTb9FIO[0x708 / 4] = 0xbeefdead;
  *HrfzE7mg &= 1 % oplJ1hrH;
  transparent_crc(N8y6V0qc, "N8y6V0qc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return count;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  volatile int lVChPLFg = 1110917580;
  int To4dGlQL = 1855544123;
  int x = 1;
  int y = lzcnt(x);
  if (To4dGlQL < 4)
    lVChPLFg--;
  printf("count  = %d\n", y);
  transparent_crc(To4dGlQL, "To4dGlQL", 1);
  transparent_crc(lVChPLFg, "lVChPLFg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

