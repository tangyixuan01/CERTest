#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a;
int c;
int d;
int e;
long b;
int fn1(short p1, int p2)
{
  long int ySaXnbzv = 9223372036854775807LL;
  long int _FsX3CeR = -9223372036854775807LL;
  unsigned short rqM9vDbf = (unsigned short)0;
  transparent_crc(rqM9vDbf, "rqM9vDbf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((rqM9vDbf > _FsX3CeR) ^ (1 + (_FsX3CeR < 0)))
    ySaXnbzv = 0;
  transparent_crc(_FsX3CeR, "_FsX3CeR", 1);
  transparent_crc(ySaXnbzv, "ySaXnbzv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (p2 == 0) || (p1 && (p2 == p1));
}

void fn2(int p)
{
  e = fn1(p ^ 1, p);
  c = e || c;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  for (a = -1; a > (-25); --a)
  {
    int f = a;
    unsigned int g = f;
    d = g != b;
    fn2(f);
    transparent_crc(f, "f", 1);
    transparent_crc(g, "g", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  return 0;
}

