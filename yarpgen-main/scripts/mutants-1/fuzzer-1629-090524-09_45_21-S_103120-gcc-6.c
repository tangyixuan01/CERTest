#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet -> insert-switch-snippet -> insert-for-snippet -> insert-for-snippet -> insert-for-snippet -> insert-switch-snippet

int numDigits(long unsigned int value)
{
  int n = 1;
  while (value > 0xffffffffU)
  {
    n += 4;
    value /= ((10 * 10) * 10) * 10;
  }

  unsigned int v = (unsigned int) value;
  while (1)
  {
    if (v < 10)
    {
      return n;
    }
    if (v < (10 * 10))
    {
      return n + 1;
    }
    if (v < ((10 * 10) * 10))
    {
      return n + 2;
    }
    if (v < (((10 * 10) * 10) * 10))
    {
      return n + 3;
    }
    n += 4;
    v /= ((10 * 10) * 10) * 10;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int cdmeN7Ek = -222246080;
  int  HXix138q = 913463565;
  int * spiPSx5B = &HXix138q;
  int oFzDO5Xs = -1245134821;
  int OLBzijuF = 2147483647;
  int  WU5LasxA = -321686446;
  int * Etk2QZNS = &WU5LasxA;
  int H7nyWrlf = 2147483647;
  int Wi0vzFqx = -2147483648;
  int I3gnP26k = -914737887;
  int r_Q8OajB = -2147483648;
  int if7aP39u = -2147483648;
  int JgN5QedI = -2147483648;
  int JWwBmjTP = -138690434;
  int DpizolV6 = 783204568;
  int OHlAa3Yj = 2147483647;
  while (JgN5QedI > 6)
  {
    switch (r_Q8OajB)
      case 111:
      case 222:
      case 44:
      return 0;




    int n;
    if (if7aP39u)
      break;
    JWwBmjTP = 1;
  }

  transparent_crc(OHlAa3Yj, "OHlAa3Yj", 1);
  transparent_crc(DpizolV6, "DpizolV6", 1);
  transparent_crc(JWwBmjTP, "JWwBmjTP", 1);
  transparent_crc(JgN5QedI, "JgN5QedI", 1);
  transparent_crc(if7aP39u, "if7aP39u", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (OLBzijuF = 0; OLBzijuF < 2; OLBzijuF++)
  {
    oFzDO5Xs = *Etk2QZNS;
    *spiPSx5B = oFzDO5Xs && OLBzijuF;
  }

  transparent_crc(r_Q8OajB, "r_Q8OajB", 1);
  transparent_crc(I3gnP26k, "I3gnP26k", 1);
  transparent_crc(Wi0vzFqx, "Wi0vzFqx", 1);
  transparent_crc(H7nyWrlf, "H7nyWrlf", 1);
  transparent_crc(OLBzijuF, "OLBzijuF", 1);
  transparent_crc(oFzDO5Xs, "oFzDO5Xs", 1);
  transparent_crc(cdmeN7Ek, "cdmeN7Ek", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (numDigits(0xffffffffffffffffUL) != 20)
  {
    __builtin_abort();
    switch (DpizolV6)
    {
      case 5:
        OHlAa3Yj = 1;
        break;

      case 6:
        OHlAa3Yj = 2;
        break;

      for (H7nyWrlf = 1; H7nyWrlf; H7nyWrlf = ((char) H7nyWrlf) + 1)
        ;

      case 7:
        OHlAa3Yj = 3;
        break;

      switch (cdmeN7Ek)
        case 111:
        case 222:
        case 44:
        return 0;




      for (I3gnP26k = 0; I3gnP26k < 10; I3gnP26k++)
        Wi0vzFqx += I3gnP26k;

    }

  }
}

