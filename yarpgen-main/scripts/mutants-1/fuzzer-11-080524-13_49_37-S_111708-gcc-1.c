#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-for-snippet

static int f(int);
int main(int argc, const char *argv[])
{
  platform_main_begin();
  crc32_gentab();
  int wCkJYlIb = 1755775633;
  int TIBQtDMR = 2147483647;
  int UobOp8yB = -1678568889;
  int qXv946oC = -2147483648;
  volatile unsigned char ZFYS3vPi = (unsigned char)58;
  (void) argv;
  for (unsigned char i = 0; i < 128; i++)
  {
    for (qXv946oC = 0; qXv946oC < 1; qXv946oC++)
    {
      for (TIBQtDMR = 0; TIBQtDMR < 1; TIBQtDMR++)
        wCkJYlIb |= (-UobOp8yB) + TIBQtDMR;

      UobOp8yB = 0;
    }

    ZFYS3vPi = i;
  }

  transparent_crc(ZFYS3vPi, "ZFYS3vPi", 1);
  transparent_crc(qXv946oC, "qXv946oC", 1);
  transparent_crc(UobOp8yB, "UobOp8yB", 1);
  transparent_crc(TIBQtDMR, "TIBQtDMR", 1);
  transparent_crc(wCkJYlIb, "wCkJYlIb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return f(argc);
}

static int f(int f)
{
  int x = f;
  {
    int f(int);
    if (x < 1)
    {
      return 0;
    }
    else
    {
      return f(x - 1);
    }
  }
}

