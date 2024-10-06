#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

void * volatile p;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int syLj3BvK = 2147483647;
  int n = 0;
  lab:
  ;

  {
    int x[(n % 1000) + 1];
    x[0] = 1;
    x[n % 1000] = 2;
    p = x;
    n++;
  }
  {
    int x[(n % 1000) + 1];
    x[0] = 1;
    x[n % 1000] = 2;
    p = x;
    n++;
  }
  if (n < 1000000)
  {
    if (syLj3BvK)
      return 0;
    goto lab;
  }
  transparent_crc(syLj3BvK, "syLj3BvK", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

