#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-for-snippet -> insert-switch-snippet

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
  int  juBzR08v = 2147483647;
  int * _GuP9O7r = &juBzR08v;
  unsigned char QK6n91qJ = (unsigned char)36;
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
  switch (QK6n91qJ)
  {
    case 0x95:
      *_GuP9O7r = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *_GuP9O7r = 0x00;
      break;

    default:
      *_GuP9O7r = 0x05;
      break;

  }

  transparent_crc(D7EdW93u, "D7EdW93u", 1);
  transparent_crc(RoFMx3gS, "RoFMx3gS", 1);
  transparent_crc(nxGR9z7r, "nxGR9z7r", 1);
  transparent_crc(QK6n91qJ, "QK6n91qJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return *y.p;
}

extern void abort(void);
int main()
{
  platform_main_begin();
  crc32_gentab();
  int dKiCaEHk = -1716733293;
  struct X x;
  x.y.p = &i;
  if (foo(&x) != 1)
  {
    abort();
    for (; dKiCaEHk > 5; dKiCaEHk = 8)
      ;

  }
  transparent_crc(dKiCaEHk, "dKiCaEHk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

