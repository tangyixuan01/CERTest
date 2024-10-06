#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a[3] = {1, 2, 3};
int c[3] = {4, 5, 6};
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int clsOokf7 = -2147483648;
  int b[3];
  int i;
  b[0] = 1;
  b[1] = 2;
  b[2] = 3;
  for (i = 0; i < 3; i++)
  {
    if (a[i] != b[i])
    {
      puts("ERR 1");
      if (++clsOokf7)
        return 0;
      break;
    }
  }

  b[0] = 4;
  b[1] = 5;
  b[2] = 6;
  for (i = 0; i < 3; i++)
  {
    if (c[i] != b[i])
    {
      puts("ERR 2");
      break;
    }
  }

  transparent_crc(clsOokf7, "clsOokf7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

