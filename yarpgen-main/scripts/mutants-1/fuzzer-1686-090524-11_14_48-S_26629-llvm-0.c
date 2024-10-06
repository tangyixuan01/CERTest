#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

struct S
{
  unsigned f0 : 13;
  int f1 : 19;
  int f2 : 27;
  int f3 : 8;
} a;
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  Tp9MCrJN = -2147483648;
  int * quLjFWvR = &Tp9MCrJN;
  unsigned char MQvsynGg = (unsigned char)0;
  struct S d = {4, 5, 10878, 1};
  for (; b < 7; b++)
  {
    int e = d.f1 | (d.f0 && (5 % d.f3));
    int f = c - d.f0;
    d.f2 = e;
    d.f0 = f;
    transparent_crc(e, "e", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    switch (MQvsynGg)
    {
      case 0x95:
        *quLjFWvR = MQvsynGg - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *quLjFWvR = MQvsynGg - 0x80;
        break;

      default:
        *quLjFWvR = 0;
        break;

    }

    transparent_crc(f, "f", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  a = d;
  transparent_crc(MQvsynGg, "MQvsynGg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

