#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

short a;
short b[1];
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned xJa6LhVt = 1327248776U;
  int T1YweQoU = 929540971;
  int Z4dzSQyj = 1157706643;
  unsigned short c = ~a;
  if (a < c)
  {
    c = a;
    a = ~a;
  }
  if (a)
  {
    a = b[c];
    for (Z4dzSQyj = 0; Z4dzSQyj < 1; Z4dzSQyj++)
    {
      xJa6LhVt = (xJa6LhVt ^ xJa6LhVt) ^ 40;
      xJa6LhVt;
      if (T1YweQoU)
        ;
      printf("%X\n", xJa6LhVt);
    }

  }
  transparent_crc(Z4dzSQyj, "Z4dzSQyj", 1);
  transparent_crc(T1YweQoU, "T1YweQoU", 1);
  transparent_crc(xJa6LhVt, "xJa6LhVt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

