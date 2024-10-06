#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet -> insert-if-snippet

int printf(const char *, ...);
int a = 0;
char b = 0;
char c = 0;
short d = 0;
void e()
{
  int rmbH0IKV = -2147483648;
  int CfzXnADI = -1484251654;
  int JwM1XOpi = 2147483647;
  int l683bkmd = -1863595338;
  unsigned NZtD6e2S = 0U;
  while (NZtD6e2S < 94)
    NZtD6e2S++;

  int uDAQb5wJ = 1084859700;
  int wiOJbZoF = -2147483648;
  int dCWk2TPs = -1963134056;
  int * wZmX5tDO = &a;
  for (; b; b++)
  {
    d = a + 8;
  }

  for (; d;)
  {
    for (wiOJbZoF = 24; wiOJbZoF; wiOJbZoF--)
    {
      if (JwM1XOpi)
      {
        rmbH0IKV = (l683bkmd++) && CfzXnADI;
        JwM1XOpi = CfzXnADI;
      }
      for (uDAQb5wJ = 0; uDAQb5wJ < 6; uDAQb5wJ++)
        dCWk2TPs |= 1;

      *wZmX5tDO |= dCWk2TPs;
    }

    ;
  }

  f:
  c++;

  transparent_crc(dCWk2TPs, "dCWk2TPs", 1);
  transparent_crc(wiOJbZoF, "wiOJbZoF", 1);
  transparent_crc(uDAQb5wJ, "uDAQb5wJ", 1);
  transparent_crc(NZtD6e2S, "NZtD6e2S", 1);
  transparent_crc(l683bkmd, "l683bkmd", 1);
  transparent_crc(JwM1XOpi, "JwM1XOpi", 1);
  transparent_crc(CfzXnADI, "CfzXnADI", 1);
  transparent_crc(rmbH0IKV, "rmbH0IKV", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (c)
  {
    goto f;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  e();
  printf("%d\n", c);
}

