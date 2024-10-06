#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
struct S0
{
  signed f0 : 1;
};
struct S0 g_122 = {1};
unsigned g_626;
int func_55(int p_60)
{
  int  _LOKFvnx = 929422961;
  int * HIc6Cql1 = &_LOKFvnx;
  unsigned char YI2soPug = (unsigned char)31;
  unsigned long l_373 = 0x6546E4C6CD30E57BLL;
  if (g_122.f0 > l_373)
  {
    p_60 = 1;
  }
  transparent_crc(l_373, "l_373", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (YI2soPug)
  {
    case 0x95:
      *HIc6Cql1 = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *HIc6Cql1 = 0x00;
      break;

    default:
      *HIc6Cql1 = 0x05;
      break;

  }

  transparent_crc(YI2soPug, "YI2soPug", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p_60;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  g_626 = func_55(0);
  printf("%u\n", g_626);
  return 0;
}

