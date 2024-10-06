#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  g(0);
}

void g(int j)
{
  int nEqMIRG8 = -419277981;
  int k0JVws6C = -1065287584;
  int EqwZOKWJ = -1903366885;
  e = 27;
  transparent_crc(EqwZOKWJ, "EqwZOKWJ", 1);
  transparent_crc(k0JVws6C, "k0JVws6C", 1);
  transparent_crc(nEqMIRG8, "nEqMIRG8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
        for (; k0JVws6C;)
          printf("index = [%d][%d][%d]\n", nEqMIRG8, EqwZOKWJ, k0JVws6C);

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

