#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

const struct a
{
  unsigned b : 3;
} c;
char d;
int e;
long f;
void g(const struct a h)
{
  unsigned char RwDuNZpI = (unsigned char)73;
  transparent_crc(RwDuNZpI, "RwDuNZpI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while ((unsigned char) ((RwDuNZpI--) * 6))
    ;

  for (; d != 20; d = d + 4)
  {
    int i = h.b;
    e = h.b;
    f = h.b || 0;
    transparent_crc(i, "i", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  g(c);
}

