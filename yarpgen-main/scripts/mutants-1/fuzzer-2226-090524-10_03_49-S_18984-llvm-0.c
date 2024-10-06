#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int d;
int *e = &d;
volatile int c = 1;
void foo(int *p)
{
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
    if (c)
    {
      break;
    }
  }

  if (!e)
  {
    __builtin_abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  char nIzlTse6 = (signed char)127;
  int eYvj6JfZ = -1899086727;
  foo(&a);
  transparent_crc(eYvj6JfZ, "eYvj6JfZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  nIzlTse6 = ~eYvj6JfZ;
  transparent_crc(nIzlTse6, "nIzlTse6", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

