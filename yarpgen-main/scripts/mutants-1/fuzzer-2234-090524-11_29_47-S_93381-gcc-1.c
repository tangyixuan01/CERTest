#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

static struct S
{
  int *p1;
  int *p2;
} s;
int foo()
{
  int  FhatGZgb = -2147483648;
  int * RCFeY7HP = &FhatGZgb;
  unsigned char EPztNl5X = (unsigned char)154;
  int i = 1;
  int j = 2;
  switch (EPztNl5X)
  {
    case 0x95:
      *RCFeY7HP = EPztNl5X - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *RCFeY7HP = EPztNl5X - 0x80;
      break;

    default:
      *RCFeY7HP = 0;
      break;

  }

  struct S s;
  int **p;
  s.p1 = &i;
  s.p2 = &j;
  p = &s.p1;
  uintptr_t pi = (uintptr_t) p;
  pi = pi + (sizeof(int *));
  p = (int **) pi;
  *(*p) = 3;
  transparent_crc(EPztNl5X, "EPztNl5X", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return j;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  KDTWa3Hp = 2147483647;
  int * qxX6ASWl = &KDTWa3Hp;
  unsigned char nN1tq8vb = (unsigned char)92;
  if (foo() != 3)
  {
    __builtin_abort();
    switch (nN1tq8vb)
    {
      case 0x95:
        *qxX6ASWl = nN1tq8vb - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *qxX6ASWl = nN1tq8vb - 0x80;
        break;

      default:
        *qxX6ASWl = 0;
        break;

    }

  }
  transparent_crc(nN1tq8vb, "nN1tq8vb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

