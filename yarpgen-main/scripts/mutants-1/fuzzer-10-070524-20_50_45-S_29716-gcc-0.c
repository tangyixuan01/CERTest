#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

void abort(void);
void exit(int);
int t = 100;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int GivyxcUQ = -437657206;
  char  YlepajJE = (signed char)-128;
  char * dqKUBOlN = &YlepajJE;
  unsigned short Pyf1CXzH = (unsigned short)4764;
  int a[] = {0, 1, 2};
  int *i = &a[(sizeof(a)) / (sizeof(*a))];
  i--;
  while (i > a)
  {
    i[0] = 1 + t, i--;
  }

  if (a[1] != (1 + t))
  {
    abort();
  }
  if (GivyxcUQ - Pyf1CXzH)
    *dqKUBOlN = 0;
  transparent_crc(Pyf1CXzH, "Pyf1CXzH", 1);
  transparent_crc(GivyxcUQ, "GivyxcUQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  exit(0);
}

