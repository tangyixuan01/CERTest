#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c;
void fn1(int e)
{
  int JIS6fez5 = 1486301979;
  int uiqxoCl5 = -2147483648;
  int *f;
  int *g;
  int **h = &g;
  *h = &e;
  transparent_crc(uiqxoCl5, "uiqxoCl5", 1);
  transparent_crc(JIS6fez5, "JIS6fez5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; b < 4; b++)
  {
    f = *h;
    if ((f != (&e)) && f)
    {
      __builtin_abort();
      switch (JIS6fez5)
      {
        case 5:
          uiqxoCl5 = 1;
          break;

        case 6:
          uiqxoCl5 = 2;
          break;

        case 7:
          uiqxoCl5 = 3;
          break;

      }

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
  fn1(0);
  return 0;
}

