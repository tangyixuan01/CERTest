#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-for-snippet -> insert-switch-snippet

struct a
{
  int b : 4;
} d;
static int c;
static int e;
static const struct a f;
static void g(const struct a h)
{
  int  Asr_P4MD = 2147483647;
  int * halyPxDn = &Asr_P4MD;
  unsigned char Hw4RK2Q7 = (unsigned char)154;
  int cpdq5UD1 = 2147483647;
  int  S9oTzGO7 = -2147483648;
  int * volatile uWAQbat5 = &S9oTzGO7;
  switch (Hw4RK2Q7)
  {
    case 0x95:
      *halyPxDn = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *halyPxDn = 0x00;
      break;

    default:
      *halyPxDn = 0x05;
      break;

  }

  int z_BqJcGb = 1500967963;
  for (; c < 1; c++)
  {
    d = h;
  }

  e = h.b;
  for (; cpdq5UD1; cpdq5UD1--)
  {
    *uWAQbat5 = 1;
    z_BqJcGb |= 4;
  }

  transparent_crc(z_BqJcGb, "z_BqJcGb", 1);
  transparent_crc(cpdq5UD1, "cpdq5UD1", 1);
  transparent_crc(Hw4RK2Q7, "Hw4RK2Q7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = h.b;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int GE9fVRJz = 2147483647;
  for (GE9fVRJz = 0; GE9fVRJz <= 8; GE9fVRJz++)
    ;

  g(f);
  transparent_crc(GE9fVRJz, "GE9fVRJz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

