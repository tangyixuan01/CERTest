#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
int a;
int b;
int c;
int fn1()
{
  short vYnbEWsp = (short)30338;
  short hMz_tpTd = (short)32767;
  short YNjPu0gI = (short)29600;
  unsigned JS3yuwCK = 4167232016U;
  int _kBe0d1h = 2147483647;
  int wvtxdI1O = 2147483647;
  if (c)
  {
    printf("0\n");
    while (vYnbEWsp)
    {
      if (wvtxdI1O)
        vYnbEWsp = _kBe0d1h;
      wvtxdI1O = 1;
      _kBe0d1h = (hMz_tpTd = (YNjPu0gI) ? (0) : (JS3yuwCK % YNjPu0gI));
    }

  }
  transparent_crc(wvtxdI1O, "wvtxdI1O", 1);
  transparent_crc(_kBe0d1h, "_kBe0d1h", 1);
  transparent_crc(JS3yuwCK, "JS3yuwCK", 1);
  transparent_crc(YNjPu0gI, "YNjPu0gI", 1);
  transparent_crc(hMz_tpTd, "hMz_tpTd", 1);
  transparent_crc(vYnbEWsp, "vYnbEWsp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return b;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int d = 1;
  int e = 0;
  for (; e < 128; e++)
  {
    ;
  }

  L:
  if (fn1())
  {
    d = 0;
    goto L;
  }

  if (d)
  {
    printf("0\n");
  }
  return 0;
}

