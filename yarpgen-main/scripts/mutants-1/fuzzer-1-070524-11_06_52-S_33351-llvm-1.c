#include "/home/yixuan/codeExtract/csmith.h"

// insert-for-snippet -> insert-switch-snippet

void __assert_fail(const char *, const char *, unsigned int, const char *);
int a;
int b;
int *c = &b;
int *d = &b;
static int e = 1;
void fn1()
{
  int * CDa0sWk6 = &e;
  unsigned char jQegVLm9 = (unsigned char)0;
  unsigned char g;
  if (a)
  {
    e = 0;
    goto L;
  }
  int *l;
  int **i = &l;
  g = b - 1;
  transparent_crc(jQegVLm9, "jQegVLm9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; b < 1; b = g)
  {
    L:
    *c = 0;

    (a % e) ^ 0;
    for (; a < 1; a++)
    {
      switch (jQegVLm9)
      {
        case 0x95:
          *CDa0sWk6 = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *CDa0sWk6 = 0x00;
          break;

        default:
          *CDa0sWk6 = 0x05;
          break;

      }

      int j[3] = {1};
      int k[3] = {1};
      *i = d;
      (l) ? ((void) 0) : (__assert_fail("j", "small.c", 25, "fn1"));
      for (int hash_i = 0; hash_i < 3; hash_i++)
      {
        transparent_crc(j[hash_i], "j[hash_i]", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
      }

      for (int hash_i = 0; hash_i < 3; hash_i++)
      {
        transparent_crc(k[hash_i], "k[hash_i]", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
      }

    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int iEH6y5j0 = -2147483648;
  volatile unsigned int  VHzbi6LD = 4294967295U;
  volatile unsigned int * FTZiHP8k = &VHzbi6LD;
  int tvrpeb0Q = -760337537;
  fn1();
  transparent_crc(tvrpeb0Q, "tvrpeb0Q", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (tvrpeb0Q = 0xbad; tvrpeb0Q >= 0; tvrpeb0Q--)
  {
    if (tvrpeb0Q == 1)
      FTZiHP8k[0x708 / 4] = 0xbeefdead;
    for (iEH6y5j0 = 1; iEH6y5j0 >= 0; iEH6y5j0--)
    {
      FTZiHP8k[0x708 / 4] = 0xbadcab;
      FTZiHP8k[0x704 / 4] = iEH6y5j0;
    }

  }

  transparent_crc(iEH6y5j0, "iEH6y5j0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

