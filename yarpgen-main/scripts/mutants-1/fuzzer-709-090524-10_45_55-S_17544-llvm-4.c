#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet -> insert-switch-snippet -> insert-while-snippet -> insert-while-snippet

int printf(const char *, ...);
int a = 1;
int c;
struct S
{
  char f0;
  int : 31;
  char f1;
  int f2;
} b;
int foo()
{
  short NyoTt4dO = (short)31262;
  short _lgoHyU5 = (short)32767;
  short _He5snOb = (short)-32768;
  unsigned UjSBiFTf = 0U;
  int YZafG6mW = -2069482320;
  int rTvpqB7o = -2147483648;
  long CtYZjDBJ = -9223372036854775807LL;
  int DHyidX35 = 2147483647;
  int * yKbUkmjJ = &a;
  unsigned char EljKABQN = (unsigned char)27;
  struct S d = {0, 0, 0};
  switch (EljKABQN)
  {
    case 0x95:
      *yKbUkmjJ = 0x01;
      break;

    case 0x80:

    case 0x81:

    for (;;)
      ;

    switch (DHyidX35)
      case 111:
      case 222:
      case 44:
      return 0;




    while (NyoTt4dO)
    {
      if (rTvpqB7o)
        NyoTt4dO = YZafG6mW;
      rTvpqB7o = 1;
      YZafG6mW = (_lgoHyU5 = (_He5snOb) ? (0) : (UjSBiFTf % _He5snOb));
    }

    case 0x82:
      *yKbUkmjJ = 0x00;
      break;

    while (CtYZjDBJ != 0)
    {
      if (*((char *) CtYZjDBJ))
        break;
    }

    default:
      *yKbUkmjJ = 0x05;
      break;

  }

  c = d.f0;
  b = d;
  transparent_crc(EljKABQN, "EljKABQN", 1);
  transparent_crc(DHyidX35, "DHyidX35", 1);
  transparent_crc(CtYZjDBJ, "CtYZjDBJ", 1);
  transparent_crc(rTvpqB7o, "rTvpqB7o", 1);
  transparent_crc(YZafG6mW, "YZafG6mW", 1);
  transparent_crc(UjSBiFTf, "UjSBiFTf", 1);
  transparent_crc(_He5snOb, "_He5snOb", 1);
  transparent_crc(_lgoHyU5, "_lgoHyU5", 1);
  transparent_crc(NyoTt4dO, "NyoTt4dO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return b.f1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  c = foo();
  if (!c)
  {
    a = 0;
  }
  printf("%d\n", a);
  return 0;
}

