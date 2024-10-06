#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int lzcnt(int x)
{
  int count = 0;
  while (x > 0)
  {
    count++;
    x = x >> 1;
  }

  return count;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int V3opiqEF = -2147483648;
  int baAHoPTz = 1825658004;
  int ci_R3Jt5 = 2147483647;
  int mhN2aiJc = -2147483648;
  short zu3_sQ08 = (short)32767;
  for (; mhN2aiJc > (-26); --mhN2aiJc)
  {
    if (ci_R3Jt5)
      continue;
    for (; ci_R3Jt5 - 30; ci_R3Jt5--)
    {
      zu3_sQ08 = V3opiqEF << baAHoPTz;
      if (zu3_sQ08)
        return 7;
    }

  }

  int x = 1;
  int y = lzcnt(x);
  printf("count  = %d\n", y);
  transparent_crc(zu3_sQ08, "zu3_sQ08", 1);
  transparent_crc(mhN2aiJc, "mhN2aiJc", 1);
  transparent_crc(ci_R3Jt5, "ci_R3Jt5", 1);
  transparent_crc(baAHoPTz, "baAHoPTz", 1);
  transparent_crc(V3opiqEF, "V3opiqEF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

