#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-while-snippet -> insert-switch-snippet

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
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  ZcWLzK1p = 2147483647;
  int * _tlkIZnh = &ZcWLzK1p;
  unsigned char rSRk6xTK = (unsigned char)255;
  int te7X6cOI = -2147483648;
  unsigned yUEQo4jg = 1099128923U;
  unsigned tWw3K2V5 = 2474759216U;
  int JE2Rkw7F = -2147483648;
  int kTmpuCdr = -1158606544;
  c = fn1(a);
  if (b)
  {
    struct S0 f[3][9] = {{{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}, {{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}, {{0}, {0}, {1}, {1}, {0}, {0}, {0}, {1}, {1}}};
    b = f[1][8].f0;
    while (yUEQo4jg <= 0)
      if (*(&te7X6cOI))
      break;

    for (int hash_i = 0; hash_i < 3; hash_i++)
    {
      switch (rSRk6xTK)
      {
        case 0x95:
          *_tlkIZnh = rSRk6xTK - 0x91;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *_tlkIZnh = rSRk6xTK - 0x80;
          break;

        default:
          *_tlkIZnh = 0;
          break;

      }

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
  kTmpuCdr = ~(tWw3K2V5 % JE2Rkw7F);
  transparent_crc(kTmpuCdr, "kTmpuCdr", 1);
  transparent_crc(JE2Rkw7F, "JE2Rkw7F", 1);
  transparent_crc(tWw3K2V5, "tWw3K2V5", 1);
  transparent_crc(yUEQo4jg, "yUEQo4jg", 1);
  transparent_crc(te7X6cOI, "te7X6cOI", 1);
  transparent_crc(rSRk6xTK, "rSRk6xTK", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

