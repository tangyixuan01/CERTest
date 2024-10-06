#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  char  QGYnHCrh = (signed char)-122;
  char * jQ_zuymV = &QGYnHCrh;
  float  myhG52tU = 3.4028234663852886e+38;
  float * DQy48oML = &myhG52tU;
  for (; i <= 1; i++)
  {
    int *j;
    int *k = &u.i;
    *(*ppll) = ll;
    *k = 0;
    if ((*DQy48oML) > 0.0)
      jQ_zuymV = "abc";
    j = *ppa;
    ia[0][0] = *j;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo();
  printf("%d\n", u.i);
  return 0;
}

