#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-assignment-snippet -> insert-if-snippet -> insert-assignment-snippet

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
  int dYB0t3rX = -2147483648;
  int flevqIPE = -770608356;
  volatile short eELcti_2 = (short)8432;
  signed s6bqElOu = 1;
  int a_kl20nW = -579190877;
  flevqIPE = (s6bqElOu / eELcti_2) > dYB0t3rX;
  int GbhRZ2Cg = 1447367968;
  if ((GbhRZ2Cg % 10000000) == 0)
    printf("%d\n", GbhRZ2Cg);
  transparent_crc(GbhRZ2Cg, "GbhRZ2Cg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (a_kl20nW == (-1))
    return 0;
  transparent_crc(a_kl20nW, "a_kl20nW", 1);
  transparent_crc(s6bqElOu, "s6bqElOu", 1);
  transparent_crc(eELcti_2, "eELcti_2", 1);
  transparent_crc(flevqIPE, "flevqIPE", 1);
  transparent_crc(dYB0t3rX, "dYB0t3rX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned BVO56sRQ = 4294967295U;
  int qegy1FAC = -1317239479;
  int MqDBQbxk = 18457382;
  MqDBQbxk = ~(BVO56sRQ % qegy1FAC);
  c = fn1(a);
  if (b)
  {
    struct S0 f[3][9] = {{{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}, {{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}, {{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}};
    b = f[1][8].f0;
    for (int hash_i = 0; hash_i < 3; hash_i++)
    {
      for (int hash_j = 0; hash_j < 9; hash_j++)
      {
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
  transparent_crc(MqDBQbxk, "MqDBQbxk", 1);
  transparent_crc(qegy1FAC, "qegy1FAC", 1);
  transparent_crc(BVO56sRQ, "BVO56sRQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

