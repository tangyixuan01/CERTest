#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

static int *b;
int a;
int **c = &b;
int **e = &b;
int *f[2];
int g = 1;
char d;
void fn1()
{
  int *i = 0;
  ((&b) == (&f[1])) > a;
  for (; d < 1; d++)
  {
    *c = &g;
    if (*b)
    {
      return;
    }
  }

  *i = 0;
}

void fn2()
{
  int k = 0;
  *e = &k;
  fn1();
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int bW6HXdoT = -1533397274;
  int * dzhvpl5g = &g;
  fn2();
  transparent_crc(bW6HXdoT, "bW6HXdoT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!(dzhvpl5g || (dzhvpl5g == (&bW6HXdoT))))
    __builtin_abort();
  return 0;
}

