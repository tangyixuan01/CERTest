#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  int GbhRZ2Cg = 1447367968;
  if ((GbhRZ2Cg % 10000000) == 0)
    printf("%d\n", GbhRZ2Cg);
  transparent_crc(GbhRZ2Cg, "GbhRZ2Cg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
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
  return 0;
}

