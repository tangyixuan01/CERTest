#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-assignment-snippet

int printf(const char *, ...);
int a[6];
short b;
volatile int c;
int d = 1;
void fn1(int p)
{
  int gITGkSxs = -2147483648;
  int IW_FRPK4 = -1399343664;
  transparent_crc(IW_FRPK4, "IW_FRPK4", 1);
  transparent_crc(gITGkSxs, "gITGkSxs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!p)
  {
    gITGkSxs = IW_FRPK4;
    d = 0;
  }
}

void fn2(void)
{
  for (b = 1; b; b++)
  {
    fn1(b);
  }

}

void fn3(void)
{
  int e37phCbx = 1091077100;
  int kAx8tEML = -934010588;
  unsigned hVTS5xM2 = 0U;
  for (; hVTS5xM2 < 3; hVTS5xM2++)
  {
    while (kAx8tEML < hVTS5xM2)
      __builtin_abort();

    for (e37phCbx = 0; e37phCbx < 3; e37phCbx++)
      kAx8tEML++;

  }

  fn2();
  int e = 0;
  int t;
  transparent_crc(hVTS5xM2, "hVTS5xM2", 1);
  transparent_crc(kAx8tEML, "kAx8tEML", 1);
  transparent_crc(e37phCbx, "e37phCbx", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (d)
  {
    t = (e || e) ? (0) : (e);
    c;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a[1] = 0;
  fn3();
  printf("%d\n", a[a[0]]);
  return 0;
}

