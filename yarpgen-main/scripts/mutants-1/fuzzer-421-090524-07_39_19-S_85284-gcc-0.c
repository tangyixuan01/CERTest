#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

static int p[48];
static int v;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int VwCeztIU = 2147483647;
  int bf4HMzjC = 2147483647;
  int L_PIe78D = -722912380;
  int vzaZMDnp = -2147483648;
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
        if (L_PIe78D)
        {
          VwCeztIU = (vzaZMDnp++) && bf4HMzjC;
          L_PIe78D = bf4HMzjC;
        }
      }
    }
  }

  if (v != 2)
  {
    __builtin_abort();
  }
  transparent_crc(vzaZMDnp, "vzaZMDnp", 1);
  transparent_crc(L_PIe78D, "L_PIe78D", 1);
  transparent_crc(bf4HMzjC, "bf4HMzjC", 1);
  transparent_crc(VwCeztIU, "VwCeztIU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

