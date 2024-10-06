#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

void f()
{
}

int g(int p, int q)
{
  return ((p > q) || (p && q)) ? (p) : (q);
}

short h(int p)
{
  int xpdDNYWZ = -760744305;
  int z98vAKBx = -1691112750;
  int mL5JM9WE = 2147483647;
  int  Ai4kNo5F = 922139573;
  int * RGVsrMmn = &Ai4kNo5F;
  transparent_crc(mL5JM9WE, "mL5JM9WE", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (z98vAKBx = 24; z98vAKBx; z98vAKBx--)
  {
    for (xpdDNYWZ = 0; xpdDNYWZ < 6; xpdDNYWZ++)
      mL5JM9WE |= 1;

    *RGVsrMmn |= mL5JM9WE;
  }

  transparent_crc(z98vAKBx, "z98vAKBx", 1);
  transparent_crc(xpdDNYWZ, "xpdDNYWZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  f();
  if (h(g(0, 1)) != 1)
  {
    __builtin_abort();
  }
  return 0;
}

