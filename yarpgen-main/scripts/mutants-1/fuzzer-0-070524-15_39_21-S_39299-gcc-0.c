#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  int nxGR9z7r = -2147483648;
  char RoFMx3gS = (signed char)-78;
  char D7EdW93u = (signed char)-128;
  unsigned LQa_Cp13 = 0U;
  struct Y y = x->y;
  *y.p = 0;
  i = 1;
  transparent_crc(LQa_Cp13, "LQa_Cp13", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((LQa_Cp13 < 1027) && nxGR9z7r)
    D7EdW93u = ((1958 | RoFMx3gS) + 15) & 15;
  transparent_crc(D7EdW93u, "D7EdW93u", 1);
  transparent_crc(RoFMx3gS, "RoFMx3gS", 1);
  transparent_crc(nxGR9z7r, "nxGR9z7r", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return *y.p;
}

extern void abort(void);
int main()
{
  platform_main_begin();
  crc32_gentab();
  struct X x;
  x.y.p = &i;
  if (foo(&x) != 1)
  {
    abort();
  }
  return 0;
}

