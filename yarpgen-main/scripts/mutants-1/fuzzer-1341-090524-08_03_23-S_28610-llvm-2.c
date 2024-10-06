#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-for-snippet -> insert-while-snippet

void f()
{
}

int g(int p, int q)
{
  return ((p > q) || (p && q)) ? (p) : (q);
}

short h(int p)
{
  long JRYU3NAr = -393303791462426189LL;
  int z0HBvgac = -2147483648;
  while (JRYU3NAr > 0xffffffffU)
  {
    z0HBvgac += 4;
    JRYU3NAr /= ((10 * 10) * 10) * 10;
  }

  transparent_crc(z0HBvgac, "z0HBvgac", 1);
  transparent_crc(JRYU3NAr, "JRYU3NAr", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int L_dHsDep = -194461645;
  int Gj4VJQXh = 2147483647;
  int SubAlYzX = 2068023595;
  int ou7sIl3r = 2147483647;
  f();
  for (; Gj4VJQXh < 1; Gj4VJQXh++)
    for (ou7sIl3r = 0; ou7sIl3r < 2; ou7sIl3r++)
  {
    (SubAlYzX && ou7sIl3r) || (L_dHsDep ^= !SubAlYzX);
    SubAlYzX = 0;
  }


  if (h(g(0, 1)) != 1)
  {
    __builtin_abort();
  }
  transparent_crc(ou7sIl3r, "ou7sIl3r", 1);
  transparent_crc(SubAlYzX, "SubAlYzX", 1);
  transparent_crc(Gj4VJQXh, "Gj4VJQXh", 1);
  transparent_crc(L_dHsDep, "L_dHsDep", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

