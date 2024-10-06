#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  int Y06xZJ5r = 2147483647;
  int r546t0BH = 2147483647;
  struct S d = {0, 0, 0};
  c = d.f0;
  Y06xZJ5r = sizeof(char [r546t0BH]);
  b = d;
  transparent_crc(r546t0BH, "r546t0BH", 1);
  transparent_crc(Y06xZJ5r, "Y06xZJ5r", 1);
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

