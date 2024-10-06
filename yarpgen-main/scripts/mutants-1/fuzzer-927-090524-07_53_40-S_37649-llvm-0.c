#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int *a[2];
int *b;
int **c = &b;
void f()
{
  int rnCAWLTZ = -383661576;
  int  WrEojBR5 = 1020483688;
  int * mevhC6uH = &WrEojBR5;
  int d;
  int e[1][2];
  for (d = 0; d < 2; d++)
  {
    a[d] = &e[0][1];
  }

  if (!(mevhC6uH || (mevhC6uH == (&rnCAWLTZ))))
    __builtin_abort();
  *c = a[1];
  transparent_crc(rnCAWLTZ, "rnCAWLTZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!b)
  {
    __builtin_abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  f();
  return 0;
}

