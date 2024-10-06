#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
int a;
int *b = &a;
static int **c = &b;
static int d;
short e;
char f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int R09ZAh6c = -709876309;
  int CNm2jZOy = -1810345110;
  int w3JuoUlQ = -2147483648;
  f = -21;
  for (; f < (-5); f++)
  {
    e = f ^ 3;
    d = *b;
    *(*c) = e;
    if (CNm2jZOy)
      w3JuoUlQ = R09ZAh6c == 1;
  }

  transparent_crc(w3JuoUlQ, "w3JuoUlQ", 1);
  transparent_crc(CNm2jZOy, "CNm2jZOy", 1);
  transparent_crc(R09ZAh6c, "R09ZAh6c", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", d);
}

