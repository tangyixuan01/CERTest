#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a[1][2];
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned long mUdr0G57 = 18446744073709551615ULL;
  char GRMQ7I3U = (signed char)108;
  int  pB47FRg8 = 2110693966;
  int * D_LK3sx4 = &pB47FRg8;
  int c;
  for (; b < 1; b++)
  {
    for (c = 0; c < 2; c++)
    {
      a[b][c] = 0;
    }

  }

  GRMQ7I3U = (mUdr0G57++, *D_LK3sx4);
  printf("%d\n", b);
  transparent_crc(GRMQ7I3U, "GRMQ7I3U", 1);
  transparent_crc(mUdr0G57, "mUdr0G57", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

