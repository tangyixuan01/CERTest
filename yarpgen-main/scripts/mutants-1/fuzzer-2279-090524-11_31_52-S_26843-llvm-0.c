#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a;
int b[4];
int c;
void fn1()
{
  int CB6TrUzo = -2075031698;
  int eQZsa2pW = -192599243;
  long  Bl7jYdZN = -9223372036854775807LL;
  long * JjKkGNFx = &Bl7jYdZN;
  int WFIG9Q6Z = -439136898;
  b[1] = 1;
  if (a)
  {
    for (a = 1; a < 4; a++)
    {
      b[a] = 0;
      for (; eQZsa2pW <= 5; eQZsa2pW++)
      {
        WFIG9Q6Z = 0;
        for (; WFIG9Q6Z <= 5; WFIG9Q6Z++)
        {
          CB6TrUzo = 1;
          for (; CB6TrUzo <= 5; CB6TrUzo++)
            ;

          *JjKkGNFx = 0;
          if (eQZsa2pW)
            break;
        }

      }

    }

  }
  transparent_crc(WFIG9Q6Z, "WFIG9Q6Z", 1);
  transparent_crc(eQZsa2pW, "eQZsa2pW", 1);
  transparent_crc(CB6TrUzo, "CB6TrUzo", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  a = 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  for (; c < 2; c++)
  {
    fn1();
  }

  if (b[1] != 0)
  {
    __builtin_abort();
  }
  return 0;
}

