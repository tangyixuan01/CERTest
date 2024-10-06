#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int b = -2;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * ZpauoqQH = &b;
  unsigned char Igcjo1ZU = (unsigned char)0;
  for (; a < 1; a++)
  {
    int c = ~b;
    if ((b > c) || (!c))
    {
      printf("0");
      switch (Igcjo1ZU)
      {
        case 0x95:
          *ZpauoqQH = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *ZpauoqQH = 0x00;
          break;

        default:
          *ZpauoqQH = 0x05;
          break;

      }

      continue;
    }
    if (c < 0)
    {
      printf("1\n");
    }
    transparent_crc(c, "c", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  transparent_crc(Igcjo1ZU, "Igcjo1ZU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

