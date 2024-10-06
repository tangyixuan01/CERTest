#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int xc;
int n1 = 0;
int bx[2];
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int R6WAnmYg = -2147483648;
  char uPvZ5tYD = (signed char)-128;
  int IQTxzceW = -2147483648;
  int aj = 1;
  int cs;
  IQTxzceW = (uPvZ5tYD ^ R6WAnmYg) & R6WAnmYg;
  for (cs = aj; cs >= 0; --cs)
  {
    int sq;
    for (sq = 0; sq < 2; ++sq)
    {
      if (aj != 0)
      {
        --n1;
      }
      for (xc = 0; xc < 2; ++xc)
      {
        bx[xc] = 0;
      }

    }

    --aj;
  }

  transparent_crc(IQTxzceW, "IQTxzceW", 1);
  transparent_crc(uPvZ5tYD, "uPvZ5tYD", 1);
  transparent_crc(R6WAnmYg, "R6WAnmYg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return n1 != (-2);
}

