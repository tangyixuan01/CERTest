#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-if-snippet

int printf(const char *, ...);
short safe_15(short si1, short si2)
{
  return (si2 == 0) ? (0) : (si1 % si2);
}

short safe_56(short ui1, short ui2)
{
  int h218dcmN = 2147483647;
  int HbFUS_0A = -19238782;
  int zZFBYy9X = -2147483648;
  int hb1KSdL5 = -1475166141;
  transparent_crc(hb1KSdL5, "hb1KSdL5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (zZFBYy9X)
  {
    h218dcmN = (hb1KSdL5++) && HbFUS_0A;
    zZFBYy9X = HbFUS_0A;
  }
  transparent_crc(zZFBYy9X, "zZFBYy9X", 1);
  transparent_crc(HbFUS_0A, "HbFUS_0A", 1);
  transparent_crc(h218dcmN, "h218dcmN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (ui2 == 0) ? (1) : (ui1 / ui2);
}

int g_31;
long f0;
long f1;
int g_65[2][8][2] = {{{}, {}, {}, {0, 1}}};
int g_72;
void func_57(void)
{
  char WN7vVCy0 = (signed char)50;
  int uq41VgUK = -19830143;
  int HReEUKIo = 761228143;
  int a4KV2GDC = 2147483647;
  int *l_64 = &g_65[1][2][1];
  g_72 = safe_15(safe_56(1, f0), *l_64);
  if (uq41VgUK > (-1))
  {
    int j;
    uq41VgUK = (j = 0);
    for (; j < 5; j++)
      L1:
    if (!HReEUKIo)
      goto L1;


    WN7vVCy0 = a4KV2GDC;
  }
  else
    HReEUKIo = 0;
  transparent_crc(a4KV2GDC, "a4KV2GDC", 1);
  transparent_crc(HReEUKIo, "HReEUKIo", 1);
  transparent_crc(uq41VgUK, "uq41VgUK", 1);
  transparent_crc(WN7vVCy0, "WN7vVCy0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *l_64 &= 1;
}

unsigned g_208;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
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
  return 0;
}

