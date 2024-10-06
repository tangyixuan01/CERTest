#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

void * volatile p;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  BhSVsFpE = -2006248983;
  int * sT0t5V1C = &BhSVsFpE;
  unsigned char rT0yGwfu = (unsigned char)255;
  int syLj3BvK = 2147483647;
  switch (rT0yGwfu)
  {
    case 0x95:
      *sT0t5V1C = rT0yGwfu - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *sT0t5V1C = rT0yGwfu - 0x80;
      break;

    default:
      *sT0t5V1C = 0;
      break;

  }

  int n = 0;
  lab:
  ;

  {
    int x[(n % 1000) + 1];
    x[0] = 1;
    x[n % 1000] = 2;
    p = x;
    n++;
  }
  {
    int x[(n % 1000) + 1];
    x[0] = 1;
    x[n % 1000] = 2;
    p = x;
    n++;
  }
  if (n < 1000000)
  {
    if (syLj3BvK)
      return 0;
    goto lab;
  }
  transparent_crc(syLj3BvK, "syLj3BvK", 1);
  transparent_crc(rT0yGwfu, "rT0yGwfu", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

