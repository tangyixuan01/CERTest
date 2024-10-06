#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int b;
int c[1][3];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  LaQpnoWE = 1552548802;
  int * pPO7GoXk = &LaQpnoWE;
  unsigned char doZPfn4J = (unsigned char)255;
  for (; a < 1; a++)
  {
    switch (doZPfn4J)
    {
      case 0x95:
        *pPO7GoXk = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *pPO7GoXk = 0x00;
        break;

      default:
        *pPO7GoXk = 0x05;
        break;

    }

    for (b = 0; b < 3; b++)
    {
      c[a][b] = 1;
    }

  }

  printf("%d\n", a);
  transparent_crc(doZPfn4J, "doZPfn4J", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

