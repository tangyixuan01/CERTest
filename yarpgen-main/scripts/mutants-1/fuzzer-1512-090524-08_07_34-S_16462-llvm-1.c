#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet

int printf(const char *, ...);
static short fn1(int p)
{
  return (p) ? (0) : (1);
}

unsigned short fn2(int p)
{
  return -p;
}

int a[1];
int b;
int *c = &b;
int d;
void fn3()
{
  int  zQA7X5V9 = 2147483647;
  int * jvREl7S1 = &zQA7X5V9;
  unsigned char u6BKozlr = (unsigned char)56;
  unsigned qH0jPSQg = 4294967295U;
  unsigned AmMlETjC = 12418121U;
  int *t = &d;
  transparent_crc(AmMlETjC, "AmMlETjC", 1);
  transparent_crc(qH0jPSQg, "qH0jPSQg", 1);
  transparent_crc(u6BKozlr, "u6BKozlr", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (fn2(1) >= fn1(t == (&a[0])))
  {
    *c = 1;
    switch (u6BKozlr)
    {
      case 0x95:
        *jvREl7S1 = u6BKozlr - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *jvREl7S1 = u6BKozlr - 0x80;
        break;

      default:
        *jvREl7S1 = 0;
        break;

    }

    AmMlETjC = (AmMlETjC ^ 2000000000) * (-qH0jPSQg);
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn3();
  printf("%d\n", b);
  return 0;
}

