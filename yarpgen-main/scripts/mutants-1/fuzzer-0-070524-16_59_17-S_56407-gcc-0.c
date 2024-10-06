#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  long NV1H9Q5t = -9223372036854775807LL;
  int JEfogIHb = -2147483648;
  int tBWjKJ_P = -704403324;
  unsigned HL3ol1rA = 0U;
  int i;
  for (i = 0; i < n; i++)
  {
    HL3ol1rA = ~(-(JEfogIHb || (tBWjKJ_P & NV1H9Q5t)));
    if (a[i] != b[i])
    {
      return -1;
    }
  }

  transparent_crc(HL3ol1rA, "HL3ol1rA", 1);
  transparent_crc(tBWjKJ_P, "tBWjKJ_P", 1);
  transparent_crc(JEfogIHb, "JEfogIHb", 1);
  transparent_crc(NV1H9Q5t, "NV1H9Q5t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

void test(int sz, int comm)
{
  int j;
  int n;
  int v[64];
  int w[64];
  for (j = 1; j <= sz; j++)
  {
    n = ((2 * j) - 1) * ((2 * j) - 1);
    random(w, n);
    copy(v, w, n);
    if (comm)
    {
      if (cmp(v, w, n))
      {
        exit(-1);
      }
    }
  }

  exit(0);
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  test(2, 1);
  return 0;
}

