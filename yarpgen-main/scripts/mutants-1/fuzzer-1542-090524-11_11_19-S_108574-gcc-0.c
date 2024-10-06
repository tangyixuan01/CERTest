#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a = 1;
int b;
int c = 2;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int E8tOiXsZ = -162511863;
  unsigned int u_K7o8ze = 0U;
  if (b)
  {
    goto L2;
  }
  L1:
  {
    int e = c;
    a = 1 % a;
    while (e && (1 <= d))
    {
      while (1)
      {
        if (u_K7o8ze < 10)
          return E8tOiXsZ;
        if (u_K7o8ze < (10 * 10))
          return E8tOiXsZ + 1;
        if (u_K7o8ze < ((10 * 10) * 10))
          return E8tOiXsZ + 2;
        if (u_K7o8ze < (((10 * 10) * 10) * 10))
          return E8tOiXsZ + 3;
        E8tOiXsZ += 4;
        u_K7o8ze /= ((10 * 10) * 10) * 10;
      }

      ;
    }

    d >= b;
    L2:
    if (1 >= e)
    {
      goto L1;
    }

  }

  transparent_crc(u_K7o8ze, "u_K7o8ze", 1);
  transparent_crc(E8tOiXsZ, "E8tOiXsZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

