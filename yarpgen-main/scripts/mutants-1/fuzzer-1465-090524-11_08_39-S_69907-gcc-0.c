#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

void *mmap();
void foo(unsigned *p1, unsigned short *p2)
{
  int XNb8as0y = -2147483648;
  char ZK4d9n6I = (signed char)-86;
  char DWYceudp = (signed char)-128;
  int n;
  transparent_crc(DWYceudp, "DWYceudp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  DWYceudp = ZK4d9n6I || ((ZK4d9n6I > (7 >> ZK4d9n6I)) < XNb8as0y);
  transparent_crc(ZK4d9n6I, "ZK4d9n6I", 1);
  transparent_crc(XNb8as0y, "XNb8as0y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (n = 0; n < 320; n++)
  {
    p1[n] = p2[n * 2];
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  void *x;
  long a;
  x = mmap(4432, 65536, 2, 2 | 32, 1, 0);
  a = 65536 - (((2 * 320) - 1) * (sizeof(short)));
  foo(x, (unsigned short *) (((char *) x) + a));
}

