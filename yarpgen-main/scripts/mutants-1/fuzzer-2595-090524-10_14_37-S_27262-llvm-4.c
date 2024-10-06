#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet -> insert-switch-snippet -> insert-while-snippet -> insert-assignment-snippet

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
  int aXEYD0Fy = 2147483647;
  int  gRt89xUZ = -672238970;
  int * jogs5yQ1 = &gRt89xUZ;
  int  WdOQEP40 = -288790384;
  int * L7YzMPvQ = &WdOQEP40;
  int jwJKsWTh = 1263536063;
  int Rp0nrVlc = 2147483647;
  for (; jwJKsWTh < 6; ++jwJKsWTh)
  {
    Rp0nrVlc = 8;
    while (1)
      *L7YzMPvQ = (*jogs5yQ1 = 0);

    for (; Rp0nrVlc < 0; Rp0nrVlc--)
      ;

    aXEYD0Fy += 4;
  }

  transparent_crc(Rp0nrVlc, "Rp0nrVlc", 1);
  transparent_crc(jwJKsWTh, "jwJKsWTh", 1);
  transparent_crc(aXEYD0Fy, "aXEYD0Fy", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = (c >> 8) ^ a[c ^ (p1 & 5)];
}

void fn2(long long p1)
{
  int  UfXNeZoJ = -2147483648;
  int * UrFgtX_n = &UfXNeZoJ;
  unsigned char ZWiVN1IL = (unsigned char)6;
  int b = p1;
  c = ((c >> 8) ^ (a[c ^ (b & 5)] >> 8)) ^ a[(c ^ 5) & 5];
  c = (c >> 8) ^ a[(c ^ 5) & 5];
  fn1(p1 >> 4);
  switch (ZWiVN1IL)
  {
    case 0x95:
      *UrFgtX_n = ZWiVN1IL - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *UrFgtX_n = ZWiVN1IL - 0x80;
      break;

    default:
      *UrFgtX_n = 0;
      break;

  }

  fn1(p1 >> 2);
  fn1(p1 >> 40);
  transparent_crc(ZWiVN1IL, "ZWiVN1IL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = (c >> 8) ^ a[(c ^ 6) & 5];
}

void fn3(long long p1, int p3)
{
  fn2(p1);
  if (p3)
  {
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
  int  E9jlLi7J = 1439980327;
  int * YSWiJIh_ = &E9jlLi7J;
  unsigned char I9DBgv5i = (unsigned char)255;
  fn4();
  printf("%d\n", e);
  switch (I9DBgv5i)
  {
    case 0x95:
      *YSWiJIh_ = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *YSWiJIh_ = 0x00;
      break;

    default:
      *YSWiJIh_ = 0x05;
      break;

  }

  transparent_crc(I9DBgv5i, "I9DBgv5i", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

