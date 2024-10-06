#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

static int g_62 = 0;
extern int printf(const char *format, ...);
static signed char foo(signed char left, int right)
{
  int VsKgYQWx = -2147483648;
  int PUAfxacO = -2147483648;
  int OkA8WMNj = 2147483647;
  char BTmoHGY7 = (signed char)-128;
  int nLHkzcOy = -2147483648;
  transparent_crc(nLHkzcOy, "nLHkzcOy", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (BTmoHGY7 = -3; BTmoHGY7 > (-24); BTmoHGY7--)
  {
    for (; PUAfxacO; PUAfxacO++)
      nLHkzcOy = 0;

    VsKgYQWx = OkA8WMNj | BTmoHGY7;
  }

  transparent_crc(BTmoHGY7, "BTmoHGY7", 1);
  transparent_crc(OkA8WMNj, "OkA8WMNj", 1);
  transparent_crc(PUAfxacO, "PUAfxacO", 1);
  transparent_crc(VsKgYQWx, "VsKgYQWx", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
  int Mp1QceVv = -60039550;
  int l_111[1];
  int i;
  for (i = 0; i < 1; i++)
  {
    l_111[i] = 128;
  }

  switch (Mp1QceVv)
    case 111:
    case 222:
    case 44:
    return 0;




  g_62 = bar(foo(l_111[0], 8), 8);
  printf("g_62 = %d\n", g_62);
  transparent_crc(Mp1QceVv, "Mp1QceVv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

