#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

void abort(void);
void exit(int);
int t = 100;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int oLOb5YVC = 2147483647;
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
    while (oLOb5YVC)
      ;

  }
  transparent_crc(oLOb5YVC, "oLOb5YVC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  exit(0);
}

