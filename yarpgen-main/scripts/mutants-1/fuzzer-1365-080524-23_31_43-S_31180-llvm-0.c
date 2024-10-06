#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

struct S
{
  int b;
  int c;
  int d;
} e = {20, 0, 0};
int f;
int g;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short xWwsQrIT = (short)32767;
  int GIDgZTs8 = -2147483648;
  int X0U6SMGQ = 916691376;
  int XlfzKGVF = -2147483648;
  struct S h = e;
  for (; f < 4; f++)
  {
    while (!XlfzKGVF)
    {
      GIDgZTs8 = X0U6SMGQ;
      XlfzKGVF = ~(1L << xWwsQrIT);
    }

    g = 0 % h.b;
    h.c = ~h.d;
    h.b = h.c;
  }

  transparent_crc(XlfzKGVF, "XlfzKGVF", 1);
  transparent_crc(X0U6SMGQ, "X0U6SMGQ", 1);
  transparent_crc(GIDgZTs8, "GIDgZTs8", 1);
  transparent_crc(xWwsQrIT, "xWwsQrIT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

