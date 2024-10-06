#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
void fn1()
{
  int  OYkFCXoe = 2147483647;
  int * e9h6HXgV = &OYkFCXoe;
  unsigned char t75Ihjlr = (unsigned char)252;
  char b = 0;
  transparent_crc(t75Ihjlr, "t75Ihjlr", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; b != (-2); b--)
  {
    for (a = 0; a < 1; a++)
    {
      if (((unsigned int) b) > 1)
      {
        return;
      }
    }

    switch (t75Ihjlr)
    {
      case 0x95:
        *e9h6HXgV = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *e9h6HXgV = 0x00;
        break;

      default:
        *e9h6HXgV = 0x05;
        break;

    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  if (a != 0)
  {
    __builtin_abort();
  }
  return 0;
}

