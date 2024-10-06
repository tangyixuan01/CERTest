#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet

int printf(const char *, ...);
struct S
{
  int f0;
  int f3;
  int f6;
  int f7;
  int f8;
};
int a;
static struct S b;
char fn1(char p1, char p2)
{
  return p1 + p2;
}

void fn3(struct S p1)
{
}

int fn4()
{
  int  RNBqC0T2 = -2147483648;
  int * o_vlzONI = &RNBqC0T2;
  unsigned char y2ZtxcHM = (unsigned char)0;
  switch (y2ZtxcHM)
  {
    case 0x95:
      *o_vlzONI = y2ZtxcHM - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *o_vlzONI = y2ZtxcHM - 0x80;
      break;

    default:
      *o_vlzONI = 0;
      break;

  }

  a--;
  transparent_crc(y2ZtxcHM, "y2ZtxcHM", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

static int fn2()
{
  int M3eJ1iwO = 2147483647;
  int Vl8ZuIXY = -1979005502;
  volatile int UQBYi9Dz = -2147483648;
  volatile int XzRaIlnd = -2147483648;
  char c = 117;
  b.f0 = 0;
  for (; b.f0 < 44; b.f0 = fn1(b.f0, 4))
  {
    for (M3eJ1iwO = 0; M3eJ1iwO < 18; M3eJ1iwO += 1)
    {
      Vl8ZuIXY = (UQBYi9Dz == 0) != (XzRaIlnd - ((int) ((-0x7fffffff) - 1)));
    }

    fn3(b);
    a--;
    c++;
    c && fn4();
  }

  a--;
  transparent_crc(XzRaIlnd, "XzRaIlnd", 1);
  transparent_crc(UQBYi9Dz, "UQBYi9Dz", 1);
  transparent_crc(Vl8ZuIXY, "Vl8ZuIXY", 1);
  transparent_crc(M3eJ1iwO, "M3eJ1iwO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a = b.f3;
  fn2();
  fn2();
  printf("%d\n", a);
  return 0;
}

