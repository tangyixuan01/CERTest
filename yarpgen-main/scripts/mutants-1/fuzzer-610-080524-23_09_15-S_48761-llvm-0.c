#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

volatile int a = 0;
volatile int b = 1;
void c()
{
  unsigned int cds8PATf = 4294967295U;
  unsigned int fSblIyZj = 3519423512U;
  unsigned char nQK4rRD1 = (unsigned char)96;
  if (nQK4rRD1)
  {
    fSblIyZj = cds8PATf;
  }
  transparent_crc(nQK4rRD1, "nQK4rRD1", 1);
  transparent_crc(fSblIyZj, "fSblIyZj", 1);
  transparent_crc(cds8PATf, "cds8PATf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; b < 2; b++)
  {
    for (; a < 5; a++)
    {
      ;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  c();
  printf("%d\n", a);
}

