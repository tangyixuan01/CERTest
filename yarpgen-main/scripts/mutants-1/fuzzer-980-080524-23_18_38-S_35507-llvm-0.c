#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
union 
{
  int a;
} b;
int *c = (int *) (&b);
int main()
{
  platform_main_begin();
  crc32_gentab();
  int rK6dihNS = 2147483647;
  int MyK9eNWL = 2147483647;
  int *d = (int *) (&b);
  *d = 2;
  *c = 1;
  switch (rK6dihNS)
  {
    case 5:
      MyK9eNWL = 1;
      break;

    case 6:
      MyK9eNWL = 2;
      break;

    case 7:
      MyK9eNWL = 3;
      break;

  }

  transparent_crc(MyK9eNWL, "MyK9eNWL", 1);
  transparent_crc(rK6dihNS, "rK6dihNS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", b.a);
}

