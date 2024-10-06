#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
union 
{
  short c;
  int k;
} m;
int *f = (int *) (&m);
void l()
{
  m.k = 1;
  *f = 2;
  short *n = (short *) (&m);
  *n = 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int o5zOnxM4 = 1513743099;
  int b8qvNTO2 = -2147483648;
  l();
  transparent_crc(b8qvNTO2, "b8qvNTO2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (o5zOnxM4)
  {
    case 5:
      b8qvNTO2 = 1;
      break;

    case 6:
      b8qvNTO2 = 2;
      break;

    case 7:
      b8qvNTO2 = 3;
      break;

  }

  transparent_crc(o5zOnxM4, "o5zOnxM4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d  %d\n", m.c, m.k);
}

