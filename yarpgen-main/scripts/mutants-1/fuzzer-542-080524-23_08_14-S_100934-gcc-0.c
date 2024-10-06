#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a;
int b;
int c;
int d;
int e;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned iFzUePhf = 130775395U;
  unsigned y0l9K4_M = 3662154153U;
  unsigned qzOT7tAC = 2606885079U;
  int f = 0;
  int g = 0;
  for (; f < 2; f++)
  {
    int h;
    int i;
    for (h = 0; h < 2; h++)
    {
      b = (e = (g) ? (a % g) : (0));
      c = d;
      for (i = 0; i < 1; i++)
      {
        g = 0;
        for (iFzUePhf = 0; iFzUePhf < 2; iFzUePhf++)
          for (qzOT7tAC = 0; qzOT7tAC < 2; qzOT7tAC++)
          if ((++y0l9K4_M) < iFzUePhf)
          __builtin_abort();


      }

      for (; g < 2; g++)
      {
        ;
      }

    }

  }

  transparent_crc(qzOT7tAC, "qzOT7tAC", 1);
  transparent_crc(y0l9K4_M, "y0l9K4_M", 1);
  transparent_crc(iFzUePhf, "iFzUePhf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

