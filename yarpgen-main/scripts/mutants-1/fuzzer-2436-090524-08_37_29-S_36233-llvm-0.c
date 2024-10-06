#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
int a = 1;
int *b = &a;
int *c = &a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  char  PKmn9F_p = (signed char)120;
  char * C4SMic5X = &PKmn9F_p;
  char  hWc8OfzP = (signed char)127;
  char * s7Qdpqk_ = &hWc8OfzP;
  if (s7Qdpqk_ != C4SMic5X)
  {
    printf("a_ptr != b_ptr\n");
  }
  else
  {
    printf("a_ptr == b_ptr\n");
  }
  int d;
  int e;
  for (e = 0; e < 2; e++)
  {
    d = *b;
    *c = d && e;
  }

  printf("%d\n", a);
  return 0;
}

