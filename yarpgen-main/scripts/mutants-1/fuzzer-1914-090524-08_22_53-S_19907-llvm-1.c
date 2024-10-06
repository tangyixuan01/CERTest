#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-assignment-snippet

int a;
int b;
int c;
int d = 1;
int e;
int f = 1;
void fn1()
{
  a = 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * w84cHlxo = &f;
  int XMKhE3BL = 47587013;
  unsigned Rtw60Nxf = 0U;
  unsigned nWy4AM2I = 4294967295U;
  unsigned t8lfq_iT = 0U;
  fn1();
  lbl:
  e || (b = 0);

  if (f)
  {
    for (Rtw60Nxf = 0; Rtw60Nxf < 2; Rtw60Nxf++)
      for (t8lfq_iT = 0; t8lfq_iT < 2; t8lfq_iT++)
      if ((++nWy4AM2I) < Rtw60Nxf)
      __builtin_abort();


    d = 0;
  }
  *w84cHlxo = XMKhE3BL;
  if (a)
  {
    c = a;
    f = 0;
    a = 0;
    goto lbl;
  }
  if (c != 1)
  {
    __builtin_abort();
  }
  transparent_crc(t8lfq_iT, "t8lfq_iT", 1);
  transparent_crc(nWy4AM2I, "nWy4AM2I", 1);
  transparent_crc(Rtw60Nxf, "Rtw60Nxf", 1);
  transparent_crc(XMKhE3BL, "XMKhE3BL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

