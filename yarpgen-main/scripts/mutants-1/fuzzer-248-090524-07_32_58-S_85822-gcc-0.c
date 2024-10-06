#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

static const long int TagTypeNumber = 0xffff000000000000ll;
long int x;
void foo(void)
{
  x = TagTypeNumber + 1;
}

int main(int argc, char **argv)
{
  platform_main_begin();
  crc32_gentab();
  short SGirzpq4 = (short)4110;
  int vqZ3CNl5 = -305753611;
  short L9_eAgq7 = (short)-12211;
  if (argc > 0)
  {
    foo();
  }
  if ((x & TagTypeNumber) == TagTypeNumber)
  {
    vqZ3CNl5 = ~((2 / L9_eAgq7) & SGirzpq4);
    unsigned y = (unsigned) x;
    __builtin_printf("v: %u\n", y);
    if (y != 1)
    {
      __builtin_abort();
    }
    transparent_crc(y, "y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }
  transparent_crc(L9_eAgq7, "L9_eAgq7", 1);
  transparent_crc(vqZ3CNl5, "vqZ3CNl5", 1);
  transparent_crc(SGirzpq4, "SGirzpq4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

