#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  int XRW89Y5d = 1579976704;
  int DPZI8vKw = -2147483648;
  struct X x;
  x.y.p = &i;
  if (foo(&x) != 1)
  {
    abort();
  }
  transparent_crc(DPZI8vKw, "DPZI8vKw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (DPZI8vKw = 0; DPZI8vKw < 16; DPZI8vKw++)
    XRW89Y5d ^= -1;

  transparent_crc(XRW89Y5d, "XRW89Y5d", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

