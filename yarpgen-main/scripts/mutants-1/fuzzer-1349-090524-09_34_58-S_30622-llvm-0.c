#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

static int a = -3L;
static int h;
int *b = &a;
int c[3];
char d;
char e;
char *g = &d;
int **i = &b;
void fn1()
{
  int *f = &c[2];
  for (;;)
  {
    if (e)
    {
      f = 0;
    }
    (f == (&a)) ? ((void) 0) : (fn1());
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short Nc0tFwHQ = (short)-32768;
  int fnNbA27E = -2134758569;
  short zWveRI_w = (short)32556;
  if (a)
  {
    *b = 3;
  }
  h = a;
  b = &h;
  *g = *(*i);
  __builtin_printf("%d\n", d);
  zWveRI_w = fnNbA27E || (~Nc0tFwHQ);
  transparent_crc(zWveRI_w, "zWveRI_w", 1);
  transparent_crc(fnNbA27E, "fnNbA27E", 1);
  transparent_crc(Nc0tFwHQ, "Nc0tFwHQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

