#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a;
int b;
int c;
int fn1()
{
  int tlN1G4eL = 440222085;
  int lN6SCG5z = 2147483647;
  short E7MI526h = (short)19247;
  int foKTMbIj = 2147483647;
  int EpfvYrUH = 1245952051;
  int T_7k2avp = -1280054627;
  if (c)
  {
    switch (tlN1G4eL)
    {
      case 5:
        lN6SCG5z = 1;
        break;

      case 6:
        lN6SCG5z = 2;
        break;

      case 7:
        lN6SCG5z = 3;
        break;

    }

    while (!T_7k2avp)
    {
      foKTMbIj = EpfvYrUH;
      T_7k2avp = ~(1L << E7MI526h);
    }

    printf("0\n");
  }
  transparent_crc(T_7k2avp, "T_7k2avp", 1);
  transparent_crc(EpfvYrUH, "EpfvYrUH", 1);
  transparent_crc(foKTMbIj, "foKTMbIj", 1);
  transparent_crc(E7MI526h, "E7MI526h", 1);
  transparent_crc(lN6SCG5z, "lN6SCG5z", 1);
  transparent_crc(tlN1G4eL, "tlN1G4eL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return b;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int d = 1;
  int e = 0;
  for (; e < 128; e++)
  {
    ;
  }

  L:
  if (fn1())
  {
    d = 0;
    goto L;
  }

  if (d)
  {
    printf("0\n");
  }
  return 0;
}

