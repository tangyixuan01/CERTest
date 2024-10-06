#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

struct a
{
  int b : 4;
} d;
static int c;
static int e;
static const struct a f;
static void g(const struct a h)
{
  char cLwYtKnz = (signed char)127;
  int JpE6xGg9 = 919728563;
  for (; c < 1; c++)
  {
    JpE6xGg9 = cLwYtKnz % ((unsigned) 9);
    d = h;
  }

  e = h.b;
  transparent_crc(JpE6xGg9, "JpE6xGg9", 1);
  transparent_crc(cLwYtKnz, "cLwYtKnz", 1);
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

