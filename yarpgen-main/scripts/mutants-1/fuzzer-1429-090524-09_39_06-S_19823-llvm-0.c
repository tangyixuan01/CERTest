#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
short a;
short b;
short *c = &a;
char d = 0;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short NR4QXM_0 = (short)32767;
  short PicdrhYC = (short)14903;
  short Kxpy_IBY = (short)25633;
  unsigned gTDnSHA4 = 3773009133U;
  int O3bvF0GS = -2147483648;
  int aUrWKIfd = -2147483648;
  char *t = &d;
  while (NR4QXM_0)
  {
    if (aUrWKIfd)
      NR4QXM_0 = O3bvF0GS;
    aUrWKIfd = 1;
    O3bvF0GS = (PicdrhYC = (Kxpy_IBY) ? (0) : (gTDnSHA4 % Kxpy_IBY));
  }

  lbl:
  b = (*t)--;

  *c = 1;
  if (d)
  {
    goto lbl;
  }
  printf("%d\n", a);
  transparent_crc(aUrWKIfd, "aUrWKIfd", 1);
  transparent_crc(O3bvF0GS, "O3bvF0GS", 1);
  transparent_crc(gTDnSHA4, "gTDnSHA4", 1);
  transparent_crc(Kxpy_IBY, "Kxpy_IBY", 1);
  transparent_crc(PicdrhYC, "PicdrhYC", 1);
  transparent_crc(NR4QXM_0, "NR4QXM_0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

