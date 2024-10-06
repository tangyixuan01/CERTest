#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

short a;
void foo(void)
{
  int  vm4BeyuC = -2147483648;
  int * E0O4tZpv = &vm4BeyuC;
  unsigned char YqMsr20U = (unsigned char)255;
  transparent_crc(YqMsr20U, "YqMsr20U", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (a = 0; a >= 0; a++)
  {
    switch (YqMsr20U)
    {
      case 0x95:
        *E0O4tZpv = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *E0O4tZpv = 0x00;
        break;

      default:
        *E0O4tZpv = 0x05;
        break;

    }

    ;
  }

}

extern void foo(void);
int main()
{
  platform_main_begin();
  crc32_gentab();
  if (""['\0'])
  {
    #pragma "Okay"
    __builtin_abort();
  }
  foo();
  return 0;
}

