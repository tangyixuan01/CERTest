#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-if-snippet -> insert-switch-snippet

int printf(const char *, ...);
struct S0
{
  long f2;
  int f3;
  int f4;
  int f5;
};
struct S1
{
  char f0;
} a;
struct S2
{
  int f2;
  int f3;
  struct S0 f4;
  struct S1 f5;
} b;
int i;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int EIRNVHbv = -2147483648;
  int iazScobC = -1585630165;
  int rSOicb0g = 1030461449;
  volatile char a05OM86y = (signed char)-90;
  char VOh7R1_Z = (signed char)53;
  int LQmauUNI = 698975352;
  int FW7Pl3dT = -2147483648;
  int Mn_ugpR0 = 2073242931;
  struct S2 c = {1, 1, {1, 1, 1, 1}, {1}};
  if (FW7Pl3dT)
  {
    int *n = &LQmauUNI;
    for (; Mn_ugpR0 < 9; Mn_ugpR0++)
      *n = 1;

    if ((VOh7R1_Z) ? (rSOicb0g % VOh7R1_Z) : (0))
      a05OM86y;
  }
  b = c;
  i = c.f4.f5;
  a = b.f5;
  switch (EIRNVHbv)
  {
    case 5:
      iazScobC = 1;
      break;

    case 6:
      iazScobC = 2;
      break;

    case 7:
      iazScobC = 3;
      break;

  }

  printf("%d\n", a.f0);
  transparent_crc(Mn_ugpR0, "Mn_ugpR0", 1);
  transparent_crc(FW7Pl3dT, "FW7Pl3dT", 1);
  transparent_crc(LQmauUNI, "LQmauUNI", 1);
  transparent_crc(VOh7R1_Z, "VOh7R1_Z", 1);
  transparent_crc(a05OM86y, "a05OM86y", 1);
  transparent_crc(rSOicb0g, "rSOicb0g", 1);
  transparent_crc(iazScobC, "iazScobC", 1);
  transparent_crc(EIRNVHbv, "EIRNVHbv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

