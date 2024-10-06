#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int value = 0;
void modify(int arg)
{
  if (arg != 42)
  {
    return;
  }
  value = 1;
}

void test(void)
{
  int kVaAuZzn = 519676253;
  char xnB5O39_ = (signed char)38;
  unsigned char Z0gBTAvE = (unsigned char)148;
  short Ebu3kjnS = (short)7310;
  if (value)
  {
    if (((Z0gBTAvE > 254) || (Ebu3kjnS > (-2))) || (!xnB5O39_))
      if (kVaAuZzn != 1)
      __builtin_abort();
    return;
  }
  modify(42);
  transparent_crc(Ebu3kjnS, "Ebu3kjnS", 1);
  transparent_crc(Z0gBTAvE, "Z0gBTAvE", 1);
  transparent_crc(xnB5O39_, "xnB5O39_", 1);
  transparent_crc(kVaAuZzn, "kVaAuZzn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  value = 0;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  test();
  return value;
}

