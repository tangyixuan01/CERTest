#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet -> insert-assignment-snippet -> insert-assignment-snippet

int printf(const char *, ...);
int a;
int b = 7;
char c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int l9pn0U1q = 2147483647;
  int NZQ42pA0 = -2124620984;
  char  t7jfSdbw = (signed char)9;
  char * IQskNDeV = &t7jfSdbw;
  int * bmUNnsSd = &b;
  unsigned char p7XtBHyc = (unsigned char)0;
  unsigned char JCLDk4Hs = (unsigned char)209;
  short K1cDW29a = (short)-32768;
  lbl:
  {
    int *d = &b;
    IQskNDeV = (char *) (&IQskNDeV);
    *d &= 1;
    switch (p7XtBHyc)
    {
      case 0x95:
        *bmUNnsSd = p7XtBHyc - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *bmUNnsSd = p7XtBHyc - 0x80;
        break;

      default:
        *bmUNnsSd = 0;
        break;

    }

    c--;
    if (a)
    {
      if ((JCLDk4Hs < 240) && K1cDW29a)
        for (;;)
        ;

      ;
      l9pn0U1q = NZQ42pA0;
    }
    else
    {
      if (c)
      {
        goto lbl;
      }
    }
  }

  printf("%d\n", b);
  transparent_crc(K1cDW29a, "K1cDW29a", 1);
  transparent_crc(JCLDk4Hs, "JCLDk4Hs", 1);
  transparent_crc(p7XtBHyc, "p7XtBHyc", 1);
  transparent_crc(NZQ42pA0, "NZQ42pA0", 1);
  transparent_crc(l9pn0U1q, "l9pn0U1q", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

