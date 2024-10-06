#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a = 4;
int c;
int d = 10;
unsigned char b = 255;
void fn1()
{
  char UlpaSCLN = (signed char)-128;
  char CXWE_ldN = (signed char)15;
  short e;
  int f = -1;
  char g = a;
  CXWE_ldN = ((1958 | UlpaSCLN) + 15) & 15;
  transparent_crc(CXWE_ldN, "CXWE_ldN", 1);
  transparent_crc(UlpaSCLN, "UlpaSCLN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; c < 1; c++)
  {
    short h;
    int i;
    char j;
    if (d)
    {
      h = (i = f);
    }
    j = b;
    e = ~((~f) || b);
    b = ~((~j) | ((i ^ b) && h));
    if (((b > 254) || (e > (-2))) || (!g))
    {
      if (f != 1)
      {
        __builtin_abort();
      }
    }
    f = i;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  return 0;
}

