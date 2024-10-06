#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
unsigned a;
unsigned e;
struct S0
{
  int f1;
  int f8;
} c = {4, 6};
int b;
int f;
int g;
int h;
int i;
int j;
int l;
int p;
short d;
short o = -7;
char k;
char n = 5;
unsigned fn1(int p1, int p2)
{
  int  sHO4kx5P = -2147483648;
  int * INOyEVxp = &sHO4kx5P;
  int ** M9ZnvabA = &INOyEVxp;
  short qtRDFS_l = (short)32202;
  unsigned Bnz_8G3U = 2544314121U;
  int  eYPugvhJ = -558502959;
  int * emv9rpw4 = &eYPugvhJ;
  transparent_crc(Bnz_8G3U, "Bnz_8G3U", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (qtRDFS_l > (++Bnz_8G3U))
    *M9ZnvabA = emv9rpw4;
  transparent_crc(qtRDFS_l, "qtRDFS_l", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return ((p2 >= 2) || (p1 >> p2)) ? (p1) : (p1 << p2);
}

static short fn2(struct S0 p1)
{
  int *q = 0;
  int r = 7;
  if (!a)
  {
    c.f1 = 1;
    for (; c.f1; c.f1--)
    {
      if (fn1(10 != 0, p1.f8))
      {
        short s = 9 << ((~o) % (d ^ n));
        int t = s >> (h % (~d));
        p = r;
        r = (s | (p * (d && 9))) | t;
        int u = i & c.f1;
        unsigned v = ~((~(u & h)) | ((~(8 >> c.f1)) & i));
        int w = v;
        if (u < 9)
        {
          w = c.f1;
        }
        if ((i > h) && u)
        {
          printf("%d\n", c.f1);
          continue;
        }
        c.f1 = w;
        if (!p)
        {
          continue;
        }
        transparent_crc(s, "s", 1);
        transparent_crc(t, "t", 1);
        transparent_crc(u, "u", 1);
        transparent_crc(v, "v", 1);
        transparent_crc(w, "w", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
        return 0;
      }
    }

    for (;;)
    {
      *q = 0;
    }

  }
  return 0;
}

static void fn3()
{
  fn2(c);
  l = c.f1 < b;
  if (l)
  {
    L1:
    e = l | ((j / e) % (~f));

    j = (f - (4 % k)) < ((((c.f1 / e) / b) - j) - 1);
    if (l)
    {
      printf("%d\n", b);
      goto L1;
    }
    int m[245];
    g = m[2];
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn3();
  printf("%d\n", c.f1);
  return 0;
}

