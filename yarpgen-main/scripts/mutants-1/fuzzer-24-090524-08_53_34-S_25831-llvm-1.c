#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet

static short a = 7;
int b = 1;
int c;
int d;
int e;
int f;
void fn1(short *p1)
{
  short mQYMUwah = (short)-32768;
  unsigned short Ntlxm3uy = (unsigned short)65535;
  short L0OoZJ3p = (short)-32768;
  char DR7O06rL = (signed char)-53;
  if (mQYMUwah < Ntlxm3uy)
  {
    Ntlxm3uy = mQYMUwah;
    mQYMUwah = ~mQYMUwah;
  }
  b = (4 % a) & (a / b);
  d = f && (1 / d);
  a = f | (a ^ 1);
  if (a || a)
  {
    printf("l_282=%lld\n", (long long) f);
    L0OoZJ3p = DR7O06rL != 0;
  }
  printf("g_9=%lld\n", (long long) a);
  d = a;
  *p1 = e;
  transparent_crc(DR7O06rL, "DR7O06rL", 1);
  transparent_crc(L0OoZJ3p, "L0OoZJ3p", 1);
  transparent_crc(Ntlxm3uy, "Ntlxm3uy", 1);
  transparent_crc(mQYMUwah, "mQYMUwah", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (a && (f < 4))
  {
    c--;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1(&a);
  printf("%d\n", c);
  return 0;
}

