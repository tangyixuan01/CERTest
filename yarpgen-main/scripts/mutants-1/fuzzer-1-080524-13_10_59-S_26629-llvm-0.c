#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

struct S
{
  unsigned f0 : 13;
  int f1 : 19;
  int f2 : 27;
  int f3 : 8;
} a;
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  size_t djM7_pfP = (_Bool)0;
  char  g3R8Q4GM = (signed char)-125;
  char * cwvYsQaD = &g3R8Q4GM;
  if ((cwvYsQaD + djM7_pfP) < cwvYsQaD)
    printf("true\n");
  else
    printf("false\n");
  struct S d = {4, 5, 10878, 1};
  for (; b < 7; b++)
  {
    int e = d.f1 | (d.f0 && (5 % d.f3));
    int f = c - d.f0;
    d.f2 = e;
    d.f0 = f;
    transparent_crc(e, "e", 1);
    transparent_crc(f, "f", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  a = d;
  transparent_crc(djM7_pfP, "djM7_pfP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

