#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

static int g_62 = 0;
extern int printf(const char *format, ...);
static signed char foo(signed char left, int right)
{
  if ((left < 0) || (left > (127 >> right)))
  {
    return left;
  }
  else
  {
    return left << right;
  }
}

static unsigned short bar(unsigned short left, int right)
{
  return left >> right;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int wOVkWraX = 2147483647;
  int Z9p3nbeS = -95099740;
  int cqQAgpwX = -939242649;
  int gxP5ht0L = -2147483648;
  int l_111[1];
  int i;
  for (i = 0; i < 1; i++)
  {
    l_111[i] = 128;
  }

  g_62 = bar(foo(l_111[0], 8), 8);
  if (gxP5ht0L)
    cqQAgpwX = 0;
  else
    cqQAgpwX = Z9p3nbeS || (wOVkWraX = 0);
  printf("g_62 = %d\n", g_62);
  transparent_crc(gxP5ht0L, "gxP5ht0L", 1);
  transparent_crc(cqQAgpwX, "cqQAgpwX", 1);
  transparent_crc(Z9p3nbeS, "Z9p3nbeS", 1);
  transparent_crc(wOVkWraX, "wOVkWraX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

