#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  nU3Wt8oD = -2147483648;
  int * frTH0Fn6 = &nU3Wt8oD;
  unsigned char LOywT4S7 = (unsigned char)0;
  unsigned a;
  unsigned b;
  unsigned c = 0;
  for (a = 0; a < 10; a++)
  {
    for (b = 0; b < 2; b++)
    {
      c++;
      if (c < a)
      {
        return 123;
        switch (LOywT4S7)
        {
          case 0x95:
            *frTH0Fn6 = LOywT4S7 - 0x91;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *frTH0Fn6 = LOywT4S7 - 0x80;
            break;

          default:
            *frTH0Fn6 = 0;
            break;

        }

      }
    }

  }

  transparent_crc(LOywT4S7, "LOywT4S7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

