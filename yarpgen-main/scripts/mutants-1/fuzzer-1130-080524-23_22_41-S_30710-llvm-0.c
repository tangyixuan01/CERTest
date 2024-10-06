#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

static int *b;
int a;
int **c = &b;
int **e = &b;
int *f[2];
int g = 1;
char d;
void fn1()
{
  int *i = 0;
  ((&b) == (&f[1])) > a;
  for (; d < 1; d++)
  {
    *c = &g;
    if (*b)
    {
      return;
    }
  }

  *i = 0;
}

void fn2()
{
  int k = 0;
  *e = &k;
  fn1();
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int DVhfnQL8 = 1009979013;
  int VBuYm5C1 = -2147483648;
  int InWSe9kv = -2147483648;
  int aDF3zhGH = 1198945609;
  if (InWSe9kv)
  {
    DVhfnQL8 = (aDF3zhGH++) && VBuYm5C1;
    InWSe9kv = VBuYm5C1;
  }
  fn2();
  transparent_crc(aDF3zhGH, "aDF3zhGH", 1);
  transparent_crc(InWSe9kv, "InWSe9kv", 1);
  transparent_crc(VBuYm5C1, "VBuYm5C1", 1);
  transparent_crc(DVhfnQL8, "DVhfnQL8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

