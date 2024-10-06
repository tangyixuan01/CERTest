#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a[3];
int b;
int c;
int e()
{
  if (!c)
  {
    for (b = 0; b < 3; b++)
    {
      for (c = 0; c < 3; c++)
      {
        a[c] ^= 1;
      }

    }

    return -1;
  }
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int poJF9ZNc = 1057473432;
  int sVG1Ign2 = -1499007224;
  int eEdAG4rf = -2147483648;
  short uKmzi68U = (short)32767;
  for (poJF9ZNc = 0; poJF9ZNc > (-3); poJF9ZNc = eEdAG4rf)
    sVG1Ign2 |= uKmzi68U;

  e();
  if (a[1] != 1)
  {
    __builtin_abort();
  }
  transparent_crc(uKmzi68U, "uKmzi68U", 1);
  transparent_crc(eEdAG4rf, "eEdAG4rf", 1);
  transparent_crc(sVG1Ign2, "sVG1Ign2", 1);
  transparent_crc(poJF9ZNc, "poJF9ZNc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

