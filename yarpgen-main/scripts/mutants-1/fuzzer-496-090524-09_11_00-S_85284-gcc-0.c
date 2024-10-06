#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

static int p[48];
static int v;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int sWoFPuLl = -2147483648;
  short jSg7G5El = (short)-32768;
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
    sWoFPuLl = 65527 & (++jSg7G5El);
    __builtin_abort();
  }
  transparent_crc(jSg7G5El, "jSg7G5El", 1);
  transparent_crc(sWoFPuLl, "sWoFPuLl", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

