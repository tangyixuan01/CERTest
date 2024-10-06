#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c;
int d;
int e;
char f[1][3];
void fn1()
{
  int OYqhvauJ = -674970763;
  int e7pG5gUE = 1876124698;
  transparent_crc(e7pG5gUE, "e7pG5gUE", 1);
  transparent_crc(OYqhvauJ, "OYqhvauJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (d = 0; d < 2; d++)
  {
    f[b][d] = 0;
    for (e = 0; e < 3; e++)
    {
      if (c)
      {
        switch (OYqhvauJ)
        {
          case 5:
            e7pG5gUE = 1;
            break;

          case 6:
            e7pG5gUE = 2;
            break;

          case 7:
            e7pG5gUE = 3;
            break;

        }

        a--;
      }
      f[0][e] = 1;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  if (f[0][1] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

