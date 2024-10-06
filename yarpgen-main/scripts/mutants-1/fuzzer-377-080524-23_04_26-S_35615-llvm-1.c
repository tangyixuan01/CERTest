#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet

int printf(const char *, ...);
union a
{
  int b;
  long c;
} e[] = {{0}, {8}};
int d = 0;
int *f = &e[1].b;
long *g = &e[1].c;
void h()
{
  int Yn97QpD4 = 2147483647;
  int jd8quQKV = -1179880628;
  int OXrRipuw = -1463539393;
  for (; d < 2; d++)
  {
    *g = 0;
    if (!OXrRipuw)
    {
      OXrRipuw = Yn97QpD4;
      jd8quQKV = (Yn97QpD4 == 0) ? (1) : (1 % Yn97QpD4);
      if (jd8quQKV)
        OXrRipuw = 0;
    }
    if (*f)
    {
      return;
    }
  }

  transparent_crc(OXrRipuw, "OXrRipuw", 1);
  transparent_crc(jd8quQKV, "jd8quQKV", 1);
  transparent_crc(Yn97QpD4, "Yn97QpD4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * SAZCKQyq = &d;
  unsigned char MN1dGfCk = (unsigned char)0;
  h();
  transparent_crc(MN1dGfCk, "MN1dGfCk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (MN1dGfCk)
  {
    case 0x95:
      *SAZCKQyq = MN1dGfCk - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *SAZCKQyq = MN1dGfCk - 0x80;
      break;

    default:
      *SAZCKQyq = 0;
      break;

  }

  printf("%d\n", d);
}

