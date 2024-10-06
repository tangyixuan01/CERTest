#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

unsigned a;
unsigned b;
struct S0
{
  int f1 : 18;
  unsigned f3 : 4;
};
void fn1()
{
  struct S0 c = {7, 0};
  if (c.f1)
  {
    c.f3 = 3;
  }
  a = -(~c.f3);
  c.f3 = ~(c.f1 && c.f1);
  c.f1 = (c.f3 * (c.f1 - (c.f1 - (a % c.f1)))) + ((~c.f3) * (-a));
  b = ~(c.f1 & a);
  if (b >= 4294967295)
  {
    __builtin_printf("%d\n", a);
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int ukMFy6xL = 2147483647;
  switch (ukMFy6xL)
    case 111:
    case 222:
    case 44:
    return 0;




  fn1();
  transparent_crc(ukMFy6xL, "ukMFy6xL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

