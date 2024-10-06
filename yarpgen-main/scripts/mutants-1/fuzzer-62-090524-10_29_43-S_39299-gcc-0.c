#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  int xYJUzbTu = -535154458;
  int AGuwNr2I = 57703696;
  int EOQW2RVq = 2147483647;
  struct X x;
  x.y.p = &i;
  if (foo(&x) != 1)
  {
    EOQW2RVq = AGuwNr2I > (2147483647 - xYJUzbTu);
    abort();
  }
  transparent_crc(EOQW2RVq, "EOQW2RVq", 1);
  transparent_crc(AGuwNr2I, "AGuwNr2I", 1);
  transparent_crc(xYJUzbTu, "xYJUzbTu", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

