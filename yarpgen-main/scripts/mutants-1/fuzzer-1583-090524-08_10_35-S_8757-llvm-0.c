#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

static int g_62 = 0;
extern int printf(const char *format, ...);
static signed char foo(signed char left, int right)
{
  int * alyK0IJO = &g_62;
  unsigned char vCbA0WjK = (unsigned char)255;
  transparent_crc(vCbA0WjK, "vCbA0WjK", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((left < 0) || (left > (127 >> right)))
  {
    switch (vCbA0WjK)
    {
      case 0x95:
        *alyK0IJO = vCbA0WjK - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *alyK0IJO = vCbA0WjK - 0x80;
        break;

      default:
        *alyK0IJO = 0;
        break;

    }

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
  int l_111[1];
  int i;
  for (i = 0; i < 1; i++)
  {
    l_111[i] = 128;
  }

  g_62 = bar(foo(l_111[0], 8), 8);
  printf("g_62 = %d\n", g_62);
  return 0;
}

