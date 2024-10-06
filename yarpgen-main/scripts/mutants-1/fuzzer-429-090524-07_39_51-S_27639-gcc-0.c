#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

char heap[50000];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int jtbB4VeK = -1759021263;
  int qG5Hz_1E = 267993777;
  int YCAUMX1N = 1057738069;
  int g1E9NVXu = -1827819792;
  int Y2jGpN83 = -2147483648;
  for (unsigned ix = sizeof(heap); ix--;)
  {
    heap[ix] = ix;
  }

  for (; g1E9NVXu >= 0; g1E9NVXu--)
  {
    qG5Hz_1E = YCAUMX1N;
    YCAUMX1N = (jtbB4VeK ^ (jtbB4VeK && Y2jGpN83)) && 1;
  }

  transparent_crc(Y2jGpN83, "Y2jGpN83", 1);
  transparent_crc(g1E9NVXu, "g1E9NVXu", 1);
  transparent_crc(YCAUMX1N, "YCAUMX1N", 1);
  transparent_crc(qG5Hz_1E, "qG5Hz_1E", 1);
  transparent_crc(jtbB4VeK, "jtbB4VeK", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

