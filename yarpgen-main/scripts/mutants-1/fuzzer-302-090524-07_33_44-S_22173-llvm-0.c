#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b = 1;
char c;
void fn1()
{
  int TVFYxhb6 = -2147483648;
  char WRG8sOEZ = (signed char)120;
  c = a - b;
  TVFYxhb6 = ~((WRG8sOEZ * (-1)) / (~1U));
  transparent_crc(WRG8sOEZ, "WRG8sOEZ", 1);
  transparent_crc(TVFYxhb6, "TVFYxhb6", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (c)
  {
    b = 0;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  for (a = 0; a < 1; a++)
  {
    fn1();
  }

  if (b != 0)
  {
    __builtin_abort();
  }
  return 0;
}

