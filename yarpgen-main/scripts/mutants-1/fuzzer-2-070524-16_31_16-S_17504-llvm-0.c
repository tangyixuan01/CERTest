#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  a--;
  return 0;
}

static int fn2()
{
  int  PSJDb6un = 1169634933;
  int * DPi35Lje = &PSJDb6un;
  unsigned char FeDnsbvM = (unsigned char)0;
  char c = 117;
  b.f0 = 0;
  for (; b.f0 < 44; b.f0 = fn1(b.f0, 4))
  {
    fn3(b);
    a--;
    c++;
    switch (FeDnsbvM)
    {
      case 0x95:
        *DPi35Lje = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *DPi35Lje = 0x00;
        break;

      default:
        *DPi35Lje = 0x05;
        break;

    }

    c && fn4();
  }

  a--;
  transparent_crc(FeDnsbvM, "FeDnsbvM", 1);
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

