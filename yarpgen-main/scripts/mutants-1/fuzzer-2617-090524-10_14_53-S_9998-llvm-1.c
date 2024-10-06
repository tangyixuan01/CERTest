#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-assignment-snippet

int printf(const char *, ...);
struct S0
{
  signed f0 : 1;
};
struct S0 g_122 = {1};
unsigned g_626;
int func_55(int p_60)
{
  unsigned int XSyJ3Tpl = 0U;
  unsigned int P3vOVt2r = 404931773U;
  int gJv7DlLw = -2083846210;
  unsigned long l_373 = 0x6546E4C6CD30E57BLL;
  if (g_122.f0 > l_373)
  {
    p_60 = 1;
  }
  while (1)
  {
    int m = gJv7DlLw;
    P3vOVt2r = (((unsigned int) XSyJ3Tpl) >> 27) & 0x1fUL;
    while (m)
      m /= 2;

    break;
  }

  transparent_crc(l_373, "l_373", 1);
  transparent_crc(gJv7DlLw, "gJv7DlLw", 1);
  transparent_crc(P3vOVt2r, "P3vOVt2r", 1);
  transparent_crc(XSyJ3Tpl, "XSyJ3Tpl", 1);
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

