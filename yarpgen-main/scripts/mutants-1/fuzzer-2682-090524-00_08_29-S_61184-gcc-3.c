#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet -> insert-if-snippet -> insert-while-snippet

short a;
void foo(void)
{
  int IHzdKxBW = 2038476500;
  char qtLM9WfY = (signed char)-128;
  unsigned g8XfjYil = 4262117441U;
  short u2s4LAJ8 = (short)-5593;
  int zApWtEZK = 2147483647;
  int  vm4BeyuC = -2147483648;
  int * E0O4tZpv = &vm4BeyuC;
  unsigned char YqMsr20U = (unsigned char)255;
  transparent_crc(YqMsr20U, "YqMsr20U", 1);
  transparent_crc(zApWtEZK, "zApWtEZK", 1);
  transparent_crc(u2s4LAJ8, "u2s4LAJ8", 1);
  transparent_crc(g8XfjYil, "g8XfjYil", 1);
  transparent_crc(qtLM9WfY, "qtLM9WfY", 1);
  transparent_crc(IHzdKxBW, "IHzdKxBW", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (a = 0; a >= 0; a++)
  {
    if (zApWtEZK >= (-1936967575))
    {
      int m = ((zApWtEZK / g8XfjYil) / 110000000) ^ (IHzdKxBW & qtLM9WfY);
      short n = qtLM9WfY;
      if (zApWtEZK <= (-1936967575))
        n = u2s4LAJ8;
      zApWtEZK = m;
      qtLM9WfY = ~(n + IHzdKxBW);
      g8XfjYil = -1;
    }
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
  int EZzGo8wJ = -369786806;
  if (""['\0'])
  {
    #pragma "Okay"
    while (EZzGo8wJ)
      ;

    __builtin_abort();
  }
  foo();
  transparent_crc(EZzGo8wJ, "EZzGo8wJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

