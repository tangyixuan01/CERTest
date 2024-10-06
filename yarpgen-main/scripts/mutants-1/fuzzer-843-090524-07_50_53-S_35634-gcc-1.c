#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

void abort(void);
void exit(int);
void foo(int i)
{
  int H56Vi9Np = 855983719;
  signed Sp32cf7q = 1;
  long ojk57wcS = 4955412300279834734LL;
  static int n;
  if ((i < ((-0x7f) - 1)) || (i > 0x7f))
  {
    abort();
  }
  Sp32cf7q = Sp32cf7q << (H56Vi9Np / ojk57wcS);
  transparent_crc(ojk57wcS, "ojk57wcS", 1);
  transparent_crc(Sp32cf7q, "Sp32cf7q", 1);
  transparent_crc(H56Vi9Np, "H56Vi9Np", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((++n) > 1000)
  {
    exit(0);
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int BM_Sqy45 = -2147483648;
  char c;
  transparent_crc(BM_Sqy45, "BM_Sqy45", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (c = 0;; c++)
  {
    foo(c);
    switch (BM_Sqy45)
      case 111:
      case 222:
      case 44:
      return 0;




  }

}

