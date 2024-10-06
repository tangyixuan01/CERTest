#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int oJbFnVI5 = 2147483647;
  int Rd6VuFMw = 1337149337;
  unsigned a;
  unsigned b;
  unsigned c = 0;
  for (a = 0; a < 10; a++)
  {
    for (b = 0; b < 2; b++)
    {
      c++;
      Rd6VuFMw = (Rd6VuFMw & 4095) ^ ((Rd6VuFMw ^ oJbFnVI5) & 5);
      if (c < a)
      {
        return 123;
      }
    }

  }

  transparent_crc(Rd6VuFMw, "Rd6VuFMw", 1);
  transparent_crc(oJbFnVI5, "oJbFnVI5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

