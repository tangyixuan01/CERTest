#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

unsigned char a = 6;
int b;
int c;
static void fn1()
{
  int i = (a > 1) ? (1) : (a);
  int j = 6 & (c = a && (b = a));
  int d = 0;
  int e = a;
  int f = ~c;
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

