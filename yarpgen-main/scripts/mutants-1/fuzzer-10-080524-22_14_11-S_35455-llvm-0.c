#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
union 
{
  short c;
  int k;
} m;
int *f = (int *) (&m);
void l()
{
  int xbKhtOsp = -2147483648;
  int QNli9Xd4 = 1639267451;
  int GXEj9gRt = 1588100688;
  int mYhFLDUn = -2147483648;
  int scNoKZm4 = -2147483648;
  int krMINS6a = 1712443257;
  int DEXG7Q8j = 656421004;
  int pMyHq49c = -2147483648;
  m.k = 1;
  *f = 2;
  for (; QNli9Xd4 < 1; QNli9Xd4++)
    for (GXEj9gRt = 0; GXEj9gRt < 3; GXEj9gRt++)
  {
    for (pMyHq49c = 0; pMyHq49c < 2; pMyHq49c++)
    {
      unsigned int k = scNoKZm4;
      krMINS6a = (k) ? (xbKhtOsp / k) : (1);
      if (krMINS6a)
        mYhFLDUn = 0;
    }

    scNoKZm4 = GXEj9gRt >> DEXG7Q8j;
  }


  short *n = (short *) (&m);
  transparent_crc(pMyHq49c, "pMyHq49c", 1);
  transparent_crc(DEXG7Q8j, "DEXG7Q8j", 1);
  transparent_crc(krMINS6a, "krMINS6a", 1);
  transparent_crc(scNoKZm4, "scNoKZm4", 1);
  transparent_crc(mYhFLDUn, "mYhFLDUn", 1);
  transparent_crc(GXEj9gRt, "GXEj9gRt", 1);
  transparent_crc(QNli9Xd4, "QNli9Xd4", 1);
  transparent_crc(xbKhtOsp, "xbKhtOsp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *n = 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  l();
  printf("%d  %d\n", m.c, m.k);
}

