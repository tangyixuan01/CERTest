#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int c;
int *d = &c;
int **e = &d;
int *g = &a;
static int ***b;
static int **f = &d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  xFwqDUc2 = 330069912;
  int * clbXV_gL = &xFwqDUc2;
  unsigned char xWIbfHAP = (unsigned char)2;
  *(*f) = 0;
  int ****h = 0;
  if (c)
  {
    *h = &e;
    *(*(*b)) = 0;
  }
  *e = g;
  if (d != (&a))
  {
    __builtin_abort();
    switch (xWIbfHAP)
    {
      case 0x95:
        *clbXV_gL = xWIbfHAP - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *clbXV_gL = xWIbfHAP - 0x80;
        break;

      default:
        *clbXV_gL = 0;
        break;

    }

  }
  transparent_crc(xWIbfHAP, "xWIbfHAP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

