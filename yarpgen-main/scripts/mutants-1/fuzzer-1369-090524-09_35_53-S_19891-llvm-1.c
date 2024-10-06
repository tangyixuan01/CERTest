#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-for-snippet

int printf(const char *, ...);
int a = 1;
int c = 1;
int d;
volatile int b;
int fn1()
{
  int nwjbOv7Y = -2147483648;
  int IRUvj8Tb = -512923066;
  int vAfM9xaC = 78469912;
  int YpeA96si = -2147483648;
  unsigned long KmMsGzJ1 = 18446744073709551615ULL;
  char Ab7E0PsM = (signed char)-67;
  int * cbH7C5VW = &a;
  for (; d < 1; d++)
  {
    a = 0;
    for (; IRUvj8Tb < 1; IRUvj8Tb++)
      for (YpeA96si = 0; YpeA96si < 2; YpeA96si++)
    {
      (vAfM9xaC && YpeA96si) || (nwjbOv7Y ^= !vAfM9xaC);
      vAfM9xaC = 0;
    }


  }

  if (1 & (1 << b))
  {
    Ab7E0PsM = (KmMsGzJ1++, *cbH7C5VW);
    for (;;)
    {
      if (a)
      {
        break;
      }
      return 0;
    }

  }
  else
  {
    c = 0;
  }
  transparent_crc(Ab7E0PsM, "Ab7E0PsM", 1);
  transparent_crc(KmMsGzJ1, "KmMsGzJ1", 1);
  transparent_crc(YpeA96si, "YpeA96si", 1);
  transparent_crc(vAfM9xaC, "vAfM9xaC", 1);
  transparent_crc(IRUvj8Tb, "IRUvj8Tb", 1);
  transparent_crc(nwjbOv7Y, "nwjbOv7Y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  printf("%d\n", c);
  return 0;
}

