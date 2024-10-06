#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

static int f(int);
int main(int argc, const char *argv[])
{
  platform_main_begin();
  crc32_gentab();
  volatile unsigned char ZFYS3vPi = (unsigned char)58;
  (void) argv;
  for (unsigned char i = 0; i < 128; i++)
  {
    ZFYS3vPi = i;
  }

  transparent_crc(ZFYS3vPi, "ZFYS3vPi", 1);
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

