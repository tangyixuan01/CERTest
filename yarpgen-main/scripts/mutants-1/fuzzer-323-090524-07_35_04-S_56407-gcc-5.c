#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-assignment-snippet -> insert-if-snippet -> insert-if-snippet -> insert-assignment-snippet -> insert-switch-snippet

extern void exit(int);
extern int rand(void);
void copy(int *r, int *a, int na)
{
  int bM7saJVZ = 2147483647;
  int NWzQt4pG = 2147483647;
  int D52bVW8q = 901144918;
  int i;
  transparent_crc(D52bVW8q, "D52bVW8q", 1);
  transparent_crc(NWzQt4pG, "NWzQt4pG", 1);
  transparent_crc(bM7saJVZ, "bM7saJVZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < na; i++)
  {
    NWzQt4pG = (bM7saJVZ < 0) || D52bVW8q;
    r[i] = a[i];
  }

}

void random(int *a, int na)
{
  int k3fAUyKR = 1950123945;
  int zAc3thYl = 2147483647;
  int CxASgVqk = 2147483647;
  int Mz_rKQ5E = -41416114;
  int i;
  transparent_crc(Mz_rKQ5E, "Mz_rKQ5E", 1);
  transparent_crc(CxASgVqk, "CxASgVqk", 1);
  transparent_crc(zAc3thYl, "zAc3thYl", 1);
  transparent_crc(k3fAUyKR, "k3fAUyKR", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < na; i++)
  {
    a[i] = rand();
    if (CxASgVqk - 1133364270)
      zAc3thYl = ((zAc3thYl + Mz_rKQ5E) ^ ((~k3fAUyKR) / 1958)) || CxASgVqk;
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
  int  ljZTt_qw = 2147483647;
  int * EzLAWJch = &ljZTt_qw;
  unsigned char HMmoUKcl = (unsigned char)255;
  int XdkbnOWP = -2147483648;
  int EnRkCiJP = 2147483647;
  long long hUsF0tSQ = 9223372036854775807LL;
  int RTaMltUn = -178925633;
  long long d52Em6MX = -9223372036854775807LL;
  unsigned QRYV2KfO = 274016141U;
  int EIi61HG9 = 2147483647;
  test(2, 1);
  hUsF0tSQ = (-((-d52Em6MX) ^ (QRYV2KfO | EIi61HG9))) * (~(-RTaMltUn));
  transparent_crc(EIi61HG9, "EIi61HG9", 1);
  transparent_crc(QRYV2KfO, "QRYV2KfO", 1);
  transparent_crc(d52Em6MX, "d52Em6MX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (EnRkCiJP < 1)
    EnRkCiJP = XdkbnOWP;
  transparent_crc(RTaMltUn, "RTaMltUn", 1);
  transparent_crc(hUsF0tSQ, "hUsF0tSQ", 1);
  transparent_crc(EnRkCiJP, "EnRkCiJP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (HMmoUKcl)
  {
    case 0x95:
      *EzLAWJch = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *EzLAWJch = 0x00;
      break;

    default:
      *EzLAWJch = 0x05;
      break;

  }

  transparent_crc(XdkbnOWP, "XdkbnOWP", 1);
  transparent_crc(HMmoUKcl, "HMmoUKcl", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

