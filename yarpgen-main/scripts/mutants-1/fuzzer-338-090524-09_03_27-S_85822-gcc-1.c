#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

static const long int TagTypeNumber = 0xffff000000000000ll;
long int x;
void foo(void)
{
  int  muroRvOt = 491045519;
  int * petws81b = &muroRvOt;
  unsigned char UWVpo_KM = (unsigned char)244;
  switch (UWVpo_KM)
  {
    case 0x95:
      *petws81b = UWVpo_KM - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *petws81b = UWVpo_KM - 0x80;
      break;

    default:
      *petws81b = 0;
      break;

  }

  transparent_crc(UWVpo_KM, "UWVpo_KM", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  x = TagTypeNumber + 1;
}

int main(int argc, char **argv)
{
  platform_main_begin();
  crc32_gentab();
  int r0dt1z5F = 2147483647;
  if (argc > 0)
  {
    foo();
  }
  if ((x & TagTypeNumber) == TagTypeNumber)
  {
    unsigned y = (unsigned) x;
    __builtin_printf("v: %u\n", y);
    if (y != 1)
    {
      while (r0dt1z5F != 0)
        ++r0dt1z5F;

      __builtin_abort();
    }
    transparent_crc(y, "y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }
  transparent_crc(r0dt1z5F, "r0dt1z5F", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

