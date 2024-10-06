#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int c;
void fn1(int e)
{
  int *f;
  int *g;
  int **h = &g;
  *h = &e;
  for (; b < 4; b++)
  {
    f = *h;
    if ((f != (&e)) && f)
    {
      __builtin_abort();
    }
    *h = &c;
    a = 0;
    for (; a < 4; a++)
    {
      *h = 0;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  long FC3Rvc2U = -1875872776680176736LL;
  int YZRHncdq = 2147483647;
  char xgZY0bMB = (signed char)-128;
  short af3xOUDL = (short)32767;
  long ewV0IgPH = -2759975455262238747LL;
  fn1(0);
  transparent_crc(ewV0IgPH, "ewV0IgPH", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  xgZY0bMB = af3xOUDL | (((ewV0IgPH < xgZY0bMB) > FC3Rvc2U) < YZRHncdq);
  transparent_crc(af3xOUDL, "af3xOUDL", 1);
  transparent_crc(xgZY0bMB, "xgZY0bMB", 1);
  transparent_crc(YZRHncdq, "YZRHncdq", 1);
  transparent_crc(FC3Rvc2U, "FC3Rvc2U", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

