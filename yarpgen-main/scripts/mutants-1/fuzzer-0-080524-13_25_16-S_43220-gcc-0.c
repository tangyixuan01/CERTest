#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

void * volatile p;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int Z4HWY9iN = -2147483648;
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
    goto lab;
  }
  transparent_crc(Z4HWY9iN, "Z4HWY9iN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((Z4HWY9iN >= 0) && (Z4HWY9iN > 0))
    __builtin_printf("0\n");
  return 0;
}

