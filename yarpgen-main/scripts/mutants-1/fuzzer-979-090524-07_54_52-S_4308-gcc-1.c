#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

extern int printf(const char *s, ...);
int main()
{
  platform_main_begin();
  crc32_gentab();
  int nNHZLJ0w = -2147483648;
  char uhSvA87s = (signed char)-128;
  char Fu1A7jkP = (signed char)-1;
  int  kxo3mZPX = -2147483648;
  int * j5oiaOIx = &kxo3mZPX;
  unsigned char CNzWGydQ = (unsigned char)231;
  for (; uhSvA87s != 3; uhSvA87s = uhSvA87s + 7)
  {
    nNHZLJ0w = Fu1A7jkP & nNHZLJ0w;
    if (nNHZLJ0w)
      break;
  }

  long long C = 1ULL << 63;
  long long X;
  int Y = 32;
  X = C >> (Y & 31);
  printf("%s (%llx)\n", (X != C) ? ("FAIL") : ("OK"), X);
  transparent_crc(CNzWGydQ, "CNzWGydQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (CNzWGydQ)
  {
    case 0x95:
      *j5oiaOIx = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *j5oiaOIx = 0x00;
      break;

    default:
      *j5oiaOIx = 0x05;
      break;

  }

  transparent_crc(Fu1A7jkP, "Fu1A7jkP", 1);
  transparent_crc(uhSvA87s, "uhSvA87s", 1);
  transparent_crc(nNHZLJ0w, "nNHZLJ0w", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

