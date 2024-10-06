#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet

static int p[48];
static int v;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Rg2ovuDk = -2091476118;
  unsigned TnbNqk7c = 3877121492U;
  int CNhlXH68 = 2147483647;
  volatile unsigned int  Jjaix1Xu = 0U;
  volatile unsigned int * e_E6Lljp = &Jjaix1Xu;
  int TPzobCfq = -2069257980;
  p[32] = 1;
  for (int i = 48; i--;)
  {
    if (p[i])
    {
      while (TnbNqk7c <= 0)
        if (*(&Rg2ovuDk))
        break;

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
        for (TPzobCfq = 0xbad; TPzobCfq >= 0; TPzobCfq--)
        {
          if (TPzobCfq == 1)
            e_E6Lljp[0x708 / 4] = 0xbeefdead;
          for (CNhlXH68 = 1; CNhlXH68 >= 0; CNhlXH68--)
          {
            e_E6Lljp[0x708 / 4] = 0xbadcab;
            e_E6Lljp[0x704 / 4] = CNhlXH68;
          }

        }

      }
    }
  }

  if (v != 2)
  {
    __builtin_abort();
  }
  transparent_crc(TPzobCfq, "TPzobCfq", 1);
  transparent_crc(CNhlXH68, "CNhlXH68", 1);
  transparent_crc(TnbNqk7c, "TnbNqk7c", 1);
  transparent_crc(Rg2ovuDk, "Rg2ovuDk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

