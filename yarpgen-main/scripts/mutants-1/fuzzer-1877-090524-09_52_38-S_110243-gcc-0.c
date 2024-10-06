#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

char a;
long b = 1100000000;
int c[9][1];
unsigned d;
static long *e = &b;
static long *f = &b;
int g()
{
  int kNZjFIMB = 2002856700;
  int nyzAvMjt = -2147483648;
  int kU4FIqyn = -1390957719;
  if (a && (a <= '9'))
  {
    return '0';
  }
  if (a)
  {
    return 10;
  }
  for (kNZjFIMB = 0; kNZjFIMB < 16; kNZjFIMB++)
    for (kU4FIqyn = kNZjFIMB, nyzAvMjt = 0; nyzAvMjt < 3; nyzAvMjt++)
    if (kU4FIqyn & 1)
    kU4FIqyn = 0;


  transparent_crc(kU4FIqyn, "kU4FIqyn", 1);
  transparent_crc(nyzAvMjt, "nyzAvMjt", 1);
  transparent_crc(kNZjFIMB, "kNZjFIMB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return -1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  d = 0;
  for (; ((((int) (*f)) - (1100000000 - 1)) + d) < 9; d++)
  {
    c[(((g() + ((int) (*f))) + (((int) (*e)) - 1100000000)) - (1100000000 - 1)) + d][0] = 0;
  }

}

