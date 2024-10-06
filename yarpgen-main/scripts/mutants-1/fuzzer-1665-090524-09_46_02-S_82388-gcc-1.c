#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-for-snippet

struct A
{
  int b;
  int c;
  int d;
} e;
struct A g()
{
  int YDRsaN46 = 1817318576;
  char LKUB_I02 = (signed char)-128;
  int dxYzoHlJ = -211207963;
  short bZREyegF = (short)-32768;
  char E3vKj_ct = (signed char)127;
  int CaGH5_xn = 1080604640;
  char IT4HKVPt = (signed char)-128;
  int Tx5oVc0S = 1184958181;
  for (YDRsaN46 = 0; YDRsaN46 < 8; YDRsaN46++)
  {
    char ap = (E3vKj_ct % Tx5oVc0S) + bZREyegF;
    unsigned aq = (~0x1F) & (LKUB_I02 % ((7 * (~ap)) ^ CaGH5_xn));
    if ((aq < 1027) && dxYzoHlJ)
      E3vKj_ct = ((1958 | IT4HKVPt) + 15) & 15;
  }

  struct A h[30] = {{0, 0, 0}};
  transparent_crc(Tx5oVc0S, "Tx5oVc0S", 1);
  transparent_crc(IT4HKVPt, "IT4HKVPt", 1);
  transparent_crc(CaGH5_xn, "CaGH5_xn", 1);
  transparent_crc(E3vKj_ct, "E3vKj_ct", 1);
  transparent_crc(bZREyegF, "bZREyegF", 1);
  transparent_crc(dxYzoHlJ, "dxYzoHlJ", 1);
  transparent_crc(LKUB_I02, "LKUB_I02", 1);
  transparent_crc(YDRsaN46, "YDRsaN46", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return h[29];
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned n1uB7PLT = 1900990454U;
  unsigned N02TX9Cg = 752735886U;
  unsigned BWJ2SpAE = 324920369U;
  for (n1uB7PLT = 0; n1uB7PLT < 10; n1uB7PLT++)
  {
    for (BWJ2SpAE = 0; BWJ2SpAE < 2; BWJ2SpAE++)
    {
      N02TX9Cg++;
      if (N02TX9Cg < n1uB7PLT)
      {
        return 123;
      }
    }

  }

  e = g();
  transparent_crc(BWJ2SpAE, "BWJ2SpAE", 1);
  transparent_crc(N02TX9Cg, "N02TX9Cg", 1);
  transparent_crc(n1uB7PLT, "n1uB7PLT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return e.b;
}

