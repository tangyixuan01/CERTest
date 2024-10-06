#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

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
  unsigned RaNc75Zz = 1347296413U;
  int viygm8pV = 367307454;
  unsigned i_MJzLsW = 4055896024U;
  int l_111[1];
  int i;
  for (i = 0; i < 1; i++)
  {
    l_111[i] = 128;
    for (int g = 2; g <= viygm8pV; g++)
    {
      RaNc75Zz += 5 - g;
      i_MJzLsW += g + 4;
    }

  }

  g_62 = bar(foo(l_111[0], 8), 8);
  printf("g_62 = %d\n", g_62);
  transparent_crc(i_MJzLsW, "i_MJzLsW", 1);
  transparent_crc(viygm8pV, "viygm8pV", 1);
  transparent_crc(RaNc75Zz, "RaNc75Zz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

