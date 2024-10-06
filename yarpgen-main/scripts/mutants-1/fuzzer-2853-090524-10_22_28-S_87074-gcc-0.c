#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

long b;
unsigned c[5];
unsigned long long d = 3;
int e;
int f;
int g;
void h()
{
  for (; f < 11; f++)
  {
    b = g;
    for (e = 0; e < 5; e++)
    {
      c[e] = (e - b) - (c[e] >> 5);
      g = c[e];
    }

    if (""['\0'])
    {
      #pragma message "Gotcha!"
      __builtin_abort();
    }
  }

  if (c[0])
  {
    d = 0;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  h();
  return d;
}

