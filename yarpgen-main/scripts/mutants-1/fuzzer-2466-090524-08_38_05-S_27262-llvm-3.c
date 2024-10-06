#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet -> insert-assignment-snippet -> insert-switch-snippet

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
  int  bLZyHWYg = -953730628;
  int * ZlJUYW9T = &bLZyHWYg;
  int  m8SgDHOx = -2147483648;
  int * euhyTVmF = &m8SgDHOx;
  char  ASngqT13 = (signed char)-128;
  char * uBsAhWXK = &ASngqT13;
  char ** mdQvzgZY = &uBsAhWXK;
  int  clLCdP1U = 2147483647;
  int * h9BkUv3p = &clLCdP1U;
  int aOy8ng7s = 1817233986;
  *(*mdQvzgZY) = ((*h9BkUv3p) || ((ZlJUYW9T = &aOy8ng7s) == ((int *) (&euhyTVmF)))) == 0;
  transparent_crc(aOy8ng7s, "aOy8ng7s", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = (c >> 8) ^ a[c ^ (p1 & 5)];
}

void fn2(long long p1)
{
  int Dw5BbkqI = -1857552602;
  int oEV9kMiU = 1478568713;
  int xmPeNKIz = -628309207;
  int b = p1;
  c = ((c >> 8) ^ (a[c ^ (b & 5)] >> 8)) ^ a[(c ^ 5) & 5];
  c = (c >> 8) ^ a[(c ^ 5) & 5];
  fn1(p1 >> 4);
  fn1(p1 >> 2);
  fn1(p1 >> 40);
  transparent_crc(xmPeNKIz, "xmPeNKIz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; Dw5BbkqI < 1; Dw5BbkqI++)
    xmPeNKIz = ((oEV9kMiU >= 2) || (1 >> oEV9kMiU)) ? (0) : (oEV9kMiU);

  transparent_crc(oEV9kMiU, "oEV9kMiU", 1);
  transparent_crc(Dw5BbkqI, "Dw5BbkqI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = (c >> 8) ^ a[(c ^ 6) & 5];
}

void fn3(long long p1, int p3)
{
  int  KGx6zYog = -965745480;
  int * cdzHO5ZK = &KGx6zYog;
  unsigned char IkgApDdZ = (unsigned char)0;
  fn2(p1);
  transparent_crc(IkgApDdZ, "IkgApDdZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p3)
  {
    printf("%d\n", 5);
    switch (IkgApDdZ)
    {
      case 0x95:
        *cdzHO5ZK = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *cdzHO5ZK = 0x00;
        break;

      default:
        *cdzHO5ZK = 0x05;
        break;

    }

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
  int FzRdaTgO = 2147483647;
  int rDnFkguL = -40923368;
  fn4();
  switch (FzRdaTgO)
  {
    case 5:
      rDnFkguL = 1;
      break;

    case 6:
      rDnFkguL = 2;
      break;

    case 7:
      rDnFkguL = 3;
      break;

  }

  printf("%d\n", e);
  transparent_crc(rDnFkguL, "rDnFkguL", 1);
  transparent_crc(FzRdaTgO, "FzRdaTgO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

