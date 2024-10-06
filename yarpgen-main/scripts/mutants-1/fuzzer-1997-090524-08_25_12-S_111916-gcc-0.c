#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

#pragma pack(1)
struct A
{
  int b : 4;
  int c : 11;
  int d : 2;
  int e : 5;
} f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short oPJBh_9K = (short)-6240;
  long GIDFP6se = 9223372036854775807LL;
  int kTgvWn2p = -2147483648;
  long VBbYeEXZ = -9223372036854775807LL;
  struct A g = {1, 1, 1, 1};
  while (!g.b)
  {
    while (1)
    {
      int h = -1;
      L2:
      {
        int j = 0;
        L1:
        GIDFP6se = oPJBh_9K ^ (h | (j & VBbYeEXZ));

        kTgvWn2p = kTgvWn2p / (~(3 | (~GIDFP6se)));
        if (GIDFP6se)
          break;
      }

      h = 0;
    }

    f = g;
  }

  transparent_crc(VBbYeEXZ, "VBbYeEXZ", 1);
  transparent_crc(kTgvWn2p, "kTgvWn2p", 1);
  transparent_crc(GIDFP6se, "GIDFP6se", 1);
  transparent_crc(oPJBh_9K, "oPJBh_9K", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

