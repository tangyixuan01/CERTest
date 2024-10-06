#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

unsigned short a;
int b;
int c;
short fn1(unsigned short e)
{
  int wxn9mqB5 = 2147483647;
  int HUTScoEv = 2147483647;
  int sARe71lb = -2147483648;
  for (; wxn9mqB5 < 2; wxn9mqB5 += 2)
  {
    for (sARe71lb = 0; sARe71lb < 1; sARe71lb++)
      if (wxn9mqB5 < 1)
      HUTScoEv = 0;

    for (; HUTScoEv < 1; HUTScoEv++)
      ;

  }

  transparent_crc(sARe71lb, "sARe71lb", 1);
  transparent_crc(HUTScoEv, "HUTScoEv", 1);
  transparent_crc(wxn9mqB5, "wxn9mqB5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (e) ? (a % e) : (0);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  for (c = -20; c; c++)
  {
    b |= fn1(c);
  }

  return 0;
}

