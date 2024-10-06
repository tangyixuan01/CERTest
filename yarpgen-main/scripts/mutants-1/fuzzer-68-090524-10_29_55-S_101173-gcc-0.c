#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a[6][9];
char b;
char c;
short d;
int e;
int f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int s7fA5ou6 = -2147483648;
  int JcLwib6j = 692942266;
  char TuPfwGC3 = (signed char)127;
  int czUJROb5 = 2147483647;
  unsigned int DQGly0FY = 0U;
  a[1][3] = 8;
  b = 1;
  for (; b <= 5; b++)
  {
    d = 0;
    for (; d <= 5; d++)
    {
      c = 0;
      for (; c <= 5; c++)
      {
        a[b][c] = a[b][c + 2] & 216;
      }

      for (; JcLwib6j < 1; JcLwib6j++)
      {
        for (DQGly0FY = 0; DQGly0FY < 2; DQGly0FY++)
          s7fA5ou6 = czUJROb5 != 0;

        TuPfwGC3 = s7fA5ou6 - 8;
        if (((unsigned int) TuPfwGC3) >= DQGly0FY)
          break;
      }

    }

  }

  transparent_crc(DQGly0FY, "DQGly0FY", 1);
  transparent_crc(czUJROb5, "czUJROb5", 1);
  transparent_crc(TuPfwGC3, "TuPfwGC3", 1);
  transparent_crc(JcLwib6j, "JcLwib6j", 1);
  transparent_crc(s7fA5ou6, "s7fA5ou6", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; e < 6; e++)
  {
    f = 0;
    for (; f < 9; f++)
    {
      printf("%d\n", a[e][f]);
    }

  }

}

