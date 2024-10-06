#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet -> insert-if-snippet

int a = 1;
int b = 1;
int main()
{
  platform_main_begin();
  crc32_gentab();
  char  NP58tTrm = (signed char)3;
  char * YrabhwJp = &NP58tTrm;
  char  ZTOdWcRB = (signed char)127;
  char * A0F3PplX = &ZTOdWcRB;
  int * ZSba4C2W = &b;
  unsigned char Qc4zEhan = (unsigned char)255;
  char rQK0jkP6 = (signed char)-43;
  char xZf8gdNM = (signed char)127;
  int yGWzLh_0 = -846489583;
  short d;
  short g;
  short i;
  int e = 34000;
  int h;
  d = b;
  g = 100 | b;
  L1:
  i = g;

  L2:
  g = ~(d / e);

  e = ~((2 / g) & d);
  h = a;
  while (!e)
  {
    a = b;
    e = ~(1L << i);
  }

  if (g > 0)
  {
    rQK0jkP6 = (xZf8gdNM++) == yGWzLh_0;
    if (A0F3PplX != YrabhwJp)
    {
      printf("a_ptr != b_ptr\n");
    }
    else
    {
      printf("a_ptr == b_ptr\n");
    }
    goto L2;
  }
  if (!g)
  {
    switch (Qc4zEhan)
    {
      case 0x95:
        *ZSba4C2W = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *ZSba4C2W = 0x00;
        break;

      default:
        *ZSba4C2W = 0x05;
        break;

    }

    goto L1;
  }
  if (h < e)
  {
    __builtin_abort();
  }
  transparent_crc(yGWzLh_0, "yGWzLh_0", 1);
  transparent_crc(xZf8gdNM, "xZf8gdNM", 1);
  transparent_crc(rQK0jkP6, "rQK0jkP6", 1);
  transparent_crc(Qc4zEhan, "Qc4zEhan", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

