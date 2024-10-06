#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int *a[2];
int *b;
int **c = &b;
void f()
{
  int d;
  int e[1][2];
  for (d = 0; d < 2; d++)
  {
    a[d] = &e[0][1];
  }

  *c = a[1];
  if (!b)
  {
    __builtin_abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int vlohu5_C = 415038145;
  f();
  transparent_crc(vlohu5_C, "vlohu5_C", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    int m = vlohu5_C;
    while (m)
      m /= 2;

    break;
  }

  return 0;
}

