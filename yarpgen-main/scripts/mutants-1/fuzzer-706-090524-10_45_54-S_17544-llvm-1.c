#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

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
  int * yKbUkmjJ = &a;
  unsigned char EljKABQN = (unsigned char)27;
  struct S d = {0, 0, 0};
  switch (EljKABQN)
  {
    case 0x95:
      *yKbUkmjJ = 0x01;
      break;

    case 0x80:

    case 0x81:

    for (;;)
      ;

    case 0x82:
      *yKbUkmjJ = 0x00;
      break;

    default:
      *yKbUkmjJ = 0x05;
      break;

  }

  c = d.f0;
  b = d;
  transparent_crc(EljKABQN, "EljKABQN", 1);
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

