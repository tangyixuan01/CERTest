#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-for-snippet -> insert-switch-snippet -> insert-switch-snippet

static int g_62 = 0;
extern int printf(const char *format, ...);
static signed char foo(signed char left, int right)
{
  int MXOLmdf2 = -324042480;
  int D7LcZXJ6 = 2147483647;
  char z_mBaf6K = (signed char)44;
  int _Y5ZvoJT = -2147483648;
  transparent_crc(_Y5ZvoJT, "_Y5ZvoJT", 1);
  transparent_crc(z_mBaf6K, "z_mBaf6K", 1);
  transparent_crc(D7LcZXJ6, "D7LcZXJ6", 1);
  transparent_crc(MXOLmdf2, "MXOLmdf2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((left < 0) || (left > (127 >> right)))
  {
    return left;
  }
  else
  {
    return left << right;
    switch (MXOLmdf2)
      case 111:
      case 222:
      case 44:
      return 0;




    for (; z_mBaf6K < 45; z_mBaf6K++)
      D7LcZXJ6 = (D7LcZXJ6) ? (_Y5ZvoJT) : (_Y5ZvoJT < D7LcZXJ6);

  }
}

static unsigned short bar(unsigned short left, int right)
{
  int * CYz5tnQg = &g_62;
  unsigned char iSxFIlLm = (unsigned char)0;
  switch (iSxFIlLm)
  {
    case 0x95:
      *CYz5tnQg = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *CYz5tnQg = 0x00;
      break;

    default:
      *CYz5tnQg = 0x05;
      break;

  }

  transparent_crc(iSxFIlLm, "iSxFIlLm", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return left >> right;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int wOVkWraX = 2147483647;
  int Z9p3nbeS = -95099740;
  int cqQAgpwX = -939242649;
  int gxP5ht0L = -2147483648;
  int l_111[1];
  int i;
  for (i = 0; i < 1; i++)
  {
    l_111[i] = 128;
  }

  g_62 = bar(foo(l_111[0], 8), 8);
  if (gxP5ht0L)
    cqQAgpwX = 0;
  else
    cqQAgpwX = Z9p3nbeS || (wOVkWraX = 0);
  printf("g_62 = %d\n", g_62);
  transparent_crc(gxP5ht0L, "gxP5ht0L", 1);
  transparent_crc(cqQAgpwX, "cqQAgpwX", 1);
  transparent_crc(Z9p3nbeS, "Z9p3nbeS", 1);
  transparent_crc(wOVkWraX, "wOVkWraX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

