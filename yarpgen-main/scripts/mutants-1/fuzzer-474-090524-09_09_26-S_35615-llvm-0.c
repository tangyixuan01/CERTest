#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
union a
{
  int b;
  long c;
} e[] = {{0}, {8}};
int d = 0;
int *f = &e[1].b;
long *g = &e[1].c;
void h()
{
  for (; d < 2; d++)
  {
    *g = 0;
    if (*f)
    {
      return;
    }
  }

  return;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int he6nRLNm = 1692113331;
  int Pw7KVNnR = 2147483647;
  char VQwRL0s5 = (signed char)-36;
  h();
  for (VQwRL0s5 = 0; VQwRL0s5 < 20; VQwRL0s5++)
    he6nRLNm ^= Pw7KVNnR;

  transparent_crc(VQwRL0s5, "VQwRL0s5", 1);
  transparent_crc(Pw7KVNnR, "Pw7KVNnR", 1);
  transparent_crc(he6nRLNm, "he6nRLNm", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", d);
}

