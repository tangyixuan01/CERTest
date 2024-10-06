#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int b7IKti9c = -670360351;
  int  tCL58RBA = -2147483648;
  int * cb1UO5Pu = &tCL58RBA;
  int b;
  L:
  b = a;

  if (a <= 0)
  {
    int c = a;
    a = 1;
    if (c)
    {
      goto L;
    }
    *cb1UO5Pu = b7IKti9c;
    transparent_crc(c, "c", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }
  if (b)
  {
    b = a;
    __builtin_abort();
  }
  transparent_crc(b7IKti9c, "b7IKti9c", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

