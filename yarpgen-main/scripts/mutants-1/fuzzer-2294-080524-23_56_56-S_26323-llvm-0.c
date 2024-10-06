#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a = 4;
int c;
int d = 10;
unsigned char b = 255;
void fn1()
{
  short e;
  int f = -1;
  char g = a;
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
  short AkJguHNx = (short)-10986;
  unsigned char vcKR7Xbn = (unsigned char)0;
  int pLi_sYrz = 917131462;
  fn1();
  for (; AkJguHNx >= 0; AkJguHNx--)
  {
    int *f = &pLi_sYrz;
    *f = vcKR7Xbn;
  }

  transparent_crc(pLi_sYrz, "pLi_sYrz", 1);
  transparent_crc(vcKR7Xbn, "vcKR7Xbn", 1);
  transparent_crc(AkJguHNx, "AkJguHNx", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

