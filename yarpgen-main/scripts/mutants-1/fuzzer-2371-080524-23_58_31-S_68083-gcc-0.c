#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a = 2;
int b = 1;
int c = 1;
int fn1()
{
  int d;
  for (; a; a--)
  {
    for (d = 0; d < 4; d++)
    {
      int k;
      if (c < 1)
      {
        if (k)
        {
          c = 0;
        }
      }
      if (b)
      {
        continue;
      }
      return 0;
    }

    b = !1;
  }

  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * D7CM3G_U = &a;
  unsigned char EqlQbJ8P = (unsigned char)174;
  fn1();
  if (a != 1)
  {
    __builtin_abort();
    switch (EqlQbJ8P)
    {
      case 0x95:
        *D7CM3G_U = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *D7CM3G_U = 0x00;
        break;

      default:
        *D7CM3G_U = 0x05;
        break;

    }

  }
  transparent_crc(EqlQbJ8P, "EqlQbJ8P", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

