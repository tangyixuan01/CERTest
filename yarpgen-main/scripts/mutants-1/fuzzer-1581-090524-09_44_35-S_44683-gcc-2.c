#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet -> insert-switch-snippet

int copysign_bug(double x)
{
  int cY7oQlh4 = 1308210135;
  unsigned Y8FgX2AH = 268609511U;
  unsigned fVRSPFL0 = 0U;
  int E85N4XaG = 2147483647;
  transparent_crc(E85N4XaG, "E85N4XaG", 1);
  transparent_crc(fVRSPFL0, "fVRSPFL0", 1);
  transparent_crc(Y8FgX2AH, "Y8FgX2AH", 1);
  transparent_crc(cY7oQlh4, "cY7oQlh4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((x * 0.5) == x)
  {
    return 1;
  }
  else
  {
    if (copysign(1.0, x) < 0.0)
    {
      if (fVRSPFL0 >= 4294967295)
        __builtin_printf("%d\n", Y8FgX2AH);
      return 2;
      switch (cY7oQlh4)
        case 111:
        case 222:
        case 44:
        return 0;




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

