#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-while-snippet

struct a
{
  int b : 4;
} d;
static int c;
static int e;
static const struct a f;
static void g(const struct a h)
{
  short CHAKhMFt = (short)32767;
  int Yd9o5vwr = 2147483647;
  for (; c < 1; c++)
  {
    while (CHAKhMFt >= Yd9o5vwr)
      CHAKhMFt++;

    d = h;
  }

  e = h.b;
  transparent_crc(Yd9o5vwr, "Yd9o5vwr", 1);
  transparent_crc(CHAKhMFt, "CHAKhMFt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = h.b;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  volatile unsigned  w2KeEzsa = 0U;
  volatile unsigned * fm06vcse = &w2KeEzsa;
  while (*fm06vcse)
  {
  }

  g(f);
  return 0;
}

