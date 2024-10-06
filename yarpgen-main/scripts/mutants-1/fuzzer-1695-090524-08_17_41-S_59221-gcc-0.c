#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a = 1;
int b;
int d;
short e;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int m71dMAZC = 2147483647;
  int KxB8aiqv = -172689655;
  int WOzj9YSG = 1429156407;
  int AkqCtI7D = -55611816;
  for (; b; b++)
  {
    ;
  }

  short f = a;
  int g = 15;
  e = (f) ? (f) : (1 << g);
  if (WOzj9YSG)
  {
    WOzj9YSG = m71dMAZC;
    L2:
    KxB8aiqv = 0;

    L1:
    AkqCtI7D = ~(m71dMAZC | WOzj9YSG);

    if (!AkqCtI7D)
      goto L2;
  }
  int h = e;
  d = (h == 83647) ? (0) : (h);
  if (d != 1)
  {
    __builtin_abort();
  }
  transparent_crc(AkqCtI7D, "AkqCtI7D", 1);
  transparent_crc(WOzj9YSG, "WOzj9YSG", 1);
  transparent_crc(KxB8aiqv, "KxB8aiqv", 1);
  transparent_crc(m71dMAZC, "m71dMAZC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

