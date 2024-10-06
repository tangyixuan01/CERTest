#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  c = (c >> 8) ^ a[c ^ (p1 & 5)];
}

void fn2(long long p1)
{
  int b = p1;
  c = ((c >> 8) ^ (a[c ^ (b & 5)] >> 8)) ^ a[(c ^ 5) & 5];
  c = (c >> 8) ^ a[(c ^ 5) & 5];
  fn1(p1 >> 4);
  fn1(p1 >> 2);
  fn1(p1 >> 40);
  c = (c >> 8) ^ a[(c ^ 6) & 5];
}

void fn3(long long p1, int p3)
{
  int dpkUanTR = 2147483647;
  int VfAWjGMF = 2147483647;
  fn2(p1);
  transparent_crc(VfAWjGMF, "VfAWjGMF", 1);
  transparent_crc(dpkUanTR, "dpkUanTR", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p3)
  {
    for (; dpkUanTR;)
      VfAWjGMF = VfAWjGMF < 1;

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

