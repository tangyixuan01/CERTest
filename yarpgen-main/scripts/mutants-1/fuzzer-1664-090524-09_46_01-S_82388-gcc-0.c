#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

struct A
{
  int b;
  int c;
  int d;
} e;
struct A g()
{
  struct A h[30] = {{0, 0, 0}};
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

