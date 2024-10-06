#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int value = 0;
void modify(int arg)
{
  if (arg != 42)
  {
    return;
  }
  value = 1;
}

void test(void)
{
  int DgE0FVJh = 2147483647;
  char fivZ7QEC = (signed char)127;
  char xm4vPDgY = (signed char)-128;
  unsigned qLux8etM = 3074213628U;
  if (value)
  {
    return;
    while (!qLux8etM)
    {
      for (; 0; 0)
        while (0)
        for (;; 3)
        for (;; xm4vPDgY)
        for (;; 0)
        ;





      L7:
      fivZ7QEC = (DgE0FVJh = 1);

      for (; 0; DgE0FVJh)
        ;

    }

  }
  modify(42);
  transparent_crc(qLux8etM, "qLux8etM", 1);
  transparent_crc(xm4vPDgY, "xm4vPDgY", 1);
  transparent_crc(fivZ7QEC, "fivZ7QEC", 1);
  transparent_crc(DgE0FVJh, "DgE0FVJh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  value = 0;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  test();
  return value;
}

