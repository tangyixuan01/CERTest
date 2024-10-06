#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

unsigned char a = 1;
char b;
char e;
long c;
short d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int8_t Uoci7RWP = (signed char)-128;
  int32_t  q3ZJdAzN = -1025328225;
  int32_t * L3NxUCZY = &q3ZJdAzN;
  int32_t ** VLm3fZ4Y = &L3NxUCZY;
  int32_t *** Fhmkxp6_ = &VLm3fZ4Y;
  a = ~(1 && a);
  c = ~((((~a) / 8) | (-2)) & 11007578330939886389LLU);
  e = -c;
  d = (~c) / e;
  if (d < 2000)
  {
    __builtin_abort();
  }
  for (; Uoci7RWP < 4; Uoci7RWP++)
    *(*(*Fhmkxp6_)) = 1;

  transparent_crc(Uoci7RWP, "Uoci7RWP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

