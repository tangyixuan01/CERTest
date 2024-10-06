#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int yu[][1] = {{0}, {0}, {1}, {1}};
int t4 = 0;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int Ql4aqUrm = -2147483648;
  int ANxG0ErL = -2147483648;
  int dx;
  int zh;
  int ro;
  for (dx = 0; dx < 2; ++dx)
  {
    for (zh = 0; zh < 2; ++zh)
    {
      for (ro = 0; ro < 3; ++ro)
      {
        yu[ro][t4] = yu[zh + 1][t4];
        switch (Ql4aqUrm)
        {
          case 5:
            ANxG0ErL = 1;
            break;

          case 6:
            ANxG0ErL = 2;
            break;

          case 7:
            ANxG0ErL = 3;
            break;

        }

      }

    }

  }

  transparent_crc(ANxG0ErL, "ANxG0ErL", 1);
  transparent_crc(Ql4aqUrm, "Ql4aqUrm", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return yu[0][t4] != 0;
}

