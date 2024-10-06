#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a = 4;
int c;
int d = 10;
unsigned char b = 255;
void fn1()
{
  int MUwya8nb = 2147483647;
  unsigned int _tTUcuoW = 4193429309U;
  unsigned VDvIqxW_ = 4107511305U;
  int h4u7Dp3A = 2147483647;
  unsigned short v_Nec32n = (unsigned short)64954;
  short e;
  int f = -1;
  char g = a;
  transparent_crc(v_Nec32n, "v_Nec32n", 1);
  transparent_crc(h4u7Dp3A, "h4u7Dp3A", 1);
  transparent_crc(VDvIqxW_, "VDvIqxW_", 1);
  transparent_crc(_tTUcuoW, "_tTUcuoW", 1);
  transparent_crc(MUwya8nb, "MUwya8nb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; c < 1; c++)
  {
    short h;
    int i;
    char j;
    if (d)
    {
      h = (i = f);
    }
    j = b;
    e = ~((~f) || b);
    b = ~((~j) | ((i ^ b) && h));
    if (((b > 254) || (e > (-2))) || (!g))
    {
      if (f != 1)
      {
        for (int ii_0 = 0; ii_0 < 20; ++ii_0)
          for (int ii_1 = 0; ii_1 < 10; ++ii_1)
          VDvIqxW_ = (((_tTUcuoW) ? (v_Nec32n >> (h4u7Dp3A - 518868145U)) : (MUwya8nb)) < (1887837879 || 0)) ? ((_tTUcuoW) ? (v_Nec32n >> (h4u7Dp3A - 518868145U)) : (MUwya8nb)) : (1887837879 || 0);


        __builtin_abort();
      }
    }
    f = i;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  return 0;
}

