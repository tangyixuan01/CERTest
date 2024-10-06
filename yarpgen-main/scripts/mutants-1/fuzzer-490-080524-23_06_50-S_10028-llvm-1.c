#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet

int printf(const char *, ...);
short safe_15(short si1, short si2)
{
  return (si2 == 0) ? (0) : (si1 % si2);
}

short safe_56(short ui1, short ui2)
{
  return (ui2 == 0) ? (1) : (ui1 / ui2);
}

int g_31;
long f0;
long f1;
int g_65[2][8][2] = {{{}, {}, {}, {0, 1}}};
int g_72;
void func_57(void)
{
  unsigned char STek19hA = (unsigned char)168;
  int FoCHrwy5 = -663319017;
  int n7s9kCty = -2147483648;
  unsigned char fNEZKqVe = (unsigned char)255;
  int *l_64 = &g_65[1][2][1];
  if (fNEZKqVe && FoCHrwy5)
    n7s9kCty = STek19hA;
  g_72 = safe_15(safe_56(1, f0), *l_64);
  transparent_crc(fNEZKqVe, "fNEZKqVe", 1);
  transparent_crc(n7s9kCty, "n7s9kCty", 1);
  transparent_crc(FoCHrwy5, "FoCHrwy5", 1);
  transparent_crc(STek19hA, "STek19hA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *l_64 &= 1;
}

unsigned g_208;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int ZHpg6qUB = 500353571;
  int cDkgpUM9 = -2147483648;
  switch (ZHpg6qUB)
  {
    case 5:
      cDkgpUM9 = 1;
      break;

    case 6:
      cDkgpUM9 = 2;
      break;

    case 7:
      cDkgpUM9 = 3;
      break;

  }

  for (; f0 < 1; f0 = 1)
  {
    func_57();
    for (g_208 = 0; g_208 <= 1; g_208++)
    {
      for (f1 = 0; f1 <= 1; f1++)
      {
        g_65[g_208][g_31 + 2][g_208] = g_65[0][f1 + 2][g_208];
        func_57();
      }

    }

  }

  printf("%d\n", g_65[1][2][1]);
  transparent_crc(cDkgpUM9, "cDkgpUM9", 1);
  transparent_crc(ZHpg6qUB, "ZHpg6qUB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

