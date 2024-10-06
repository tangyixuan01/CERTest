#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c;
int e;
int f;
long long d[32] = {4, 0, 4, 4, 0, 4, 4, 0, 4, 4, 0, 4, 4};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  sl7buiWT = -2147483648;
  int * omHSfVpO = &sl7buiWT;
  unsigned char jCvkaBru = (unsigned char)48;
  for (; a < 6; a++)
  {
    switch (jCvkaBru)
    {
      case 0x95:
        *omHSfVpO = jCvkaBru - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *omHSfVpO = jCvkaBru - 0x80;
        break;

      default:
        *omHSfVpO = 0;
        break;

    }

    b ^= e;
    for (c = 0; c < 2; c++)
    {
      d[a * 6] |= 9;
    }

  }

  if (d[12] != 13)
  {
    __builtin_abort();
  }
  transparent_crc(jCvkaBru, "jCvkaBru", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

