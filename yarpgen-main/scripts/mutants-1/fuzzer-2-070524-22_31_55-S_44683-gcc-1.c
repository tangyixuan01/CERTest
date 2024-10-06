#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-assignment-snippet

int copysign_bug(double x)
{
  char a_KO2UQe = (signed char)-128;
  char vrHmDWKk = (signed char)-84;
  transparent_crc(vrHmDWKk, "vrHmDWKk", 1);
  transparent_crc(a_KO2UQe, "a_KO2UQe", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((x * 0.5) == x)
  {
    return 1;
  }
  else
  {
    vrHmDWKk = ((1958 | a_KO2UQe) + 15) & 15;
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
  int  OR2aTXw8 = 2147483647;
  int * QEm1gDr7 = &OR2aTXw8;
  int Unohvrw3 = -2147483648;
  double x;
  x = -0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  x = 0.0;
  if (*QEm1gDr7)
    Unohvrw3 = 0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  transparent_crc(Unohvrw3, "Unohvrw3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

