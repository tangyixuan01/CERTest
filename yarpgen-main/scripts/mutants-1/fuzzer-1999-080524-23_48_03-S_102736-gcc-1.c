#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

int a;
int b = -1;
int c;
int d = 1;
char e(char f, int g)
{
  long gxZqfu2d = -4020824568627256866LL;
  while (gxZqfu2d > 1523073808)
    ;

  transparent_crc(gxZqfu2d, "gxZqfu2d", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (g) ? (f) : (0);
}

char h(char f)
{
  return (f < a) ? (f) : (f < a);
}

unsigned char i(unsigned char f, int g)
{
  int * T83aLOPZ = &b;
  unsigned char SFuBy_6h = (unsigned char)121;
  transparent_crc(SFuBy_6h, "SFuBy_6h", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (SFuBy_6h)
  {
    case 0x95:
      *T83aLOPZ = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *T83aLOPZ = 0x00;
      break;

    default:
      *T83aLOPZ = 0x05;
      break;

  }

  return (g) ? (f) : (f > g);
}

void j()
{
  L:
  c = e(1, i(h(b), d));

  if (b)
  {
    return;
  }
  goto L;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  j();
  if (c != 1)
  {
    __builtin_abort();
  }
  return 0;
}

