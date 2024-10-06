#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
union 
{
  int i;
  long long ll;
} u;
unsigned int i;
int a;
int *pa = &a;
int **ppa = &pa;
int ia[1][1];
long long *la[][1][1] = {{}, {}, {}, {}, 0, &u.ll};
long long **ppll = &la[4][1][0];
long long ll = 1;
void foo()
{
  for (; i <= 1; i++)
  {
    int *j;
    int *k = &u.i;
    *(*ppll) = ll;
    *k = 0;
    j = *ppa;
    ia[0][0] = *j;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  volatile short Unw0X3GC = (short)-32768;
  int BeLu_iRx = 2147483647;
  short bUoGt1Dq = (short)32767;
  int qXYecnjG = 2147483647;
  int Ar3IBPK_ = -1579851536;
  foo();
  printf("%d\n", u.i);
  transparent_crc(Ar3IBPK_, "Ar3IBPK_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  Ar3IBPK_ = (Unw0X3GC | 1) && ((bUoGt1Dq ^ qXYecnjG) | BeLu_iRx);
  transparent_crc(qXYecnjG, "qXYecnjG", 1);
  transparent_crc(bUoGt1Dq, "bUoGt1Dq", 1);
  transparent_crc(BeLu_iRx, "BeLu_iRx", 1);
  transparent_crc(Unw0X3GC, "Unw0X3GC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

