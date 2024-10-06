#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet -> insert-while-snippet

int printf(const char *, ...);
struct A
{
  int b;
  int c;
  int d;
  int e;
  int f;
  long g;
} h;
int i;
void o(int m)
{
  long QjzEop8H = -8000236196968493601LL;
  unsigned aNbM2QpO = 0U;
  int fP4HEB58 = -137392386;
  int EgaeIhuf = 2147483647;
  int  EuT1n6MD = -2147483648;
  int * LuZrkXB1 = &EuT1n6MD;
  unsigned char XTmgOGo1 = (unsigned char)76;
  switch (XTmgOGo1)
  {
    case 0x95:
      *LuZrkXB1 = XTmgOGo1 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *LuZrkXB1 = XTmgOGo1 - 0x80;
      break;

    default:
      *LuZrkXB1 = 0;
      break;

  }

  struct A p[9] = {{1, 0, 0, 0, 0, 0}};
  transparent_crc(XTmgOGo1, "XTmgOGo1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    int m = aNbM2QpO;
    L:
    aNbM2QpO = ~(-(m || (fP4HEB58 & QjzEop8H)));

    fP4HEB58 = (1 ^ aNbM2QpO) / EgaeIhuf;
    if (fP4HEB58)
      goto L;
    break;
  }

  transparent_crc(EgaeIhuf, "EgaeIhuf", 1);
  transparent_crc(fP4HEB58, "fP4HEB58", 1);
  transparent_crc(aNbM2QpO, "aNbM2QpO", 1);
  transparent_crc(QjzEop8H, "QjzEop8H", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  h = p[3];
}

void n(int q)
{
  o(i);
}

void l()
{
  int BhKc1QNE = -1877356245;
  for (; BhKc1QNE <= 4; BhKc1QNE++)
    ;

  transparent_crc(BhKc1QNE, "BhKc1QNE", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  n(i);
}

void r()
{
  l();
  if (!i)
  {
    return;
  }
  while (1)
  {
    ;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  r();
  printf("%d\n", h.b);
  return 0;
}

