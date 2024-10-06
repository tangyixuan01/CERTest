#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a[3];
int b;
int c;
int e()
{
  volatile short KqU5FIiN = (short)-32768;
  int i7hDu6TZ = 2132630751;
  short YpbJG6nF = (short)32767;
  int dJno5UjF = 464176714;
  int IL1EOr7M = -1214913526;
  IL1EOr7M = (KqU5FIiN | 1) && ((YpbJG6nF ^ dJno5UjF) | i7hDu6TZ);
  if (!c)
  {
    for (b = 0; b < 3; b++)
    {
      for (c = 0; c < 3; c++)
      {
        a[c] ^= 1;
      }

    }

    return -1;
  }
  transparent_crc(IL1EOr7M, "IL1EOr7M", 1);
  transparent_crc(dJno5UjF, "dJno5UjF", 1);
  transparent_crc(YpbJG6nF, "YpbJG6nF", 1);
  transparent_crc(i7hDu6TZ, "i7hDu6TZ", 1);
  transparent_crc(KqU5FIiN, "KqU5FIiN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  e();
  if (a[1] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

