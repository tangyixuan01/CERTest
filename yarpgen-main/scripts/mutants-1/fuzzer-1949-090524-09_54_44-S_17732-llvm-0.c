#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  int LQmauUNI = 698975352;
  int FW7Pl3dT = -2147483648;
  int Mn_ugpR0 = 2073242931;
  struct S2 c = {1, 1, {1, 1, 1, 1}, {1}};
  if (FW7Pl3dT)
  {
    int *n = &LQmauUNI;
    for (; Mn_ugpR0 < 9; Mn_ugpR0++)
      *n = 1;

  }
  b = c;
  i = c.f4.f5;
  a = b.f5;
  printf("%d\n", a.f0);
  transparent_crc(Mn_ugpR0, "Mn_ugpR0", 1);
  transparent_crc(FW7Pl3dT, "FW7Pl3dT", 1);
  transparent_crc(LQmauUNI, "LQmauUNI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

