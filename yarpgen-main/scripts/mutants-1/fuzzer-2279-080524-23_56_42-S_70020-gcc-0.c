#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

unsigned char a = 6;
int b;
int c;
static void fn1()
{
  short kmjRJHev = (short)20262;
  short jbxW_aqw = (short)-32768;
  short yRlVrj5W = (short)-25264;
  unsigned w2x8bnU1 = 966002979U;
  int oeIC0smw = -2147483648;
  int _Nd0IfGB = 2147483647;
  int i = (a > 1) ? (1) : (a);
  int j = 6 & (c = a && (b = a));
  int d = 0;
  int e = a;
  int f = ~c;
  while (kmjRJHev)
  {
    if (_Nd0IfGB)
      kmjRJHev = oeIC0smw;
    _Nd0IfGB = 1;
    oeIC0smw = (jbxW_aqw = (yRlVrj5W) ? (0) : (w2x8bnU1 % yRlVrj5W));
  }

  int g = b || a;
  unsigned char h = ~a;
  if (a)
  {
    f = j;
  }
  if (h && g)
  {
    d = a;
  }
  i = ((-(~((f * d) * h))) + c) && ((e || i) ^ f);
  transparent_crc(_Nd0IfGB, "_Nd0IfGB", 1);
  transparent_crc(oeIC0smw, "oeIC0smw", 1);
  transparent_crc(w2x8bnU1, "w2x8bnU1", 1);
  transparent_crc(yRlVrj5W, "yRlVrj5W", 1);
  transparent_crc(jbxW_aqw, "jbxW_aqw", 1);
  transparent_crc(kmjRJHev, "kmjRJHev", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (i != 1)
  {
    __builtin_abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  return 0;
}

