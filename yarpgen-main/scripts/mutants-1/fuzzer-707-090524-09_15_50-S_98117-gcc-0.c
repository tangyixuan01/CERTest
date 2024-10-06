#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a = 0;
char b = 0;
char c = 0;
short d = 0;
void e()
{
  char CPaSxsX7 = (signed char)127;
  int tHl1oEw2 = -2147483648;
  int KzPa3veB = -530943259;
  int QG62zhTC = 2147483647;
  for (; b; b++)
  {
    d = a + 8;
  }

  tHl1oEw2 = (KzPa3veB - (~QG62zhTC)) ^ CPaSxsX7;
  for (; d;)
  {
    ;
  }

  f:
  c++;

  transparent_crc(QG62zhTC, "QG62zhTC", 1);
  transparent_crc(KzPa3veB, "KzPa3veB", 1);
  transparent_crc(tHl1oEw2, "tHl1oEw2", 1);
  transparent_crc(CPaSxsX7, "CPaSxsX7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (c)
  {
    goto f;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  e();
  printf("%d\n", c);
}

