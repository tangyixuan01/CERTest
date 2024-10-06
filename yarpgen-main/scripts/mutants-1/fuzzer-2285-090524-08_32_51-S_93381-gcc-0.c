#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

static struct S
{
  int *p1;
  int *p2;
} s;
int foo()
{
  int  zas_Qnf4 = 910887406;
  int * uEUCtPw2 = &zas_Qnf4;
  unsigned short SHUk0Iou = (unsigned short)0;
  int mEn4MakG = -2147483648;
  unsigned int qwl4bKiZ = 4294967295U;
  int i = 1;
  if (!mEn4MakG)
  {
    SHUk0Iou = qwl4bKiZ;
    *uEUCtPw2 = SHUk0Iou | qwl4bKiZ;
  }
  int j = 2;
  struct S s;
  int **p;
  s.p1 = &i;
  s.p2 = &j;
  p = &s.p1;
  uintptr_t pi = (uintptr_t) p;
  pi = pi + (sizeof(int *));
  p = (int **) pi;
  *(*p) = 3;
  transparent_crc(qwl4bKiZ, "qwl4bKiZ", 1);
  transparent_crc(mEn4MakG, "mEn4MakG", 1);
  transparent_crc(SHUk0Iou, "SHUk0Iou", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return j;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if (foo() != 3)
  {
    __builtin_abort();
  }
  return 0;
}

