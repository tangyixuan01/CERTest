#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

void __assert_fail(const char *, const char *, unsigned int, const char *);
int a;
int b;
int *c = &b;
int *d = &b;
static int e = 1;
void fn1()
{
  int * WqlzuMpK = &e;
  unsigned char PMhuJYey = (unsigned char)67;
  unsigned char g;
  if (a)
  {
    e = 0;
    goto L;
  }
  int *l;
  int **i = &l;
  g = b - 1;
  switch (PMhuJYey)
  {
    case 0x95:
      *WqlzuMpK = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *WqlzuMpK = 0x00;
      break;

    default:
      *WqlzuMpK = 0x05;
      break;

  }

  transparent_crc(PMhuJYey, "PMhuJYey", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; b < 1; b = g)
  {
    L:
    *c = 0;

    (a % e) ^ 0;
    for (; a < 1; a++)
    {
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
  fn1();
  return 0;
}

