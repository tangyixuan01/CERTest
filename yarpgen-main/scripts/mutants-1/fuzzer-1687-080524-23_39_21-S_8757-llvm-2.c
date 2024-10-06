#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet -> insert-switch-snippet

static int g_62 = 0;
extern int printf(const char *format, ...);
static signed char foo(signed char left, int right)
{
  int S1vJFi3A = -2147483648;
  int Jkc65n24 = 2147483647;
  int sVnz8xmR = -2147483648;
  int u257maJd = 2147483647;
  transparent_crc(u257maJd, "u257maJd", 1);
  transparent_crc(sVnz8xmR, "sVnz8xmR", 1);
  transparent_crc(Jkc65n24, "Jkc65n24", 1);
  transparent_crc(S1vJFi3A, "S1vJFi3A", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((left < 0) || (left > (127 >> right)))
  {
    return left;
  }
  else
  {
    return left << right;
    u257maJd = S1vJFi3A && ((Jkc65n24) ? (0) : (sVnz8xmR));
  }
}

static unsigned short bar(unsigned short left, int right)
{
  int * bMD4R9wg = &g_62;
  unsigned char r9j2lnId = (unsigned char)188;
  switch (r9j2lnId)
  {
    case 0x95:
      *bMD4R9wg = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *bMD4R9wg = 0x00;
      break;

    default:
      *bMD4R9wg = 0x05;
      break;

  }

  transparent_crc(r9j2lnId, "r9j2lnId", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return left >> right;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int pTc2aqEo = -2147483648;
  int l_111[1];
  int i;
  for (i = 0; i < 1; i++)
  {
    l_111[i] = 128;
    switch (pTc2aqEo)
      case 111:
      case 222:
      case 44:
      return 0;




  }

  g_62 = bar(foo(l_111[0], 8), 8);
  printf("g_62 = %d\n", g_62);
  transparent_crc(pTc2aqEo, "pTc2aqEo", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

