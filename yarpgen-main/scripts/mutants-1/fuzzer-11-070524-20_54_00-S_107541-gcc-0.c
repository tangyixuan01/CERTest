#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

unsigned char a = 1;
char b;
char e;
long c;
short d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int UMFj6tbL = -854090457;
  int mPvVH7bo = -349151327;
  a = ~(1 && a);
  c = ~((((~a) / 8) | (-2)) & 11007578330939886389LLU);
  e = -c;
  switch (UMFj6tbL)
  {
    case 5:
      mPvVH7bo = 1;
      break;

    case 6:
      mPvVH7bo = 2;
      break;

    case 7:
      mPvVH7bo = 3;
      break;

  }

  d = (~c) / e;
  if (d < 2000)
  {
    __builtin_abort();
  }
  transparent_crc(mPvVH7bo, "mPvVH7bo", 1);
  transparent_crc(UMFj6tbL, "UMFj6tbL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

