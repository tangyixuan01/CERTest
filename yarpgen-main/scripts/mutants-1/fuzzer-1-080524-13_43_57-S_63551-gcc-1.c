#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet

union U
{
  unsigned int f0;
  int f1;
};
int a;
int d;
void fn1(union U p)
{
  int pJdzylw4 = -346815685;
  int K_MBfFO9 = -2147483648;
  transparent_crc(K_MBfFO9, "K_MBfFO9", 1);
  transparent_crc(pJdzylw4, "pJdzylw4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p.f1 <= 0)
  {
    if (a)
    {
      d = 0;
      while (pJdzylw4)
        K_MBfFO9++;

    }
  }
}

void fn2()
{
  d = 0;
  union U b = {4294967286};
  fn1(b);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int wpeAcaKv = -120778488;
  int vxNkbTBM = -2147483648;
  for (wpeAcaKv = 0; wpeAcaKv < 2; wpeAcaKv++)
    for (; vxNkbTBM; vxNkbTBM++)
    ;


  fn2();
  transparent_crc(vxNkbTBM, "vxNkbTBM", 1);
  transparent_crc(wpeAcaKv, "wpeAcaKv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

