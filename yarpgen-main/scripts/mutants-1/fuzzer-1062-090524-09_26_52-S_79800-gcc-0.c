#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

volatile double x = 1.23456789;
void f(int p)
{
  if ((p < (-1)) || (0 < p))
  {
    p = -1;
  }
  char d[30];
  int n = __builtin_sprintf(d, "%.*a", p, x);
  const char *s = (n < 20) ? ("< 20") : (">= 20");
  __builtin_printf("%i %s\n%zu: \"%s\"\n", n, s, __builtin_strlen(d), d);
}

volatile int i;
int main()
{
  platform_main_begin();
  crc32_gentab();
  long DenosYE2 = -9223372036854775807LL;
  int ZGMQgh4b = 2147483647;
  while (DenosYE2 > 0xffffffffU)
  {
    ZGMQgh4b += 4;
    DenosYE2 /= ((10 * 10) * 10) * 10;
  }

  volatile int i = -1;
  transparent_crc(ZGMQgh4b, "ZGMQgh4b", 1);
  transparent_crc(DenosYE2, "DenosYE2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  f(i);
}

