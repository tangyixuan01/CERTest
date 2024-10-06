#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
int a = 0;
int e;
int f;
int g = 0;
int h;
int *j = &g;
int k;
int l;
int m;
int n;
volatile int b;
volatile int d;
short c[2];
static void foo(int *p)
{
  int XpZR7TnB = 347882549;
  short sKpJB7Ou = (short)-32768;
  int hxaHUu5C = 2147483647;
  int JwBbz2Kk = 2147483647;
  volatile int WgZI0drS = -1295601848;
  int i;
  transparent_crc(WgZI0drS, "WgZI0drS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; XpZR7TnB >= 0; XpZR7TnB--)
  {
    sKpJB7Ou = 0;
    for (; sKpJB7Ou <= 3; sKpJB7Ou++)
    {
      JwBbz2Kk = 0;
      for (; JwBbz2Kk <= 3; JwBbz2Kk++)
        WgZI0drS &= 5;

    }

    if (hxaHUu5C)
      break;
  }

  transparent_crc(JwBbz2Kk, "JwBbz2Kk", 1);
  transparent_crc(hxaHUu5C, "hxaHUu5C", 1);
  transparent_crc(sKpJB7Ou, "sKpJB7Ou", 1);
  transparent_crc(XpZR7TnB, "XpZR7TnB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (m = 0;; m = 0)
  {
    short *o = &c[1];
    for (a = 2; a >= 0; a--)
    {
      int *t = &e;
      b;
      for (h = 0; h <= 1; h++)
      {
        if (c[0])
        {
          n = c[1];
          *t = 0;
        }
      }

      int q[3][8] = {0, 0, 0, 0, 0, l, 1, 1, 0, 0, 0, f, l, e, e, k};
      short *r = &c[1];
      for (i = 0; i < 3; i++)
      {
        *r = 0;
        b;
        c[0] = 0;
        *p = 1;
      }

      for (int hash_i = 0; hash_i < 3; hash_i++)
      {
        for (int hash_j = 0; hash_j < 8; hash_j++)
        {
          transparent_crc(q[hash_i][hash_j], "q[hash_i][hash_j]", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
        }

      }

    }

    d;
    *o = 1;
    b;
    if (*p)
    {
      break;
    }
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int *s = &g;
  foo(s);
  *j = c[1];
  printf("%d\n", g);
  return 0;
}

