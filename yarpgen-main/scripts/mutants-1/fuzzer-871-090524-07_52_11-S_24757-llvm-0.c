#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
char a = -127;
int b;
char fn1(int p1, int p2)
{
  unsigned int gr302l_K = 0U;
  unsigned int OEGRyzQB = 4148637337U;
  unsigned char Oo9hdjr7 = (unsigned char)0;
  transparent_crc(Oo9hdjr7, "Oo9hdjr7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (Oo9hdjr7)
  {
    OEGRyzQB = gr302l_K;
  }
  transparent_crc(OEGRyzQB, "OEGRyzQB", 1);
  transparent_crc(gr302l_K, "gr302l_K", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p1 - p2;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  char *c = &a;
  lbl:
  b = ~((*c)--);

  if (fn1(b, a))
  {
    goto lbl;
  }
  printf("%d\n", a);
  return 0;
}

