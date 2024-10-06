#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

static unsigned int g_1;
static signed char g_2 = 0x81;
int printf(const char *format, ...);
static unsigned char foo(unsigned char p1, unsigned char p2)
{
  int O6vjCgQU = 2147483647;
  int fCWJQ0kd = 2147483647;
  switch (O6vjCgQU)
  {
    case 5:
      fCWJQ0kd = 1;
      break;

    case 6:
      fCWJQ0kd = 2;
      break;

    case 7:
      fCWJQ0kd = 3;
      break;

  }

  transparent_crc(fCWJQ0kd, "fCWJQ0kd", 1);
  transparent_crc(O6vjCgQU, "O6vjCgQU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p1 * p2;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int l_5[2];
  int i;
  for (i = 0; i < 2; i++)
  {
    l_5[i] = 1;
  }

  g_1 = g_2 <= foo(-6, l_5[0]);
  printf("%u\n", g_1);
  return 0;
}

