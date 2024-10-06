#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

char a;
char b;
int c;
short d;
void fn1(int p1)
{
  short e = 4;
  int f;
  d = 0;
  for (; d <= 0; d++)
  {
    e = 0;
  }

  if (e)
  {
    goto L1;
  }
  L2:
  if (p1)
  {
    a = 9;
    for (; a; ++a)
    {
      f = 5;
      for (; f != 32; ++f)
      {
        c = 8;
      }

      L1:
      if (b)
      {
        goto L2;
      }

    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int lo8nmNQT = -2147483648;
  short bf6j3Ta4 = (short)32767;
  lo8nmNQT = 65527 & (++bf6j3Ta4);
  fn1(1);
  transparent_crc(bf6j3Ta4, "bf6j3Ta4", 1);
  transparent_crc(lo8nmNQT, "lo8nmNQT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

