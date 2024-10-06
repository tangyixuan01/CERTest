#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int c;
int d;
int e;
char f[1][3];
void fn1()
{
  for (d = 0; d < 2; d++)
  {
    f[b][d] = 0;
    for (e = 0; e < 3; e++)
    {
      if (c)
      {
        a--;
      }
      f[0][e] = 1;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short wD5fn6eM = (short)-32768;
  short nwofWKOR = (short)-2358;
  char m5XVKb8j = (signed char)-40;
  int GdbRDNW0 = 2147483647;
  char vsn5ReQP = (signed char)-128;
  short UTLxCWo7 = (short)32767;
  fn1();
  if (f[0][1] != 1)
  {
    __builtin_abort();
  }
  vsn5ReQP ^= (GdbRDNW0 &= (wD5fn6eM--) + (m5XVKb8j && (nwofWKOR == (m5XVKb8j = UTLxCWo7))));
  transparent_crc(UTLxCWo7, "UTLxCWo7", 1);
  transparent_crc(vsn5ReQP, "vsn5ReQP", 1);
  transparent_crc(GdbRDNW0, "GdbRDNW0", 1);
  transparent_crc(m5XVKb8j, "m5XVKb8j", 1);
  transparent_crc(nwofWKOR, "nwofWKOR", 1);
  transparent_crc(wD5fn6eM, "wD5fn6eM", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

