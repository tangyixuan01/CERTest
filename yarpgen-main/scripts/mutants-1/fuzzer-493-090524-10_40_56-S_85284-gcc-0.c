#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

static int p[48];
static int v;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int gZJ_7tmf = -2084700672;
  char nNMaXhV8 = (signed char)-128;
  char atGfXesN = (signed char)115;
  unsigned rjTsVePh = 2440842957U;
  p[32] = 1;
  for (int i = 48; i--;)
  {
    if (p[i])
    {
      if ((i > 39) || ((i > 7) && ((i & 7) > 2)))
      {
        break;
      }
      if (i < 8)
      {
        v = 1;
      }
      else
      {
        if (!(i & 1))
        {
          v = 2;
        }
        else
        {
          v = 3;
        }
      }
    }
  }

  if (v != 2)
  {
    __builtin_abort();
  }
  transparent_crc(rjTsVePh, "rjTsVePh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((rjTsVePh < 1027) && gZJ_7tmf)
    atGfXesN = ((1958 | nNMaXhV8) + 15) & 15;
  transparent_crc(atGfXesN, "atGfXesN", 1);
  transparent_crc(nNMaXhV8, "nNMaXhV8", 1);
  transparent_crc(gZJ_7tmf, "gZJ_7tmf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

