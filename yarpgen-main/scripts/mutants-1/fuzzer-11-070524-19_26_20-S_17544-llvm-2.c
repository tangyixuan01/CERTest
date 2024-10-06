#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet -> insert-assignment-snippet

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
  int U4uwBKnD = -1759578168;
  int * dYbpu1Ln = &a;
  int Y06xZJ5r = 2147483647;
  *dYbpu1Ln = U4uwBKnD;
  int r546t0BH = 2147483647;
  struct S d = {0, 0, 0};
  c = d.f0;
  Y06xZJ5r = sizeof(char [r546t0BH]);
  b = d;
  transparent_crc(r546t0BH, "r546t0BH", 1);
  transparent_crc(Y06xZJ5r, "Y06xZJ5r", 1);
  transparent_crc(U4uwBKnD, "U4uwBKnD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return b.f1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * u6afseAU = &a;
  unsigned char CW8Jt2QY = (unsigned char)0;
  c = foo();
  if (!c)
  {
    a = 0;
    switch (CW8Jt2QY)
    {
      case 0x95:
        *u6afseAU = CW8Jt2QY - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *u6afseAU = CW8Jt2QY - 0x80;
        break;

      default:
        *u6afseAU = 0;
        break;

    }

  }
  printf("%d\n", a);
  transparent_crc(CW8Jt2QY, "CW8Jt2QY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

