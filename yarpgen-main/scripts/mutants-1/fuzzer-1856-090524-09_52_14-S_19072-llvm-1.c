#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

int printf(const char *, ...);
int a[6];
short b;
volatile int c;
int d = 1;
void fn1(int p)
{
  int U2Nn5kOw = -2147483648;
  int CchrRPMx = 2147483647;
  int DFtGY0qK = 885586738;
  int VS2QAnML = -2147483648;
  transparent_crc(VS2QAnML, "VS2QAnML", 1);
  transparent_crc(DFtGY0qK, "DFtGY0qK", 1);
  transparent_crc(CchrRPMx, "CchrRPMx", 1);
  transparent_crc(U2Nn5kOw, "U2Nn5kOw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!p)
  {
    d = 0;
    for (VS2QAnML = 0; VS2QAnML < 1; VS2QAnML++)
    {
      for (CchrRPMx = 0; CchrRPMx < 1; CchrRPMx++)
        U2Nn5kOw |= (-DFtGY0qK) + CchrRPMx;

      DFtGY0qK = 0;
    }

  }
}

void fn2(void)
{
  for (b = 1; b; b++)
  {
    fn1(b);
  }

}

void fn3(void)
{
  fn2();
  int e = 0;
  int t;
  if (d)
  {
    t = (e || e) ? (0) : (e);
    c;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int oiYxvM0D = -2147483648;
  int IJMEa2p4 = -333517717;
  a[1] = 0;
  switch (oiYxvM0D)
  {
    case 5:
      IJMEa2p4 = 1;
      break;

    case 6:
      IJMEa2p4 = 2;
      break;

    case 7:
      IJMEa2p4 = 3;
      break;

  }

  fn3();
  printf("%d\n", a[a[0]]);
  transparent_crc(IJMEa2p4, "IJMEa2p4", 1);
  transparent_crc(oiYxvM0D, "oiYxvM0D", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

