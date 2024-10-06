#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-while-snippet

int printf(const char *, ...);
struct S
{
  int f0;
  int f3;
  int f6;
  int f7;
  int f8;
};
int a;
static struct S b;
char fn1(char p1, char p2)
{
  unsigned XKkyzpD1 = 4294967295U;
  int x7gmX2Ah = 1504634024;
  while (1)
  {
    float f;
    memcpy(&f, &XKkyzpD1, 4);
    if ((f >= 0.56) && (f <= 0.57))
      x7gmX2Ah++;
    XKkyzpD1++;
    if (XKkyzpD1 == 0)
      break;
  }

  transparent_crc(x7gmX2Ah, "x7gmX2Ah", 1);
  transparent_crc(XKkyzpD1, "XKkyzpD1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p1 + p2;
}

void fn3(struct S p1)
{
}

int fn4()
{
  a--;
  return 0;
}

static int fn2()
{
  int  uZ59GsRL = 2147483647;
  int * sMpC5aoT = &uZ59GsRL;
  int ** qjuM2VtA = &sMpC5aoT;
  short Y_3vfa2w = (short)-14959;
  char c = 117;
  b.f0 = 0;
  for (; b.f0 < 44; b.f0 = fn1(b.f0, 4))
  {
    fn3(b);
    a--;
    c++;
    c && fn4();
  }

  a--;
  Y_3vfa2w = ((*(*qjuM2VtA)) & ((55 | 7009) - 6)) - (*(*qjuM2VtA));
  transparent_crc(Y_3vfa2w, "Y_3vfa2w", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a = b.f3;
  fn2();
  fn2();
  printf("%d\n", a);
  return 0;
}

