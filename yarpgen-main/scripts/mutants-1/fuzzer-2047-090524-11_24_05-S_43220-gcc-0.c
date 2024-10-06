#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

void * volatile p;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int tjUVv4Ms = 2147483647;
  int O5s3VHo0 = 2147483647;
  int t47j0VIy = 1933636786;
  int n = 0;
  lab:
  ;

  {
    int x[(n % 1000) + 1];
    x[0] = 1;
    x[n % 1000] = 2;
    p = x;
    n++;
  }
  {
    int x[(n % 1000) + 1];
    x[0] = 1;
    x[n % 1000] = 2;
    p = x;
    for (; tjUVv4Ms < 1; tjUVv4Ms++)
      t47j0VIy = ((O5s3VHo0 >= 2) || (1 >> O5s3VHo0)) ? (0) : (O5s3VHo0);

    n++;
  }
  if (n < 1000000)
  {
    goto lab;
  }
  transparent_crc(t47j0VIy, "t47j0VIy", 1);
  transparent_crc(O5s3VHo0, "O5s3VHo0", 1);
  transparent_crc(tjUVv4Ms, "tjUVv4Ms", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

