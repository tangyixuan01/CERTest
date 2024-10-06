#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-for-snippet

int a;
int b;
int c;
int d[3][1];
int e;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int PC2OuByh = 304466375;
  int  m7d5OA2i = -84260914;
  int * volatile qS91Tw2_ = &m7d5OA2i;
  int u6B_NQ3c = -2147483648;
  unsigned  KZ7DQrnt = 4294967295U;
  unsigned * z18yAbSp = &KZ7DQrnt;
  int f = 1;
  int g;
  for (e = 0; e < 3; e++)
  {
    if (f)
    {
      c--;
    }
    for (g = 0; g < 1; g++)
    {
      if (b && a)
      {
        return 0;
      }
      f = 0;
      if ((*z18yAbSp) == 0)
      {
        if (__builtin_dynamic_object_size(z18yAbSp, 0) != (sizeof(unsigned)))
          __builtin_abort();
        z18yAbSp--;
        for (; PC2OuByh; PC2OuByh--)
        {
          *qS91Tw2_ = 1;
          u6B_NQ3c |= 4;
        }

      }
      d[e][g] = 1;
    }

  }

  transparent_crc(u6B_NQ3c, "u6B_NQ3c", 1);
  transparent_crc(PC2OuByh, "PC2OuByh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

