#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
union U
{
  int f1;
  int f2;
} a = {1};
static int foo(union U p)
{
  for (a.f2 = 0; a.f2 < 1; a.f2++)
  {
    if (p.f2)
    {
      break;
    }
  }

  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned int _2Z1lyuT = 0U;
  foo(a);
  _2Z1lyuT = (1 < (~_2Z1lyuT)) ? (1) : (~_2Z1lyuT);
  printf("%d\n", a.f1);
  transparent_crc(_2Z1lyuT, "_2Z1lyuT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

