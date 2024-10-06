#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
union 
{
  short a;
  long b;
} c;
short *d = &c.a;
int e = 0;
long *f = &c.b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Cx_5QTMk = -2147483648;
  int gaVd64Zw = 1789298602;
  int qJv5wm_a = 2147483647;
  int ecVfxEhu = 1339205584;
  for (; e <= 1; e++)
  {
    while (1)
    {
      int f = 2;
      int g = 1;
      int h = 126;
      int *i = &h;
      (&gaVd64Zw) == i;
      L1:
      L2:
      if (!h)
        goto L1;


      if (!f)
      {
        ecVfxEhu = (g << h) || (ecVfxEhu << 3);
        goto L2;
      }
      qJv5wm_a = Cx_5QTMk;
      f = (h = (Cx_5QTMk = g));
      g = qJv5wm_a;
      if (qJv5wm_a)
        break;
      goto L2;
    }

    *f = 0;
    ++(*d);
  }

  transparent_crc(ecVfxEhu, "ecVfxEhu", 1);
  transparent_crc(qJv5wm_a, "qJv5wm_a", 1);
  transparent_crc(gaVd64Zw, "gaVd64Zw", 1);
  transparent_crc(Cx_5QTMk, "Cx_5QTMk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", c.a);
}

