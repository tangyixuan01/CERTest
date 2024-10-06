#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int b;
int c;
int d;
int e = 1;
struct S
{
  int f;
};
volatile struct S s;
void foo(int *p)
{
  int * zly8Z2t7 = &e;
  unsigned char U7V8aQFj = (unsigned char)152;
  int i;
  transparent_crc(U7V8aQFj, "U7V8aQFj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < 4; i++)
  {
    int t[2] = {0, 0};
    for (; b < 2; b++)
    {
      d = 0;
      for (; d >= 0; d--)
      {
        c = 0;
      }

      for (; c < 7; c++)
      {
        t[1] ^= 1;
      }

    }

    if (t[1])
    {
      s;
      *p = e;
    }
    for (int hash_i = 0; hash_i < 2; hash_i++)
    {
      switch (U7V8aQFj)
      {
        case 0x95:
          *zly8Z2t7 = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *zly8Z2t7 = 0x00;
          break;

        default:
          *zly8Z2t7 = 0x05;
          break;

      }

      transparent_crc(t[hash_i], "t[hash_i]", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo(&a);
  printf("%d\n", a);
  return 0;
}

