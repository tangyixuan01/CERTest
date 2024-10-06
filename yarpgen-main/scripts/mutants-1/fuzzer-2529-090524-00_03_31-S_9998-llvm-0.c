#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
struct S0
{
  signed f0 : 1;
};
struct S0 g_122 = {1};
unsigned g_626;
int func_55(int p_60)
{
  int dwt8u5J0 = -2147483648;
  int  bSEDtmNo = 1355351942;
  int * q4ndOwHk = &bSEDtmNo;
  int ** MG7VTB1R = &q4ndOwHk;
  int Imi4zH1Q = 2147483647;
  int obJBt8Xc = 1813866545;
  int D9fkb1A8 = -2147483648;
  int  sDIUel3_ = -2147483648;
  int * oRahzB4Q = &sDIUel3_;
  int  W7IDn3YS = -1304574629;
  int * QEhtIHKL = &W7IDn3YS;
  int  f_ZBsb0K = -2147483648;
  int * Ygf39dGP = &f_ZBsb0K;
  unsigned long l_373 = 0x6546E4C6CD30E57BLL;
  if (g_122.f0 > l_373)
  {
    p_60 = 1;
    for (; D9fkb1A8 < 1; D9fkb1A8++)
    {
      MG7VTB1R = &Ygf39dGP;
      for (; obJBt8Xc < 1; obJBt8Xc++)
      {
        int *i = &Imi4zH1Q;
        *MG7VTB1R = oRahzB4Q;
        QEhtIHKL = 0;
        *i = 0;
        if (Ygf39dGP != (&dwt8u5J0))
          __builtin_abort();
      }

    }

  }
  transparent_crc(l_373, "l_373", 1);
  transparent_crc(D9fkb1A8, "D9fkb1A8", 1);
  transparent_crc(obJBt8Xc, "obJBt8Xc", 1);
  transparent_crc(Imi4zH1Q, "Imi4zH1Q", 1);
  transparent_crc(dwt8u5J0, "dwt8u5J0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p_60;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  g_626 = func_55(0);
  printf("%u\n", g_626);
  return 0;
}

