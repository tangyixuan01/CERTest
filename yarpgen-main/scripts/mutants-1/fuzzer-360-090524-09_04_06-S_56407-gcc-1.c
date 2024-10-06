#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

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
  int  morDzHGf = -1103830;
  int * Nq8B2SDu = &morDzHGf;
  unsigned char jJVnOPB8 = (unsigned char)110;
  char fgI5dvlm = (signed char)115;
  int YJ7OnBEw = -2147483648;
  int oR2DXtfJ = 2034561883;
  if (fgI5dvlm)
    YJ7OnBEw = ~((~0) / (YJ7OnBEw ^ oR2DXtfJ));
  test(2, 1);
  switch (jJVnOPB8)
  {
    case 0x95:
      *Nq8B2SDu = jJVnOPB8 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Nq8B2SDu = jJVnOPB8 - 0x80;
      break;

    default:
      *Nq8B2SDu = 0;
      break;

  }

  transparent_crc(oR2DXtfJ, "oR2DXtfJ", 1);
  transparent_crc(YJ7OnBEw, "YJ7OnBEw", 1);
  transparent_crc(fgI5dvlm, "fgI5dvlm", 1);
  transparent_crc(jJVnOPB8, "jJVnOPB8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

