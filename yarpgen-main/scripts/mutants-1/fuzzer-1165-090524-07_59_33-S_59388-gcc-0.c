#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
struct 
{
  unsigned int f : 1;
} b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int PvdNMIn_ = -2147483648;
  int d0qRsBV8 = -2147483648;
  a = (0 < b.f) | b.f;
  switch (PvdNMIn_)
  {
    case 5:
      d0qRsBV8 = 1;
      break;

    case 6:
      d0qRsBV8 = 2;
      break;

    case 7:
      d0qRsBV8 = 3;
      break;

  }

  transparent_crc(d0qRsBV8, "d0qRsBV8", 1);
  transparent_crc(PvdNMIn_, "PvdNMIn_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return a;
}

