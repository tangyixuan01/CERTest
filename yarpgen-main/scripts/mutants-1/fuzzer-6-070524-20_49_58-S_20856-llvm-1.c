#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

int a;
int b;
int *d;
int g;
int i;
int **j;
short *f;
static char c;
struct 
{
  int f2;
} e;
void fn1(char *p)
{
  i = a / (*p);
}

void fn2(int p)
{
  short h;
  fn1(&c);
  f = &h;
  for (; g < 1; g++)
  {
    if (c && p)
    {
      *j = 0;
    }
  }

}

void fn3(int *p)
{
  fn2(*p);
}

void fn4()
{
  unsigned MW2hLkop = 0U;
  int rRc5zM2s = 2147483647;
  int z8qRHrxN = 2147483647;
  volatile unsigned _g2S7An4 = 1914267293U;
  volatile unsigned  _y9BPTzl = 973803253U;
  volatile unsigned * qeRaGr7P = &_y9BPTzl;
  volatile unsigned g4Te8iGX = 0U;
  b = 0;
  switch (z8qRHrxN)
  {
    case 0x1111:
      qeRaGr7P = &g4Te8iGX;
      break;

    case 0x2222:
      qeRaGr7P = &_g2S7An4;
      break;

    default:
      return;

  }

  transparent_crc(g4Te8iGX, "g4Te8iGX", 1);
  transparent_crc(_g2S7An4, "_g2S7An4", 1);
  transparent_crc(z8qRHrxN, "z8qRHrxN", 1);
  transparent_crc(rRc5zM2s, "rRc5zM2s", 1);
  transparent_crc(MW2hLkop, "MW2hLkop", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (c = -7; c; c++)
  {
    fn3(&b);
    while (rRc5zM2s < MW2hLkop)
      __builtin_abort();

    for (; e.f2;)
    {
      *d = 0;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn4();
  return 0;
}

