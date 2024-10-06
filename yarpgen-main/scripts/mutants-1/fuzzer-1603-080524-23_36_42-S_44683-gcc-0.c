#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int copysign_bug(double x)
{
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
    }
  }
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int CMF4qL2p = 482837779;
  for (CMF4qL2p = 0; CMF4qL2p;)
    ;

  double x;
  x = -0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  x = 0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  transparent_crc(CMF4qL2p, "CMF4qL2p", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

