#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-assignment-snippet

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
  long kPeodb6W = 6400802272792064119LL;
  long GhHe8mq1 = -9223372036854775807LL;
  short DtmMYkL1 = (short)-1658;
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
  kPeodb6W = ((DtmMYkL1 ^ 9223372036854775807) < 0) ? (DtmMYkL1) : (GhHe8mq1);
  printf("count  = %d\n", y);
  transparent_crc(zu3_sQ08, "zu3_sQ08", 1);
  transparent_crc(mhN2aiJc, "mhN2aiJc", 1);
  transparent_crc(ci_R3Jt5, "ci_R3Jt5", 1);
  transparent_crc(baAHoPTz, "baAHoPTz", 1);
  transparent_crc(V3opiqEF, "V3opiqEF", 1);
  transparent_crc(DtmMYkL1, "DtmMYkL1", 1);
  transparent_crc(GhHe8mq1, "GhHe8mq1", 1);
  transparent_crc(kPeodb6W, "kPeodb6W", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

