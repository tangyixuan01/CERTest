#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int fn1(int b, int c)
{
  int uJWA6moN = -2147483648;
  int DH3NsoB7 = -1122561954;
  int _xHUWS4w = 1632528013;
  int aHCiq6Sk = -1845748575;
  int yS3t416V = -2147483648;
  uJWA6moN = -(((_xHUWS4w || DH3NsoB7) + yS3t416V) - aHCiq6Sk);
  transparent_crc(yS3t416V, "yS3t416V", 1);
  transparent_crc(aHCiq6Sk, "aHCiq6Sk", 1);
  transparent_crc(_xHUWS4w, "_xHUWS4w", 1);
  transparent_crc(DH3NsoB7, "DH3NsoB7", 1);
  transparent_crc(uJWA6moN, "uJWA6moN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return ((c < 0) || (c > 31)) ? (0) : (b >> c);
}

unsigned char d = 255;
int e;
int f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  for (; f < 2; f++)
  {
    e = fn1(1, d++);
  }

  printf("%d\n", e);
  return 0;
}

