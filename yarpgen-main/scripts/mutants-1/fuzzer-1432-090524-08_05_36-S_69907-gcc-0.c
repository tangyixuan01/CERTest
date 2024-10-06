#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

void *mmap();
void foo(unsigned *p1, unsigned short *p2)
{
  int n;
  for (n = 0; n < 320; n++)
  {
    p1[n] = p2[n * 2];
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short NB_VEfWp = (short)32767;
  int VsMut7Xo = 1425247945;
  short d5JnwIPL = (short)-7787;
  int Jf8WszAH = -2042252506;
  int Bx8ISa69 = 2147483647;
  void *x;
  for (; Jf8WszAH != 21; ++Jf8WszAH)
  {
    Bx8ISa69 &= VsMut7Xo;
    d5JnwIPL = NB_VEfWp - 6;
    VsMut7Xo = d5JnwIPL;
  }

  long a;
  x = mmap(4432, 65536, 2, 2 | 32, 1, 0);
  a = 65536 - (((2 * 320) - 1) * (sizeof(short)));
  transparent_crc(Bx8ISa69, "Bx8ISa69", 1);
  transparent_crc(Jf8WszAH, "Jf8WszAH", 1);
  transparent_crc(d5JnwIPL, "d5JnwIPL", 1);
  transparent_crc(VsMut7Xo, "VsMut7Xo", 1);
  transparent_crc(NB_VEfWp, "NB_VEfWp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  foo(x, (unsigned short *) (((char *) x) + a));
}

