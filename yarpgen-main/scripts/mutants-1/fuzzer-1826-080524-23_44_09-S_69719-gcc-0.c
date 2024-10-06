#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int b;
int c = 1;
int e;
int f;
int a[6][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 1, 0, 0, 0}};
void fn1()
{
  int d;
  for (b = 0; b < 5; b++)
  {
    for (d = 4; d; d--)
    {
      a[c + 1][b] = a[d + 1][d];
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned char z51M0hIK = (unsigned char)0;
  int wbTpu2QJ = 689247663;
  int v8fT573B = -2147483648;
  unsigned char YmxGTXLn = (unsigned char)255;
  fn1();
  if (a[2][1] != 0)
  {
    __builtin_abort();
    if (YmxGTXLn && wbTpu2QJ)
      v8fT573B = z51M0hIK;
  }
  transparent_crc(YmxGTXLn, "YmxGTXLn", 1);
  transparent_crc(v8fT573B, "v8fT573B", 1);
  transparent_crc(wbTpu2QJ, "wbTpu2QJ", 1);
  transparent_crc(z51M0hIK, "z51M0hIK", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

