#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet -> insert-if-snippet -> insert-for-snippet

struct X
{
  long l1;
  struct Y
  {
    long l2;
    int *p;
  } y;
};
int i;
int foo(struct X *x)
{
  struct Y y = x->y;
  *y.p = 0;
  i = 1;
  return *y.p;
}

extern void abort(void);
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned YrNKHTxt = 0U;
  int bLhmyklZ = 2147483647;
  unsigned G8q2xSZw = 612008019U;
  int tKDMZFy2 = -196079780;
  int nYfS4oLN = -2147483648;
  long d8U7024T = -8184429288621569126LL;
  int HRBXDO49 = -2147483648;
  long KRZaxcmb = -1129525104266630136LL;
  int XRW89Y5d = 1579976704;
  int DPZI8vKw = -2147483648;
  struct X x;
  x.y.p = &i;
  if (foo(&x) != 1)
  {
    abort();
    while (KRZaxcmb != 0)
    {
      if (*((char *) KRZaxcmb))
        break;
    }

    for (int g = 2; g <= bLhmyklZ; g++)
    {
      YrNKHTxt += 5 - g;
      G8q2xSZw += g + 4;
    }

  }
  transparent_crc(DPZI8vKw, "DPZI8vKw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (DPZI8vKw = 0; DPZI8vKw < 16; DPZI8vKw++)
    XRW89Y5d ^= -1;

  transparent_crc(XRW89Y5d, "XRW89Y5d", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (d8U7024T)
    if (HRBXDO49)
  {
    nYfS4oLN = 0;
    for (; nYfS4oLN; nYfS4oLN++)
      tKDMZFy2 = 0;

  }
  transparent_crc(KRZaxcmb, "KRZaxcmb", 1);
  transparent_crc(HRBXDO49, "HRBXDO49", 1);
  transparent_crc(d8U7024T, "d8U7024T", 1);
  transparent_crc(nYfS4oLN, "nYfS4oLN", 1);
  transparent_crc(tKDMZFy2, "tKDMZFy2", 1);
  transparent_crc(G8q2xSZw, "G8q2xSZw", 1);
  transparent_crc(bLhmyklZ, "bLhmyklZ", 1);
  transparent_crc(YrNKHTxt, "YrNKHTxt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

