#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet -> insert-if-snippet

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
  int cUNkbDrl = 2147483647;
  int TVXEZQ3x = 2147483647;
  int P12T3eF_ = -2147483648;
  int IdpZVYPF = 2147483647;
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

    if (P12T3eF_ - 1133364270)
      TVXEZQ3x = ((TVXEZQ3x + IdpZVYPF) ^ ((~cUNkbDrl) / 1958)) || P12T3eF_;
    default:
      *SAZCKQyq = 0;
      break;

  }

  transparent_crc(IdpZVYPF, "IdpZVYPF", 1);
  transparent_crc(P12T3eF_, "P12T3eF_", 1);
  transparent_crc(TVXEZQ3x, "TVXEZQ3x", 1);
  transparent_crc(cUNkbDrl, "cUNkbDrl", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", d);
}

