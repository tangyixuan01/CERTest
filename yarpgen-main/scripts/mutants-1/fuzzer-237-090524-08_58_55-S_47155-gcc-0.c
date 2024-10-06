#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

static unsigned int g_1;
static signed char g_2 = 0x81;
int printf(const char *format, ...);
static unsigned char foo(unsigned char p1, unsigned char p2)
{
  int  _VK5NyUk = 2147483647;
  int * i4RBJc2t = &_VK5NyUk;
  unsigned char u4SVObw3 = (unsigned char)255;
  transparent_crc(u4SVObw3, "u4SVObw3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (u4SVObw3)
  {
    case 0x95:
      *i4RBJc2t = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *i4RBJc2t = 0x00;
      break;

    default:
      *i4RBJc2t = 0x05;
      break;

  }

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

