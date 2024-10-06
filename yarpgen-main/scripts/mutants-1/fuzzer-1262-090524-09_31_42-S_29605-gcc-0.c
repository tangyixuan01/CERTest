#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int value = 0;
void modify(int arg)
{
  short QEBnipP0 = (short)-10234;
  short W85H6aDi = (short)-32768;
  int WhrE7oQS = 1178180460;
  int TzY_tWEH = -2056752667;
  int Iy6QltSr = 651968218;
  if (arg != 42)
  {
    return;
  }
  if (TzY_tWEH != 1)
  {
    Iy6QltSr = QEBnipP0 - 7;
    W85H6aDi = Iy6QltSr * 60694;
    WhrE7oQS = W85H6aDi;
  }
  transparent_crc(Iy6QltSr, "Iy6QltSr", 1);
  transparent_crc(TzY_tWEH, "TzY_tWEH", 1);
  transparent_crc(WhrE7oQS, "WhrE7oQS", 1);
  transparent_crc(W85H6aDi, "W85H6aDi", 1);
  transparent_crc(QEBnipP0, "QEBnipP0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  value = 1;
}

void test(void)
{
  if (value)
  {
    return;
  }
  modify(42);
  value = 0;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  test();
  return value;
}

