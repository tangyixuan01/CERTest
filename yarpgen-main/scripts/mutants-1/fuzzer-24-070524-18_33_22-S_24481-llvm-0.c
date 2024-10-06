#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b[10] = {0, 0, 0, 0, 0, 0, 0, 1};
int c;
int e;
void fn1()
{
  if (a)
  {
    fn1();
  }
  for (e = 8; e >= 0; e--)
  {
    c = 2;
    for (; c < 8; c++)
    {
      b[e] = b[c];
    }

    b[7] = b[8];
    b[3] = 0;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short C8wtjJLG = (short)-32768;
  int DV_lBh7z = 2128525166;
  short NYc5XUQ6 = (short)32767;
  for (;;)
  {
    fn1();
    break;
  }

  if (b[1] != 1)
  {
    NYc5XUQ6 = DV_lBh7z || (~C8wtjJLG);
    __builtin_abort();
  }
  transparent_crc(NYc5XUQ6, "NYc5XUQ6", 1);
  transparent_crc(DV_lBh7z, "DV_lBh7z", 1);
  transparent_crc(C8wtjJLG, "C8wtjJLG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

