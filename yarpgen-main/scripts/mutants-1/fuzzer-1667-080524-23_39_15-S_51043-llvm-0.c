#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a = 1;
int b = 1;
int main()
{
  platform_main_begin();
  crc32_gentab();
  char rQK0jkP6 = (signed char)-43;
  char xZf8gdNM = (signed char)127;
  int yGWzLh_0 = -846489583;
  short d;
  short g;
  short i;
  int e = 34000;
  int h;
  d = b;
  g = 100 | b;
  L1:
  i = g;

  L2:
  g = ~(d / e);

  e = ~((2 / g) & d);
  h = a;
  while (!e)
  {
    a = b;
    e = ~(1L << i);
  }

  if (g > 0)
  {
    rQK0jkP6 = (xZf8gdNM++) == yGWzLh_0;
    goto L2;
  }
  if (!g)
  {
    goto L1;
  }
  if (h < e)
  {
    __builtin_abort();
  }
  transparent_crc(yGWzLh_0, "yGWzLh_0", 1);
  transparent_crc(xZf8gdNM, "xZf8gdNM", 1);
  transparent_crc(rQK0jkP6, "rQK0jkP6", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

