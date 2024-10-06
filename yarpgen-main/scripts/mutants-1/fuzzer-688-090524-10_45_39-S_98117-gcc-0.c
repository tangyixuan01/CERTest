#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
int a = 0;
char b = 0;
char c = 0;
short d = 0;
void e()
{
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

