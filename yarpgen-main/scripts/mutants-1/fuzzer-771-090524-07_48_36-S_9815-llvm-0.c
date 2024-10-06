#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int g_50[] = {0, 0, 0, 0, 1, 0, 0};
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int PN3_uZXI = -2124315854;
  int m85aJzqd = 1534906383;
  switch (PN3_uZXI)
  {
    case 5:
      m85aJzqd = 1;
      break;

    case 6:
      m85aJzqd = 2;
      break;

    case 7:
      m85aJzqd = 3;
      break;

  }

  int i;
  for (i = 0; i <= 1; i++)
  {
    g_50[i + 5] = g_50[i + 4];
  }

  for (i = 0; i < 7; i++)
  {
    printf("%d\n", g_50[i]);
  }

  transparent_crc(m85aJzqd, "m85aJzqd", 1);
  transparent_crc(PN3_uZXI, "PN3_uZXI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

