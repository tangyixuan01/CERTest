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
  long ZxiduOTk = 9223372036854775807LL;
  int ZVtCKO97 = -1148493827;
  char D27angCT = (signed char)75;
  short Py5tEh8p = (short)32767;
  long xY4lM3ow = 9223372036854775807LL;
  int i;
  for (i = 0; i < n; i++)
  {
    if (a[i] != b[i])
    {
      return -1;
    }
    D27angCT = Py5tEh8p | (((xY4lM3ow < D27angCT) > ZxiduOTk) < ZVtCKO97);
  }

  transparent_crc(xY4lM3ow, "xY4lM3ow", 1);
  transparent_crc(Py5tEh8p, "Py5tEh8p", 1);
  transparent_crc(D27angCT, "D27angCT", 1);
  transparent_crc(ZVtCKO97, "ZVtCKO97", 1);
  transparent_crc(ZxiduOTk, "ZxiduOTk", 1);
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

