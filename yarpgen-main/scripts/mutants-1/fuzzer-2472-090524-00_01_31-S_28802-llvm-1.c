#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

char a = 1;
char f;
char h;
char j;
char n;
int b;
int c;
int d;
int e;
int g;
int i;
int k;
int l;
int m;
int o;
int p;
int fn1(int p1)
{
  int VtrA8PwC = -2147483648;
  int crVqX7Th = 1612089372;
  int SV8xKnCF = 2147483647;
  j = (a % 5) + a;
  transparent_crc(SV8xKnCF, "SV8xKnCF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (SV8xKnCF & 1)
    return 0;
  transparent_crc(crVqX7Th, "crVqX7Th", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (VtrA8PwC)
  {
    case 5:
      crVqX7Th = 1;
      break;

    case 6:
      crVqX7Th = 2;
      break;

    case 7:
      crVqX7Th = 3;
      break;

  }

  transparent_crc(VtrA8PwC, "VtrA8PwC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int fn2(int p1, int p2)
{
  for (; p < 5; p++)
  {
    e = 5 | j;
    h = (g = f);
    int q = j && (5 ^ o);
    a = q;
    if (q || o)
    {
      int r = m = ((q % d) || m) || (q % r);
      d = b | c;
      if (i && p2)
      {
        while (n)
        {
          ;
        }

      }
      transparent_crc(r, "r", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    }
    transparent_crc(q, "q", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  return p1;
}

void fn3(int p1)
{
  L1:
  l = fn1(fn2(p1, l));

  for (; k;)
  {
    if (p1)
    {
      goto L1;
    }
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn3(0);
  fn2(0, 0);
  return 0;
}

