#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-for-snippet

int a[6];
int b;
int c = 226;
int d;
int e;
int f;
char g;
void fn1(int p1)
{
  char DdU31SPR = (signed char)-128;
  short ZMsdEDIY = (short)17853;
  int kgr3izls = 2147483647;
  char j7edS16J = (signed char)127;
  char MUcRbSrT = (signed char)-94;
  if (MUcRbSrT)
    kgr3izls = ZMsdEDIY | j7edS16J;
  for (; DdU31SPR >= 0; DdU31SPR--)
    ;

  transparent_crc(MUcRbSrT, "MUcRbSrT", 1);
  transparent_crc(j7edS16J, "j7edS16J", 1);
  transparent_crc(kgr3izls, "kgr3izls", 1);
  transparent_crc(ZMsdEDIY, "ZMsdEDIY", 1);
  transparent_crc(DdU31SPR, "DdU31SPR", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  b = a[p1];
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a[0] = 1;
  for (f = 0; f < 9; f++)
  {
    char h = c;
    int i = 1;
    g = (h < 0) ? (h) : (h >> i);
    e = g;
    for (d = 1; d; d = 0)
    {
      ;
    }

    transparent_crc(h, "h", 1);
    transparent_crc(i, "i", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  fn1((g >> 8) & 1);
  if (b != 0)
  {
    __builtin_abort();
  }
  return 0;
}

