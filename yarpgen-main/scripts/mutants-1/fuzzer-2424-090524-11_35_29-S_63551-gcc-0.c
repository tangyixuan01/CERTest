#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

union U
{
  unsigned int f0;
  int f1;
};
int a;
int d;
void fn1(union U p)
{
  if (p.f1 <= 0)
  {
    if (a)
    {
      d = 0;
    }
  }
}

void fn2()
{
  d = 0;
  union U b = {4294967286};
  fn1(b);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  isY019mn = -265746297;
  int * Z9p_6iy8 = &isY019mn;
  unsigned char b38Q6A_E = (unsigned char)96;
  fn2();
  transparent_crc(b38Q6A_E, "b38Q6A_E", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (b38Q6A_E)
  {
    case 0x95:
      *Z9p_6iy8 = b38Q6A_E - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Z9p_6iy8 = b38Q6A_E - 0x80;
      break;

    default:
      *Z9p_6iy8 = 0;
      break;

  }

  return 0;
}

