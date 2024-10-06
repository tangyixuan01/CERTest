#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

union U
{
  unsigned int f0;
  int f1;
};
int a;
int d;
void fn1(union U p)
{
  if (p.f1 <= 0)
  {
    if (a)
    {
      d = 0;
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

