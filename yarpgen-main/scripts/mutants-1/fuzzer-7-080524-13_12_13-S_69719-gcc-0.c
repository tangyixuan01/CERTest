#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int b;
int c = 1;
int e;
int f;
int a[6][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 1, 0, 0, 0}};
void fn1()
{
  long wKpQcErb = -4968469350890599846LL;
  int uADlk3fB = 1418092759;
  int R_hFk9X1 = -2147483648;
  unsigned yQ8McpHT = 2864541825U;
  int d;
  transparent_crc(yQ8McpHT, "yQ8McpHT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  yQ8McpHT = ~(-(uADlk3fB || (R_hFk9X1 & wKpQcErb)));
  transparent_crc(R_hFk9X1, "R_hFk9X1", 1);
  transparent_crc(uADlk3fB, "uADlk3fB", 1);
  transparent_crc(wKpQcErb, "wKpQcErb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (b = 0; b < 5; b++)
  {
    for (d = 4; d; d--)
    {
      a[c + 1][b] = a[d + 1][d];
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  if (a[2][1] != 0)
  {
    __builtin_abort();
  }
  return 0;
}

