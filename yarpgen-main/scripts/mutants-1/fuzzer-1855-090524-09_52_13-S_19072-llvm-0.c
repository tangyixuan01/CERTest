#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[6];
short b;
volatile int c;
int d = 1;
void fn1(int p)
{
  if (!p)
  {
    d = 0;
  }
}

void fn2(void)
{
  for (b = 1; b; b++)
  {
    fn1(b);
  }

}

void fn3(void)
{
  fn2();
  int e = 0;
  int t;
  if (d)
  {
    t = (e || e) ? (0) : (e);
    c;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int oiYxvM0D = -2147483648;
  int IJMEa2p4 = -333517717;
  a[1] = 0;
  switch (oiYxvM0D)
  {
    case 5:
      IJMEa2p4 = 1;
      break;

    case 6:
      IJMEa2p4 = 2;
      break;

    case 7:
      IJMEa2p4 = 3;
      break;

  }

  fn3();
  printf("%d\n", a[a[0]]);
  transparent_crc(IJMEa2p4, "IJMEa2p4", 1);
  transparent_crc(oiYxvM0D, "oiYxvM0D", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

