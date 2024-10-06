#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet

double Q[4 * 64];
double P[5 * 64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  v9rVKq18 = -2147483648;
  int * R8JGvZj9 = &v9rVKq18;
  unsigned char xqo5hApi = (unsigned char)159;
  int ylAGYFs4 = -1551593096;
  switch (xqo5hApi)
  {
    case 0x95:
      *R8JGvZj9 = xqo5hApi - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *R8JGvZj9 = xqo5hApi - 0x80;
      break;

    default:
      *R8JGvZj9 = 0;
      break;

  }

  short IE1u9wrP = (short)13203;
  int BwMPA9zb = 2147483647;
  int KkJtp2h5 = -1862260762;
  volatile int hNk_iSOR = -2147483648;
  int i;
  for (; ylAGYFs4 >= 0; ylAGYFs4--)
  {
    IE1u9wrP = 0;
    for (; IE1u9wrP <= 3; IE1u9wrP++)
    {
      KkJtp2h5 = 0;
      for (; KkJtp2h5 <= 3; KkJtp2h5++)
        hNk_iSOR &= 5;

    }

    if (BwMPA9zb)
      break;
  }

  int j;
  double *p = P;
  double *q = Q;
  for (j = 0; j < 32; ++j)
  {
    for (i = 0; i < 4; ++i)
    {
      q[i] = p[i];
    }

    q += 4;
    p += 5;
  }

  transparent_crc(hNk_iSOR, "hNk_iSOR", 1);
  transparent_crc(KkJtp2h5, "KkJtp2h5", 1);
  transparent_crc(BwMPA9zb, "BwMPA9zb", 1);
  transparent_crc(IE1u9wrP, "IE1u9wrP", 1);
  transparent_crc(ylAGYFs4, "ylAGYFs4", 1);
  transparent_crc(xqo5hApi, "xqo5hApi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

