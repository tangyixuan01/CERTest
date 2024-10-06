#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-while-snippet -> insert-for-snippet -> insert-assignment-snippet

#pragma pack(1)
struct S0
{
  int f0 : 24;
};
struct S1
{
  int f1;
} a;
int b;
int c;
char fn1(struct S1 p1)
{
  short LCsflWEN = (short)-32768;
  short R3m64CE5 = (short)28502;
  int pjy9V_P8 = 992844116;
  int IbadtQFx = 542142090;
  int jhizHE7n = 63788340;
  volatile unsigned char MHLrBtJQ = (unsigned char)255;
  int tw0jDx84 = 231089379;
  if (tw0jDx84 > 7)
    return 0;
  transparent_crc(tw0jDx84, "tw0jDx84", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    for (unsigned char i = 0; i < 128; i++)
    {
      jhizHE7n = (LCsflWEN | (IbadtQFx * (R3m64CE5 && 9))) | pjy9V_P8;
      MHLrBtJQ = i;
    }

  }

  transparent_crc(MHLrBtJQ, "MHLrBtJQ", 1);
  transparent_crc(jhizHE7n, "jhizHE7n", 1);
  transparent_crc(IbadtQFx, "IbadtQFx", 1);
  transparent_crc(pjy9V_P8, "pjy9V_P8", 1);
  transparent_crc(R3m64CE5, "R3m64CE5", 1);
  transparent_crc(LCsflWEN, "LCsflWEN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int xpULKnFu = -2147483648;
  int  rca8PGyW = -2021324109;
  int * P1ag08_c = &rca8PGyW;
  c = fn1(a);
  if (b)
  {
    struct S0 f[3][9] = {{{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}, {{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}, {{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}};
    b = f[1][8].f0;
    for (int hash_i = 0; hash_i < 3; hash_i++)
    {
      for (int hash_j = 0; hash_j < 9; hash_j++)
      {
        for (; xpULKnFu < 7; xpULKnFu++)
          for (; *P1ag08_c;)
          ;


        transparent_crc(f[hash_i][hash_j].f0, "f[hash_i][hash_j].f0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
      }

    }

  }
  struct S0 g[3][9] = {{{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}, {{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}, {{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}};
  if (g[1][8].f0 != 1)
  {
    __builtin_abort();
  }
  transparent_crc(xpULKnFu, "xpULKnFu", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

