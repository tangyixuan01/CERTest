#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int copysign_bug(double x)
{
  int E85N4XaG = 2147483647;
  transparent_crc(E85N4XaG, "E85N4XaG", 1);
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
      switch (E85N4XaG)
        case 111:
        case 222:
        case 44:
        return 0;




      return 3;
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

