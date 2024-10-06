#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet

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
  for (; d < 2; d++)
  {
    *g = 0;
    if (*f)
    {
      return;
    }
  }

  return;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int ZBb7h4cy = -2147483648;
  switch (ZBb7h4cy)
    case 111:
    case 222:
    case 44:
    return 0;




  int Aup_QJFk = 2147483647;
  long _iLf7UJn = 9223372036854775807LL;
  char SvP072bO = (signed char)127;
  int hDveWng6 = 1508306725;
  long w1vRBF7L = -9223372036854775807LL;
  char A1SGfdUq = (signed char)-128;
  h();
  SvP072bO = (~(((Aup_QJFk / (-_iLf7UJn)) * SvP072bO) & w1vRBF7L)) | (-((-A1SGfdUq) | hDveWng6));
  transparent_crc(A1SGfdUq, "A1SGfdUq", 1);
  transparent_crc(w1vRBF7L, "w1vRBF7L", 1);
  transparent_crc(hDveWng6, "hDveWng6", 1);
  transparent_crc(SvP072bO, "SvP072bO", 1);
  transparent_crc(_iLf7UJn, "_iLf7UJn", 1);
  transparent_crc(Aup_QJFk, "Aup_QJFk", 1);
  transparent_crc(ZBb7h4cy, "ZBb7h4cy", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", d);
}

