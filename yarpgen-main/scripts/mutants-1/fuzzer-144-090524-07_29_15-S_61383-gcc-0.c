#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a;
int b = 1;
int c;
int d;
int e;
int f;
int g;
int fn1()
{
  unsigned W3rpFG_t = 0U;
  int CQ6IjD2a = 2147483647;
  int QwYTrcfd = 1163459987;
  int h;
  transparent_crc(QwYTrcfd, "QwYTrcfd", 1);
  transparent_crc(CQ6IjD2a, "CQ6IjD2a", 1);
  transparent_crc(W3rpFG_t, "W3rpFG_t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (;;)
  {
    g = b;
    g = (g) ? (0) : (1 % g);
    e = a + 1;
    for (; d < 1; d = e)
    {
      h = (f == 0) ? (0) : (1 % f);
      if (f < 1)
      {
        c = 0;
      }
      else
      {
        if (h)
        {
          break;
        }
        for (QwYTrcfd = 0; QwYTrcfd < 1; QwYTrcfd++)
        {
          W3rpFG_t = (W3rpFG_t ^ W3rpFG_t) ^ 40;
          W3rpFG_t;
          if (CQ6IjD2a)
            ;
          printf("%X\n", W3rpFG_t);
        }

      }
    }

    if (b)
    {
      return 0;
    }
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  return 0;
}

