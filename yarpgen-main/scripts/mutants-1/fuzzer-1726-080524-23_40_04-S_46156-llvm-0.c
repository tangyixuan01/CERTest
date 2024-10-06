#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a = 0;
int e = 0;
int b = 0;
short c[2] = {0, 0};
int *a_ptr = &a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * lHIjcqPF = &e;
  int YmBeVSht = 2147483647;
  c[0] = 1;
  for (b = 1; b >= 0; b--)
  {
    *lHIjcqPF = YmBeVSht;
    e = (*a_ptr = c[b]);
  }

  c[0] = 0;
  transparent_crc(YmBeVSht, "YmBeVSht", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("checksum = %X\n", a);
}

