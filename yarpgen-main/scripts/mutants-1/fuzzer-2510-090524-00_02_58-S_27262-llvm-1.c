#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet

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
  int  DEjfIGqB = 2147483647;
  int * abLlhmHz = &DEjfIGqB;
  char rZloSaDi = (signed char)127;
  transparent_crc(rZloSaDi, "rZloSaDi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; rZloSaDi > (-27); rZloSaDi--)
  {
    *abLlhmHz ^= rZloSaDi;
    *abLlhmHz ^= 1;
  }

  c = (c >> 8) ^ a[c ^ (p1 & 5)];
}

void fn2(long long p1)
{
  int HPYN3OvL = 187695436;
  int UEa34IX0 = 1633417525;
  int b = p1;
  c = ((c >> 8) ^ (a[c ^ (b & 5)] >> 8)) ^ a[(c ^ 5) & 5];
  while (UEa34IX0)
    HPYN3OvL = 0;

  c = (c >> 8) ^ a[(c ^ 5) & 5];
  fn1(p1 >> 4);
  fn1(p1 >> 2);
  fn1(p1 >> 40);
  transparent_crc(UEa34IX0, "UEa34IX0", 1);
  transparent_crc(HPYN3OvL, "HPYN3OvL", 1);
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
  fn4();
  printf("%d\n", e);
  return 0;
}

