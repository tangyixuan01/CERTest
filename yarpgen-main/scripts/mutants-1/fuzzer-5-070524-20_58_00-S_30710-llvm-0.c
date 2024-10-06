#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

static int *b;
int a;
int **c = &b;
int **e = &b;
int *f[2];
int g = 1;
char d;
void fn1()
{
  int pjQAKnG2 = -2147483648;
  int kZu8DGMi = 2147483647;
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

  pjQAKnG2 = (kZu8DGMi = -1);
  transparent_crc(kZu8DGMi, "kZu8DGMi", 1);
  transparent_crc(pjQAKnG2, "pjQAKnG2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
  fn2();
  return 0;
}

