#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet -> insert-if-snippet -> insert-if-snippet -> insert-if-snippet -> insert-assignment-snippet -> insert-while-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a[6];
int e;
int k;
int p;
int r;
unsigned c;
short d;
short f;
short l;
short q;
long g;
long h;
char j;
char m;
char n;
char o;
void fn1(int p1)
{
  int qUg4y5cQ = -2147483648;
  int NUVBvwYI = 2147483647;
  int bLEyYrfC = -1132014731;
  unsigned short c1li6a0k = (unsigned short)0;
  long  rQYj1TNu = -9223372036854775807LL;
  long * Gc6Ff_ZQ = &rQYj1TNu;
  int BDCfHNRq = 2147483647;
  if (BDCfHNRq)
    *Gc6Ff_ZQ = 4073709551611;
  while ((NUVBvwYI < 0) || qUg4y5cQ)
  {
    qUg4y5cQ = 0;
    for (; qUg4y5cQ < 9; qUg4y5cQ++)
      ;

  }

  int d2Nnjhrg = -2147483648;
  if ((d2Nnjhrg >= 0) && (d2Nnjhrg > 0))
    __builtin_printf("0\n");
  transparent_crc(d2Nnjhrg, "d2Nnjhrg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  bLEyYrfC &= --c1li6a0k;
  transparent_crc(BDCfHNRq, "BDCfHNRq", 1);
  transparent_crc(c1li6a0k, "c1li6a0k", 1);
  transparent_crc(bLEyYrfC, "bLEyYrfC", 1);
  transparent_crc(NUVBvwYI, "NUVBvwYI", 1);
  transparent_crc(qUg4y5cQ, "qUg4y5cQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = (c >> 8) ^ a[c ^ (p1 & 5)];
}

void fn2(long long p1)
{
  int  R7ehB4KC = -2147483648;
  int * gOcSU2Xk = &R7ehB4KC;
  unsigned char RvQf7Wsj = (unsigned char)156;
  int  gAkRDF7x = 2147483647;
  int * rhAqzlVj = &gAkRDF7x;
  unsigned char gFpQqLSC = (unsigned char)255;
  unsigned short flU4zXk6 = (unsigned short)54387;
  flU4zXk6 = (flU4zXk6 << 1) ^ 1;
  int b = p1;
  c = ((c >> 8) ^ (a[c ^ (b & 5)] >> 8)) ^ a[(c ^ 5) & 5];
  c = (c >> 8) ^ a[(c ^ 5) & 5];
  fn1(p1 >> 4);
  fn1(p1 >> 2);
  fn1(p1 >> 40);
  switch (gFpQqLSC)
  {
    case 0x95:
      *rhAqzlVj = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *rhAqzlVj = 0x00;
      break;

    default:
      *rhAqzlVj = 0x05;
      break;

    switch (RvQf7Wsj)
    {
      case 0x95:
        *gOcSU2Xk = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *gOcSU2Xk = 0x00;
        break;

      default:
        *gOcSU2Xk = 0x05;
        break;

    }

  }

  transparent_crc(flU4zXk6, "flU4zXk6", 1);
  transparent_crc(gFpQqLSC, "gFpQqLSC", 1);
  transparent_crc(RvQf7Wsj, "RvQf7Wsj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = (c >> 8) ^ a[(c ^ 6) & 5];
}

void fn3(long long p1, int p3)
{
  int pbS3R9GD = 621093466;
  fn2(p1);
  transparent_crc(pbS3R9GD, "pbS3R9GD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p3)
  {
    if ((pbS3R9GD != 2) == pbS3R9GD)
      __builtin_abort();
    printf("%d\n", 5);
  }
}

static void fn4()
{
  int s;
  int i = 0;
  int u = 1;
  char t[3];
  lbl:
  for (; i < 3; i++)
  {
    t[i] = 1;
  }


  int v;
  i = 0;
  for (; u < 20; ++u)
  {
    if (m)
    {
      goto lbl;
    }
    if (j)
    {
      s = 0;
      for (; s < 9; s++)
      {
        fn3(g, v);
      }

    }
    h = 0;
    for (; h < 3; h++)
    {
      o ^= (k &= (d--) + (n && (f == (n = l))));
      e = 0;
      for (; e < 3; e++)
      {
        if (t[h])
        {
          break;
        }
        p = q;
      }

    }

  }

  v = r;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn4();
  printf("%d\n", e);
  return 0;
}

