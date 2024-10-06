#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int c;
int d = 1;
char e = 1;
void fn1()
{
  unsigned char lGRB0rcS = (unsigned char)0;
  int Phc0te6B = 1952402952;
  short I0C_Fmyp = (short)32767;
  int h;
  transparent_crc(I0C_Fmyp, "I0C_Fmyp", 1);
  transparent_crc(Phc0te6B, "Phc0te6B", 1);
  transparent_crc(lGRB0rcS, "lGRB0rcS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; e; e++)
  {
    for (; b;)
    {
      d--;
      I0C_Fmyp = ~((~Phc0te6B) || lGRB0rcS);
    }

    h = (d) ? (a % d) : (0);
    c &= h;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  return 0;
}

