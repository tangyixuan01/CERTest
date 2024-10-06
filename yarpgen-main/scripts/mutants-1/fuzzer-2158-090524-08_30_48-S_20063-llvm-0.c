#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int *a;
int **b = &a;
int c = 1;
int **f = &a;
int *g = &c;
char d = 0;
static char *e = &d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int uoHABSxw = 2147483647;
  long _NeoJD6y = -9223372036854775807LL;
  char FXSfAqkW = (signed char)35;
  int dFHXYuqL = 2147483647;
  long CLWKhp12 = -9223372036854775807LL;
  char rO6IwYV2 = (signed char)127;
  *b = g;
  lbl:
  *b = *f;

  (*e)--;
  *(*b) = 0;
  if (d)
  {
    goto lbl;
  }
  printf("%d\n", c);
  FXSfAqkW = (~(((uoHABSxw / (-_NeoJD6y)) * FXSfAqkW) & CLWKhp12)) | (-((-rO6IwYV2) | dFHXYuqL));
  transparent_crc(rO6IwYV2, "rO6IwYV2", 1);
  transparent_crc(CLWKhp12, "CLWKhp12", 1);
  transparent_crc(dFHXYuqL, "dFHXYuqL", 1);
  transparent_crc(FXSfAqkW, "FXSfAqkW", 1);
  transparent_crc(_NeoJD6y, "_NeoJD6y", 1);
  transparent_crc(uoHABSxw, "uoHABSxw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

