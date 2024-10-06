#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  long bL084tJh = -9223372036854775807LL;
  int TxFm9YNZ = -2147483648;
  int dsIWZCGe = -345902690;
  long CVRdeETx = 9223372036854775807LL;
  int hv5jV0E6 = -1183169674;
  unsigned lb70xKNm = 0U;
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

    }

  }

  transparent_crc(lb70xKNm, "lb70xKNm", 1);
  transparent_crc(hv5jV0E6, "hv5jV0E6", 1);
  transparent_crc(CVRdeETx, "CVRdeETx", 1);
  transparent_crc(dsIWZCGe, "dsIWZCGe", 1);
  transparent_crc(TxFm9YNZ, "TxFm9YNZ", 1);
  transparent_crc(bL084tJh, "bL084tJh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; e < 6; e++)
  {
    f = 0;
    for (; f < 9; f++)
    {
      printf("%d\n", a[e][f]);
      if (lb70xKNm)
      {
        bL084tJh = CVRdeETx;
        CVRdeETx = ~((((TxFm9YNZ | lb70xKNm) / (~dsIWZCGe)) - bL084tJh) - (~TxFm9YNZ));
        hv5jV0E6 = ~((~(1 | (~(CVRdeETx - TxFm9YNZ)))) | ((-200000000L) - hv5jV0E6));
        TxFm9YNZ = ~(bL084tJh - (~TxFm9YNZ));
      }
    }

  }

}

