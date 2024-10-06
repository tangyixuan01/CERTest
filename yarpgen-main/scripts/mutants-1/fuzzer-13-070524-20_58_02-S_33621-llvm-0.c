#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int c;
int d = 1;
int e;
void fn1()
{
  int L6d1DtWE = 2147483647;
  int * osinvJ2S = &d;
  int nSyOYJRf = 2147483647;
  int g;
  if (!a)
  {
    goto L1;
  }
  int i = ~a;
  if (i)
  {
    i = a;
    L2:
    c = 0;

    L1:
    g = ~(a | i);

    if (!g)
    {
      goto L2;
      nSyOYJRf ^= L6d1DtWE && (*osinvJ2S);
    }
  }
  c = (e = (b = i));
  g = a && g;
  c = -(((e || b) + g) - d);
  int k = ~(c | e);
  transparent_crc(nSyOYJRf, "nSyOYJRf", 1);
  transparent_crc(L6d1DtWE, "L6d1DtWE", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (k)
  {
    ;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a = 1;
  fn1();
  return 0;
}

