#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet

int yu[][1] = {{0}, {0}, {1}, {1}};
int t4 = 0;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int * G6XNyAoc = &t4;
  int ** ly6HcM7u = &G6XNyAoc;
  int *** WV2He6gQ = &ly6HcM7u;
  int **** wWvbtPHK = &WV2He6gQ;
  int gZe1LjGt = 227114264;
  int * YSfyE5qv = &t4;
  int ** uQj8cftI = &YSfyE5qv;
  int *** iK5CoFnD = &uQj8cftI;
  int Ql4aqUrm = -2147483648;
  int ANxG0ErL = -2147483648;
  int dx;
  int zh;
  int ro;
  for (dx = 0; dx < 2; ++dx)
  {
    for (zh = 0; zh < 2; ++zh)
    {
      for (ro = 0; ro < 3; ++ro)
      {
        if (!gZe1LjGt)
          *(*(*wWvbtPHK)) = *(*iK5CoFnD);
        yu[ro][t4] = yu[zh + 1][t4];
        switch (Ql4aqUrm)
        {
          case 5:
            ANxG0ErL = 1;
            break;

          case 6:
            ANxG0ErL = 2;
            break;

          case 7:
            ANxG0ErL = 3;
            break;

        }

      }

    }

  }

  transparent_crc(ANxG0ErL, "ANxG0ErL", 1);
  transparent_crc(Ql4aqUrm, "Ql4aqUrm", 1);
  transparent_crc(gZe1LjGt, "gZe1LjGt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return yu[0][t4] != 0;
}

