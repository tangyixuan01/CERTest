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
  int f9Q5E0vZ = 269027293;
  signed corqQ065 = 1;
  long VxSUOXcK = -4026732372213606655LL;
  c[0] = 1;
  for (b = 1; b >= 0; b--)
  {
    e = (*a_ptr = c[b]);
    corqQ065 = corqQ065 << (f9Q5E0vZ / VxSUOXcK);
  }

  c[0] = 0;
  transparent_crc(VxSUOXcK, "VxSUOXcK", 1);
  transparent_crc(corqQ065, "corqQ065", 1);
  transparent_crc(f9Q5E0vZ, "f9Q5E0vZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("checksum = %X\n", a);
}

