#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int copysign_bug(double x)
{
  int H8QMDw_u = -2147483648;
  int ZDP5h41d = -356384497;
  int liDYeog7 = -2147483648;
  transparent_crc(liDYeog7, "liDYeog7", 1);
  transparent_crc(ZDP5h41d, "ZDP5h41d", 1);
  transparent_crc(H8QMDw_u, "H8QMDw_u", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((x * 0.5) == x)
  {
    return 1;
  }
  else
  {
    if (copysign(1.0, x) < 0.0)
    {
      return 2;
    }
    else
    {
      return 3;
      liDYeog7 = ZDP5h41d > ((int) (((unsigned int) 0x7fffffff) - ((unsigned int) H8QMDw_u)));
    }
  }
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  double x;
  x = -0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  x = 0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  return 0;
}

