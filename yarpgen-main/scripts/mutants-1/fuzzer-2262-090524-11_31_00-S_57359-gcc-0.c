#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int  jvwG0UcC = -1182681118;
  int * PMq9s7mx = &jvwG0UcC;
  unsigned char ydGaft5c = (unsigned char)0;
  foo();
  printf("%d\n", u.i);
  transparent_crc(ydGaft5c, "ydGaft5c", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (ydGaft5c)
  {
    case 0x95:
      *PMq9s7mx = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *PMq9s7mx = 0x00;
      break;

    default:
      *PMq9s7mx = 0x05;
      break;

  }

  return 0;
}

