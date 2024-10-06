#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-for-snippet

int a = 0;
int e = 0;
int b = 0;
short c[2] = {0, 0};
int *a_ptr = &a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * MGSUnfZW = &a;
  int B_s7rvXy = 2147483647;
  int keUXqjsG = -2147483648;
  int LMJBPFDe = 2147483647;
  int oRHx40KW = 2147483647;
  c[0] = 1;
  for (b = 1; b >= 0; b--)
  {
    e = (*a_ptr = c[b]);
    while (oRHx40KW == 0)
      asm("");

  }

  for (; keUXqjsG <= 0; keUXqjsG++)
    LMJBPFDe &= ((MGSUnfZW || keUXqjsG) ^ B_s7rvXy) == 1;

  c[0] = 0;
  transparent_crc(oRHx40KW, "oRHx40KW", 1);
  transparent_crc(LMJBPFDe, "LMJBPFDe", 1);
  transparent_crc(keUXqjsG, "keUXqjsG", 1);
  transparent_crc(B_s7rvXy, "B_s7rvXy", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("checksum = %X\n", a);
}

