#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

static unsigned int g_1;
static signed char g_2 = 0x81;
int printf(const char *format, ...);
static unsigned char foo(unsigned char p1, unsigned char p2)
{
  int ZkjtRCLf = -580062247;
  int _aw5gxdu = 2147483647;
  transparent_crc(_aw5gxdu, "_aw5gxdu", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while ((++ZkjtRCLf) > _aw5gxdu)
    _aw5gxdu = ZkjtRCLf;

  transparent_crc(ZkjtRCLf, "ZkjtRCLf", 1);
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

