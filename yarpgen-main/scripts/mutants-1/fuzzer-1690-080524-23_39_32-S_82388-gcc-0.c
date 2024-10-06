#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

struct A
{
  int b;
  int c;
  int d;
} e;
struct A g()
{
  int Gl496dxa = 2147483647;
  int Kib076Ee = 832846146;
  int OBDhL20m = 142842165;
  OBDhL20m = (Kib076Ee ^ (Kib076Ee && Gl496dxa)) && 1;
  struct A h[30] = {{0, 0, 0}};
  transparent_crc(OBDhL20m, "OBDhL20m", 1);
  transparent_crc(Kib076Ee, "Kib076Ee", 1);
  transparent_crc(Gl496dxa, "Gl496dxa", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return h[29];
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  e = g();
  return e.b;
}

