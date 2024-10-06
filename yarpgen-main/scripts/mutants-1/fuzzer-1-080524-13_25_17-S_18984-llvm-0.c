#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a;
int b;
int d;
int *e = &d;
volatile int c = 1;
void foo(int *p)
{
  int JUt1AW7q = 2147483647;
  int RizAlS5X = -83493655;
  unsigned ml1pu_DI = 4294967295U;
  int f = 0;
  for (; b < 1; b++)
  {
    e = p;
    if (c)
    {
      if (f)
      {
        ;
      }
      break;
    }
    for (; ml1pu_DI < 3; ml1pu_DI++)
    {
      while (RizAlS5X < ml1pu_DI)
        __builtin_abort();

      for (JUt1AW7q = 0; JUt1AW7q < 3; JUt1AW7q++)
        RizAlS5X++;

    }

    if (c)
    {
      break;
    }
  }

  transparent_crc(ml1pu_DI, "ml1pu_DI", 1);
  transparent_crc(RizAlS5X, "RizAlS5X", 1);
  transparent_crc(JUt1AW7q, "JUt1AW7q", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!e)
  {
    __builtin_abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo(&a);
  return 0;
}

