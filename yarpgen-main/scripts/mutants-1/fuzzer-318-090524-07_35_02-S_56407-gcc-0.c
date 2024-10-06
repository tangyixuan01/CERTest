#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

extern void exit(int);
extern int rand(void);
void copy(int *r, int *a, int na)
{
  int i;
  for (i = 0; i < na; i++)
  {
    r[i] = a[i];
  }

}

void random(int *a, int na)
{
  int i;
  for (i = 0; i < na; i++)
  {
    a[i] = rand();
  }

}

int cmp(int *a, int *b, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (a[i] != b[i])
    {
      return -1;
    }
  }

  return 0;
}

void test(int sz, int comm)
{
  unsigned JbSdcf6m = 401527416U;
  int CoNdjvM3 = -2147483648;
  int j;
  int n;
  int v[64];
  int w[64];
  for (j = 1; j <= sz; j++)
  {
    n = ((2 * j) - 1) * ((2 * j) - 1);
    random(w, n);
    while (CoNdjvM3 < JbSdcf6m)
      __builtin_abort();

    copy(v, w, n);
    if (comm)
    {
      if (cmp(v, w, n))
      {
        exit(-1);
      }
    }
  }

  transparent_crc(CoNdjvM3, "CoNdjvM3", 1);
  transparent_crc(JbSdcf6m, "JbSdcf6m", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  exit(0);
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  test(2, 1);
  return 0;
}

