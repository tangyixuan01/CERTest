#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

int a;
int b;
int c;
int *d;
int e;
static int fn1()
{
  int  bDn6wCEW = 2147483647;
  int * gHCNGMa4 = &bDn6wCEW;
  unsigned char XsgoIWjV = (unsigned char)64;
  volatile unsigned  sGIwmzht = 4294967295U;
  volatile unsigned * buIpygfQ = &sGIwmzht;
  if (a)
  {
    goto l1;
    while (*buIpygfQ)
    {
    }

  }
  l2:
  while (b)
  {
    if (*d)
    {
      return c;
      switch (XsgoIWjV)
      {
        case 0x95:
          *gHCNGMa4 = XsgoIWjV - 0x91;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *gHCNGMa4 = XsgoIWjV - 0x80;
          break;

        default:
          *gHCNGMa4 = 0;
          break;

      }

    }
  }


  for (e = 0; e; e++)
  {
    goto l2;
    l1:
    ;

  }

  transparent_crc(XsgoIWjV, "XsgoIWjV", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  return 0;
}

