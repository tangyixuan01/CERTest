#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet -> insert-if-snippet -> insert-if-snippet -> insert-for-snippet

int printf(const char *, ...);
short safe_15(short si1, short si2)
{
  int NqUpB4C5 = 2147483647;
  int UdxJwBNv = 1955566241;
  char tHQJlcyS = (signed char)76;
  int JgsxAOSk = 1305844423;
  int UfKa9MO7 = 2082647073;
  int Sy2oa38C = 242382064;
  int T3rDgJfK = 1765443624;
  int  Oigm2u6G = -843229982;
  int * Rbm0BAJ5 = &Oigm2u6G;
  int ** xqAZOGyr = &Rbm0BAJ5;
  short PXCtU32R = (short)3612;
  unsigned wlFkqE_r = 3064602381U;
  int  VY4j8ms9 = 2147483647;
  int * VS2YGN0v = &VY4j8ms9;
  const long int w2N9ozBy = -5103303921810855614LL;
  for (; T3rDgJfK < 1; T3rDgJfK++)
  {
    UdxJwBNv = 0;
    JgsxAOSk = UfKa9MO7 || (NqUpB4C5 + 1);
    tHQJlcyS = 1 - UdxJwBNv;
    Sy2oa38C = ((-3) - tHQJlcyS) - JgsxAOSk;
    if (Sy2oa38C & 1)
      return 0;
  }

  int FgDeuW7V = 1289311366;
  int  VaHCeDsX = -408013612;
  int * urVnPcmX = &VaHCeDsX;
  unsigned char iMp9N5tE = (unsigned char)255;
  switch (iMp9N5tE)
  {
    case 0x95:
      *urVnPcmX = iMp9N5tE - 0x91;
      break;

    FgDeuW7V = 0 < (((-w2N9ozBy) + 500849970701012771) + ((unsigned long) (-w2N9ozBy)));
    case 0x80:

    case 0x81:

    case 0x82:
      *urVnPcmX = iMp9N5tE - 0x80;
      break;

    if (PXCtU32R > (++wlFkqE_r))
      *xqAZOGyr = VS2YGN0v;
    default:
      *urVnPcmX = 0;
      break;

  }

  transparent_crc(iMp9N5tE, "iMp9N5tE", 1);
  transparent_crc(FgDeuW7V, "FgDeuW7V", 1);
  transparent_crc(w2N9ozBy, "w2N9ozBy", 1);
  transparent_crc(wlFkqE_r, "wlFkqE_r", 1);
  transparent_crc(PXCtU32R, "PXCtU32R", 1);
  transparent_crc(T3rDgJfK, "T3rDgJfK", 1);
  transparent_crc(Sy2oa38C, "Sy2oa38C", 1);
  transparent_crc(UfKa9MO7, "UfKa9MO7", 1);
  transparent_crc(JgsxAOSk, "JgsxAOSk", 1);
  transparent_crc(tHQJlcyS, "tHQJlcyS", 1);
  transparent_crc(UdxJwBNv, "UdxJwBNv", 1);
  transparent_crc(NqUpB4C5, "NqUpB4C5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
  long  amGvAl4O = 8113914392917596356LL;
  long * AzQGfdj4 = &amGvAl4O;
  int W7e3Gjus = 2147483647;
  int *l_64 = &g_65[1][2][1];
  g_72 = safe_15(safe_56(1, f0), *l_64);
  if (W7e3Gjus)
    *AzQGfdj4 = 4073709551611;
  transparent_crc(W7e3Gjus, "W7e3Gjus", 1);
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

