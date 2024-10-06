#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

struct a
{
  int b;
} d;
int c = 3;
int e;
char f;
void g(int j);
struct a h()
{
  return d;
}

void i()
{
  int EX09Imk7 = 2147483647;
  int Xl1VEMRZ = 1749497049;
  int GT9wS_dA = 1479227605;
  transparent_crc(GT9wS_dA, "GT9wS_dA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (EX09Imk7)
    GT9wS_dA |= Xl1VEMRZ;
  transparent_crc(Xl1VEMRZ, "Xl1VEMRZ", 1);
  transparent_crc(EX09Imk7, "EX09Imk7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  g(0);
}

void g(int j)
{
  e = 27;
  for (; e != 3; e = e - 4)
  {
    int *k = &c;
    {
      long l;
      if (*k)
      {
        *k |= j;
      }
      else
      {
        break;
      }
      f = 0;
      for (; f;)
      {
        h();
      }

    }
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  i();
  printf("%d\n", e);
}

