#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet -> insert-for-snippet

int a;
int i;
unsigned short b;
unsigned short c = 4;
unsigned short d = 5;
unsigned short e;
unsigned short f;
unsigned short g;
long long h;
void fn1()
{
  char Ka2io7pZ = (signed char)-128;
  int  ZS5D1t78 = 2147483647;
  int * RmyadBCp = &ZS5D1t78;
  unsigned char juN1LwZV = (unsigned char)157;
  int j = 0;
  for (; a;)
  {
    L1:
    ;

    switch (juN1LwZV)
    {
      for (; Ka2io7pZ >= 0; Ka2io7pZ--)
        ;

      case 0x95:
        *RmyadBCp = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *RmyadBCp = 0x00;
        break;

      default:
        *RmyadBCp = 0x05;
        break;

    }

  }

  unsigned char k = e;
  if (f)
  {
    L2:
    h = (b % h) & k;

    goto L1;
  }
  int l = j;
  int m = (~i) * d;
  j = (~(g || d)) ^ (d >> ((h && c) * m));
  e = (d || m) + d;
  d = (~(-(d && (m >> i)))) & (~(j && (l || h)));
  transparent_crc(juN1LwZV, "juN1LwZV", 1);
  transparent_crc(Ka2io7pZ, "Ka2io7pZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!(d < c))
  {
    goto L2;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  volatile unsigned  S_0AdanG = 0U;
  volatile unsigned * _4fZK9dr = &S_0AdanG;
  fn1();
  while (*_4fZK9dr)
  {
  }

  return 0;
}

