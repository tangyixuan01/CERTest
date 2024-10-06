#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet -> insert-for-snippet -> insert-assignment-snippet -> insert-if-snippet -> insert-switch-snippet -> insert-switch-snippet

static int g_62 = 0;
extern int printf(const char *format, ...);
static signed char foo(signed char left, int right)
{
  int TnOIxX3J = 1590270913;
  int mbhF8zvC = 1007663685;
  int Jr6dzg2_ = 51155274;
  int Xfng89W1 = 1670469946;
  int LXdCnWDh = 1818981439;
  if (Jr6dzg2_ == (-1))
    return 0;
  unsigned hyG4CU5Q = 4294967295U;
  int F4kdfWgs = 2147483647;
  int * alyK0IJO = &g_62;
  unsigned char vCbA0WjK = (unsigned char)255;
  transparent_crc(vCbA0WjK, "vCbA0WjK", 1);
  transparent_crc(F4kdfWgs, "F4kdfWgs", 1);
  transparent_crc(hyG4CU5Q, "hyG4CU5Q", 1);
  transparent_crc(LXdCnWDh, "LXdCnWDh", 1);
  transparent_crc(Xfng89W1, "Xfng89W1", 1);
  transparent_crc(Jr6dzg2_, "Jr6dzg2_", 1);
  transparent_crc(mbhF8zvC, "mbhF8zvC", 1);
  transparent_crc(TnOIxX3J, "TnOIxX3J", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((left < 0) || (left > (127 >> right)))
  {
    switch (TnOIxX3J)
    {
      case 5:
        mbhF8zvC = 1;
        break;

      case 6:
        mbhF8zvC = 2;
        break;

      case 7:
        mbhF8zvC = 3;
        break;

    }

    for (; LXdCnWDh < 1; LXdCnWDh++)
      for (; hyG4CU5Q < 1; hyG4CU5Q++)
    {
      int f;
      if (!Xfng89W1)
        return F4kdfWgs;
    }


    switch (vCbA0WjK)
    {
      case 0x95:
        *alyK0IJO = vCbA0WjK - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *alyK0IJO = vCbA0WjK - 0x80;
        break;

      default:
        *alyK0IJO = 0;
        break;

    }

    return left;
  }
  else
  {
    return left << right;
  }
}

static unsigned short bar(unsigned short left, int right)
{
  long long p95dr7Vq = 8337689885792354693LL;
  unsigned short kIWQ5gEZ = (unsigned short)17244;
  unsigned char QWkTEB9b = (unsigned char)73;
  transparent_crc(QWkTEB9b, "QWkTEB9b", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  p95dr7Vq = (kIWQ5gEZ % p95dr7Vq) & QWkTEB9b;
  transparent_crc(kIWQ5gEZ, "kIWQ5gEZ", 1);
  transparent_crc(p95dr7Vq, "p95dr7Vq", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return left >> right;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int gQrFybCu = 2147483647;
  int zawjLkC4 = 1172054428;
  unsigned RaNc75Zz = 1347296413U;
  int viygm8pV = 367307454;
  unsigned i_MJzLsW = 4055896024U;
  int l_111[1];
  int i;
  for (i = 0; i < 1; i++)
  {
    l_111[i] = 128;
    for (int g = 2; g <= viygm8pV; g++)
    {
      RaNc75Zz += 5 - g;
      i_MJzLsW += g + 4;
      switch (gQrFybCu)
      {
        case 5:
          zawjLkC4 = 1;
          break;

        case 6:
          zawjLkC4 = 2;
          break;

        case 7:
          zawjLkC4 = 3;
          break;

      }

    }

  }

  g_62 = bar(foo(l_111[0], 8), 8);
  printf("g_62 = %d\n", g_62);
  transparent_crc(i_MJzLsW, "i_MJzLsW", 1);
  transparent_crc(viygm8pV, "viygm8pV", 1);
  transparent_crc(RaNc75Zz, "RaNc75Zz", 1);
  transparent_crc(zawjLkC4, "zawjLkC4", 1);
  transparent_crc(gQrFybCu, "gQrFybCu", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

