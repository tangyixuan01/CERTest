#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

struct A
{
  int b : 2;
  int c : 2;
  unsigned d : 8;
};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  x5LP9JkX = 39706715;
  int * nYV1WckL = &x5LP9JkX;
  size_t lZusvpIz = (_Bool)1;
  struct A t = {0, 0, 2};
  L:
  t.d = ~((~((~0) % t.d)) % 2);

  if (!t.d)
  {
    while (*nYV1WckL)
    {
      nYV1WckL++;
      lZusvpIz++;
    }

    goto L;
  }
  transparent_crc(lZusvpIz, "lZusvpIz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

