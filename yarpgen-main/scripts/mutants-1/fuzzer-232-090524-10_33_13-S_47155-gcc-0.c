#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

static unsigned int g_1;
static signed char g_2 = 0x81;
int printf(const char *format, ...);
static unsigned char foo(unsigned char p1, unsigned char p2)
{
  int qC_mJuQZ = 2147483647;
  unsigned N3AWe8Xi = 2572188955U;
  int rGylsonh = -1869359447;
  int  pXiCrTmz = 2147483647;
  int * EXktGPxu = &pXiCrTmz;
  char JDAXCowl = (signed char)127;
  for (; N3AWe8Xi >= 8; N3AWe8Xi++)
  {
    rGylsonh = --qC_mJuQZ;
    JDAXCowl = rGylsonh * 100L;
    if (JDAXCowl)
      ;
    else
    {
      *EXktGPxu = 0;
      break;
    }
  }

  transparent_crc(JDAXCowl, "JDAXCowl", 1);
  transparent_crc(rGylsonh, "rGylsonh", 1);
  transparent_crc(N3AWe8Xi, "N3AWe8Xi", 1);
  transparent_crc(qC_mJuQZ, "qC_mJuQZ", 1);
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

