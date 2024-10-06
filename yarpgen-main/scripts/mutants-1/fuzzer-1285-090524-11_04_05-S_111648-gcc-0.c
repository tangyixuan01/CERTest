#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int *b = &a;
static int **c = &b;
static int d;
short e;
char f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int aRc9X8os = 2147483647;
  int e53KA_hB = -2147483648;
  f = -21;
  for (; f < (-5); f++)
  {
    e = f ^ 3;
    switch (aRc9X8os)
    {
      case 5:
        e53KA_hB = 1;
        break;

      case 6:
        e53KA_hB = 2;
        break;

      case 7:
        e53KA_hB = 3;
        break;

    }

    d = *b;
    *(*c) = e;
  }

  transparent_crc(e53KA_hB, "e53KA_hB", 1);
  transparent_crc(aRc9X8os, "aRc9X8os", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", d);
}

