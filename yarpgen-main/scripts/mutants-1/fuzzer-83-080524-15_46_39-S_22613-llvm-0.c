#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a;
int b;
int c;
int d;
int e;
char f[1][3];
void fn1()
{
  char  YJFU3v7V = (signed char)-100;
  char * rYcyD8A_ = &YJFU3v7V;
  int R8CsTFcP = -2147483648;
  int Vgoe9KxB = 1687845093;
  int KfVH26r3 = -2147483648;
  transparent_crc(KfVH26r3, "KfVH26r3", 1);
  transparent_crc(Vgoe9KxB, "Vgoe9KxB", 1);
  transparent_crc(R8CsTFcP, "R8CsTFcP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (d = 0; d < 2; d++)
  {
    f[b][d] = 0;
    for (e = 0; e < 3; e++)
    {
      if (c)
      {
        if (KfVH26r3 && (!R8CsTFcP))
          Vgoe9KxB |= 2 | ((*rYcyD8A_) < 0);
        a--;
      }
      f[0][e] = 1;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  if (f[0][1] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

