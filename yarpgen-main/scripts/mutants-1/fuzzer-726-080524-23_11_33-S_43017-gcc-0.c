#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

signed char foo(unsigned char c2)
{
  int VTAcBqGl = 2147483647;
  int BUPkzJN0 = 2147483647;
  signed char c2_22;
  if ((c2 <= 63) || (c2 == 127))
  {
    goto bb43;
  }
  else
  {
    switch (VTAcBqGl)
    {
      case 5:
        BUPkzJN0 = 1;
        break;

      case 6:
        BUPkzJN0 = 2;
        break;

      case 7:
        BUPkzJN0 = 3;
        break;

    }

    goto bb20;
  }
  bb20:
  if (c2 > 252)
  {
    goto bb43;
  }
  else
  {
    goto bb21;
  }

  bb21:
  ;

  bb24:
  c2_22 = (signed char) c2;

  if (c2_22 >= 0)
  {
    goto bb25;
  }
  else
  {
    goto bb26;
  }
  bb25:
  c2 = (unsigned char) (c2_22 - 64);

  goto bb27;
  bb26:
  c2 = (unsigned char) (c2_22 - 65);

  bb27:
  if (c2 <= 93)
  {
    goto bb28;
  }
  else
  {
    goto bb29;
  }

  bb28:
  c2 = c2 + 33;

  goto bb30;
  bb29:
  c2 = (unsigned char) (((signed char) c2) - 61);

  bb30:
  return c2;

  transparent_crc(BUPkzJN0, "BUPkzJN0", 1);
  transparent_crc(VTAcBqGl, "VTAcBqGl", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  bb43:
  return -1;

}

extern void abort(void);
int main()
{
  platform_main_begin();
  crc32_gentab();
  signed char res[256] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, -1, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, -1, -1, -1};
  unsigned int c;
  for (c = 0; c <= 255; ++c)
  {
    if (foo(c) != res[c])
    {
      abort();
    }
  }

  return 0;
}

