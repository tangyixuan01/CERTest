#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

static int *a;
int b;
int d;
int *c = &b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int gaXtd5fh = -1923454077;
  char AwMOzchb = (signed char)-37;
  char JXE46pb_ = (signed char)-98;
  int e[3] = {2, 1, -2139220656};
  a = &e[0];
  d = (e[2] < 0) || (e[2] > (7 >> e[2]));
  for (; AwMOzchb != 3; AwMOzchb = AwMOzchb + 7)
  {
    gaXtd5fh = JXE46pb_ & gaXtd5fh;
    if (gaXtd5fh)
      break;
  }

  *c = d;
  transparent_crc(JXE46pb_, "JXE46pb_", 1);
  transparent_crc(AwMOzchb, "AwMOzchb", 1);
  transparent_crc(gaXtd5fh, "gaXtd5fh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", b);
}

