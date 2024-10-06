#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

struct a
{
  int b : 4;
} d;
static int c;
static int e;
static const struct a f;
static void g(const struct a h)
{
  int cpdq5UD1 = 2147483647;
  int  S9oTzGO7 = -2147483648;
  int * volatile uWAQbat5 = &S9oTzGO7;
  int z_BqJcGb = 1500967963;
  for (; c < 1; c++)
  {
    d = h;
  }

  e = h.b;
  for (; cpdq5UD1; cpdq5UD1--)
  {
    *uWAQbat5 = 1;
    z_BqJcGb |= 4;
  }

  transparent_crc(z_BqJcGb, "z_BqJcGb", 1);
  transparent_crc(cpdq5UD1, "cpdq5UD1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = h.b;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  g(f);
  return 0;
}

