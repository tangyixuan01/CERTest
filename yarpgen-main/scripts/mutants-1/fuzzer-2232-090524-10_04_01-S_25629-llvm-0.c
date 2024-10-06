#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
int a;
int d;
static char b = 48;
static char c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int vXj93MEf = 2147483647;
  int tKcO6_zr = -2147483648;
  int BXbkWuc9 = 1317086555;
  int EgoBaLdH = -254779738;
  c = b;
  for (; c < 45; c++)
  {
    a = (a) ? (d) : (d < a);
  }

  b = 0;
  while (1)
  {
    int f = 2;
    int g = 1;
    int h = 126;
    int *i = &h;
    (&tKcO6_zr) == i;
    L1:
    L2:
    if (!h)
      goto L1;


    if (!f)
    {
      EgoBaLdH = (g << h) || (EgoBaLdH << 3);
      goto L2;
    }
    BXbkWuc9 = vXj93MEf;
    f = (h = (vXj93MEf = g));
    g = BXbkWuc9;
    if (BXbkWuc9)
      break;
    goto L2;
  }

  printf("%d\n", c);
  transparent_crc(EgoBaLdH, "EgoBaLdH", 1);
  transparent_crc(BXbkWuc9, "BXbkWuc9", 1);
  transparent_crc(tKcO6_zr, "tKcO6_zr", 1);
  transparent_crc(vXj93MEf, "vXj93MEf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

