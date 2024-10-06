#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
long a = 68;
int b;
int d;
int e;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int vS_t09Bh = -2147483648;
  short GcB_68Va = (short)-1488;
  int JZiEfu5N = -2147483648;
  int Zr41PQ2i = -2147483648;
  volatile int gTdQh7ra = 216506932;
  for (; vS_t09Bh >= 0; vS_t09Bh--)
  {
    GcB_68Va = 0;
    for (; GcB_68Va <= 3; GcB_68Va++)
    {
      Zr41PQ2i = 0;
      for (; Zr41PQ2i <= 3; Zr41PQ2i++)
        gTdQh7ra &= 5;

    }

    if (JZiEfu5N)
      break;
  }

  for (; d <= 6; d++)
  {
    b = 0;
    for (; b <= 6; b++)
    {
      int c = a;
      e = ((c >= 32) || (d > (647 >> c))) ? (d) : (0);
      transparent_crc(c, "c", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    }

  }

  transparent_crc(gTdQh7ra, "gTdQh7ra", 1);
  transparent_crc(Zr41PQ2i, "Zr41PQ2i", 1);
  transparent_crc(JZiEfu5N, "JZiEfu5N", 1);
  transparent_crc(GcB_68Va, "GcB_68Va", 1);
  transparent_crc(vS_t09Bh, "vS_t09Bh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", e);
}

