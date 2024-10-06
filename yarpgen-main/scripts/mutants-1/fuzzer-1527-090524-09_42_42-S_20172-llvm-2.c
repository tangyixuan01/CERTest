#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet -> insert-for-snippet

int printf(const char *, ...);
int a[2];
int b = 1;
int c = 1;
int e = 1;
int f;
int g;
int h;
int n;
int o;
int r;
short d;
short q;
volatile int j;
int fn1(int p)
{
  int LRsSC3_Q = -357827706;
  int _WgtLjG6 = 2147483647;
  int VBbgz2LK = -2147483648;
  VBbgz2LK = ((_WgtLjG6 >= 0) || LRsSC3_Q) ? (0) : (_WgtLjG6);
  transparent_crc(VBbgz2LK, "VBbgz2LK", 1);
  transparent_crc(_WgtLjG6, "_WgtLjG6", 1);
  transparent_crc(LRsSC3_Q, "LRsSC3_Q", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p;
}

int fn2(unsigned short p1, int p2)
{
  int COY3jfMa = -2147483648;
  char ELf9q_Ik = (signed char)-7;
  char v5rgyTBk = (signed char)127;
  long  zaKWtbcI = -9223372036854775807LL;
  long * vdUjqnCL = &zaKWtbcI;
  int umYq38tD = 2147483647;
  if (umYq38tD)
    *vdUjqnCL = 4073709551611;
  transparent_crc(umYq38tD, "umYq38tD", 1);
  transparent_crc(v5rgyTBk, "v5rgyTBk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; ELf9q_Ik != 3; ELf9q_Ik = ELf9q_Ik + 7)
  {
    COY3jfMa = v5rgyTBk & COY3jfMa;
    if (COY3jfMa)
      break;
  }

  transparent_crc(ELf9q_Ik, "ELf9q_Ik", 1);
  transparent_crc(COY3jfMa, "COY3jfMa", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (p2 || (p1 >> 1)) ? (p1) : (p1 << 1);
}

void fn3(int p)
{
  q = fn2(e, 0);
  if (fn1(q))
  {
    r = (g = r != 1);
  }
  if (fn2(p && fn1(0), c))
  {
    c = 4;
    n = (o = (n) ? (0) : (n + 1));
    for (; o;)
    {
      (j) ? (0) : (j);
    }

    g = 0;
  }
}

int fn4()
{
  if (b)
  {
    for (;; b++)
    {
      if (fn1(1))
      {
        fn3(1);
        fn3(0);
        if ((d = c) | fn2(h, 0))
        {
          return 0;
        }
      }
      else
      {
        f = g;
        h = fn1(0);
        e = (c = 0);
      }
    }

  }
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a[0] = 1;
  fn4();
  printf("%d\n", a[d]);
  return 0;
}

