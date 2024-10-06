#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  int *l_64 = &g_65[1][2][1];
  g_72 = safe_15(safe_56(1, f0), *l_64);
  *l_64 &= 1;
}

unsigned g_208;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int dKhJ3alC = 1680766204;
  int XbMkl8cx = -1094574066;
  int gOvI2sw8 = -2147483648;
  int TtMWuU4q = 1423765101;
  int Anj6ugDe = 2060657112;
  int koFrdApJ = 2147483647;
  for (; f0 < 1; f0 = 1)
  {
    func_57();
    for (; dKhJ3alC < 1; dKhJ3alC++)
      if (((((TtMWuU4q++) != 1) || (gOvI2sw8++)) || koFrdApJ) && XbMkl8cx)
      return Anj6ugDe;

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
  transparent_crc(koFrdApJ, "koFrdApJ", 1);
  transparent_crc(Anj6ugDe, "Anj6ugDe", 1);
  transparent_crc(TtMWuU4q, "TtMWuU4q", 1);
  transparent_crc(gOvI2sw8, "gOvI2sw8", 1);
  transparent_crc(XbMkl8cx, "XbMkl8cx", 1);
  transparent_crc(dKhJ3alC, "dKhJ3alC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

