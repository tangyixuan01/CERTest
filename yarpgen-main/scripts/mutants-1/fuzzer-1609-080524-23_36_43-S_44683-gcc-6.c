#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-if-snippet -> insert-assignment-snippet -> insert-while-snippet -> insert-while-snippet -> insert-assignment-snippet -> insert-switch-snippet

int copysign_bug(double x)
{
  short DN_ORUAs = (short)30469;
  long DLTa8zMh = 9223372036854775807LL;
  int Plvx4sYO = -2084357643;
  long k5pijVyC = -8030049537304054786LL;
  int Y8UCDWXi = -2147483648;
  int ZS0fKARk = 1765476893;
  char fO_LBCET = (signed char)-128;
  char WCuZMVed = (signed char)-58;
  short Q7tslCfS = (short)32767;
  transparent_crc(Q7tslCfS, "Q7tslCfS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  fO_LBCET = (~Q7tslCfS) - WCuZMVed;
  transparent_crc(WCuZMVed, "WCuZMVed", 1);
  transparent_crc(fO_LBCET, "fO_LBCET", 1);
  transparent_crc(ZS0fKARk, "ZS0fKARk", 1);
  transparent_crc(Y8UCDWXi, "Y8UCDWXi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    int h = -1;
    L2:
    {
      int j = 0;
      L1:
      DLTa8zMh = DN_ORUAs ^ (h | (j & k5pijVyC));

      Plvx4sYO = Plvx4sYO / (~(3 | (~DLTa8zMh)));
      if (DLTa8zMh)
        break;
    }

    h = 0;
  }

  transparent_crc(k5pijVyC, "k5pijVyC", 1);
  transparent_crc(Plvx4sYO, "Plvx4sYO", 1);
  transparent_crc(DLTa8zMh, "DLTa8zMh", 1);
  transparent_crc(DN_ORUAs, "DN_ORUAs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((x * 0.5) == x)
  {
    return 1;
  }
  else
  {
    if (copysign(1.0, x) < 0.0)
    {
      return 2;
      while (ZS0fKARk)
        Y8UCDWXi = 0;

    }
    else
    {
      return 3;
    }
  }
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int wg26rGde = -2147483648;
  unsigned int d96kSTCP = 4294967295U;
  int  DTR_EzM7 = -2147483648;
  int * vuxcXAk1 = &DTR_EzM7;
  int  zh_c7Kbf = -2147483648;
  d96kSTCP = (1 < (~d96kSTCP)) ? (1) : (~d96kSTCP);
  int * o2NrQDqc = &zh_c7Kbf;
  switch (wg26rGde)
    case 111:
    case 222:
    case 44:
    return 0;




  int aGui3lhE = -2147483648;
  int CMF4qL2p = 482837779;
  for (CMF4qL2p = 0; CMF4qL2p;)
    ;

  double x;
  x = -0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  x = 0.0;
  if (o2NrQDqc != vuxcXAk1)
    aGui3lhE = 1;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  transparent_crc(CMF4qL2p, "CMF4qL2p", 1);
  transparent_crc(aGui3lhE, "aGui3lhE", 1);
  transparent_crc(d96kSTCP, "d96kSTCP", 1);
  transparent_crc(wg26rGde, "wg26rGde", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

