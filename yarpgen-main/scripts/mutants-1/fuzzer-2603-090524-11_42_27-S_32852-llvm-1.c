#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet

int a;
void foo()
{
  if ((a >= 0) && (a > 0))
  {
    __builtin_printf("0\n");
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned  rlNfHW8d = 3715284925U;
  unsigned * Ml8NDjtV = &rlNfHW8d;
  int  K_Xj0xLU = -1350115841;
  int * xmdQYkvw = &K_Xj0xLU;
  unsigned char yec4mzI9 = (unsigned char)137;
  switch (yec4mzI9)
  {
    case 0x95:
      *xmdQYkvw = yec4mzI9 - 0x91;
      break;

    case 0x80:

    if ((*Ml8NDjtV) == 0)
    {
      if (__builtin_dynamic_object_size(Ml8NDjtV, 0) != (sizeof(unsigned)))
        __builtin_abort();
      Ml8NDjtV--;
    }
    case 0x81:

    case 0x82:
      *xmdQYkvw = yec4mzI9 - 0x80;
      break;

    default:
      *xmdQYkvw = 0;
      break;

  }

  foo();
  transparent_crc(yec4mzI9, "yec4mzI9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

