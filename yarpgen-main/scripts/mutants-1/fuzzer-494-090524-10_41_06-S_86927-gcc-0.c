#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a[28];
int b;
void abort();
int main()
{
  platform_main_begin();
  crc32_gentab();
  int KL9sal1F = -1907747520;
  unsigned char Qp7_z91r = (unsigned char)0;
  int I7jqvFl2 = 2147483647;
  a[4] = 1;
  int c = 1;
  for (; b < 8; b++)
  {
    if (a[b])
    {
      c = 0;
    }
    if (9031239389974324562ULL >= ((-((KL9sal1F && I7jqvFl2) + Qp7_z91r)) ^ (-21096)))
    {
      printf("OK\n");
    }
    else
    {
      printf("FAIL\n");
    }
  }

  transparent_crc(I7jqvFl2, "I7jqvFl2", 1);
  transparent_crc(Qp7_z91r, "Qp7_z91r", 1);
  transparent_crc(KL9sal1F, "KL9sal1F", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (c)
  {
    abort();
  }
}

