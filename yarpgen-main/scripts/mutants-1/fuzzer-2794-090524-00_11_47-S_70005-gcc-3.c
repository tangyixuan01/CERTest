#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet -> insert-for-snippet -> insert-assignment-snippet

unsigned char a = 6;
int b;
int c;
static void fn1()
{
  unsigned mQl0MzPr = 4294967295U;
  int i8_v5Grz = 1485232956;
  int hHU2NS5J = 2147483647;
  int l8kMYELZ = 2147483647;
  short aGH5Xq6N = (short)-32768;
  int KF_bxtd9 = 960720241;
  int INfckF_q = 2147483647;
  int gKhPYDm2 = -2147483648;
  int PvqJZVHM = -2147483648;
  int jUacv8WZ = 2026308770;
  int i = (a > 1) ? (1) : (a);
  int j = 6 & (c = a && (b = a));
  int d = 0;
  int e = a;
  int f = ~c;
  int g = b || a;
  unsigned char h = ~a;
  if (a)
  {
    if (PvqJZVHM)
    {
      INfckF_q = (jUacv8WZ++) && gKhPYDm2;
      PvqJZVHM = gKhPYDm2;
    }
    hHU2NS5J = ~(mQl0MzPr % i8_v5Grz);
    f = j;
  }
  if (h && g)
  {
    d = a;
    for (; l8kMYELZ < 1; l8kMYELZ++)
      while (aGH5Xq6N >= KF_bxtd9)
      aGH5Xq6N++;


  }
  i = ((-(~((f * d) * h))) + c) && ((e || i) ^ f);
  transparent_crc(jUacv8WZ, "jUacv8WZ", 1);
  transparent_crc(PvqJZVHM, "PvqJZVHM", 1);
  transparent_crc(gKhPYDm2, "gKhPYDm2", 1);
  transparent_crc(INfckF_q, "INfckF_q", 1);
  transparent_crc(KF_bxtd9, "KF_bxtd9", 1);
  transparent_crc(aGH5Xq6N, "aGH5Xq6N", 1);
  transparent_crc(l8kMYELZ, "l8kMYELZ", 1);
  transparent_crc(hHU2NS5J, "hHU2NS5J", 1);
  transparent_crc(i8_v5Grz, "i8_v5Grz", 1);
  transparent_crc(mQl0MzPr, "mQl0MzPr", 1);
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
  int  M9LQBIYp = 2147483647;
  int * CGVKNjAD = &M9LQBIYp;
  unsigned char Kzvkl4Z3 = (unsigned char)255;
  switch (Kzvkl4Z3)
  {
    case 0x95:
      *CGVKNjAD = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *CGVKNjAD = 0x00;
      break;

    default:
      *CGVKNjAD = 0x05;
      break;

  }

  fn1();
  transparent_crc(Kzvkl4Z3, "Kzvkl4Z3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

