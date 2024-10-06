#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
int a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int YKC86qJm = 2147483647;
  int TIyOAEKv = -1997787514;
  int fTPCqX5c = -2147483648;
  int  ztMixcEN = -415244805;
  int * i6MwTBhK = &ztMixcEN;
  for (TIyOAEKv = 24; TIyOAEKv; TIyOAEKv--)
  {
    for (YKC86qJm = 0; YKC86qJm < 6; YKC86qJm++)
      fTPCqX5c |= 1;

    *i6MwTBhK |= fTPCqX5c;
  }

  int b = ~a;
  if (b < 0)
  {
    b = a;
  }
  unsigned c = ~b;
  if (c > b)
  {
    a = (~b) || a;
  }
  printf("%d\n", a);
  transparent_crc(fTPCqX5c, "fTPCqX5c", 1);
  transparent_crc(TIyOAEKv, "TIyOAEKv", 1);
  transparent_crc(YKC86qJm, "YKC86qJm", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

