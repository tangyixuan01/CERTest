#include "/home/yixuan/codeExtract/csmith.h"

// insert-for-snippet

int a;
int b;
int c;
int d = 1;
char e = 1;
void fn1()
{
  int h;
  for (; e; e++)
  {
    for (; b;)
    {
      d--;
    }

    h = (d) ? (a % d) : (0);
    c &= h;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  char pMhaw1zk = (signed char)72;
  unsigned char yCxBhY6U = (unsigned char)156;
  int XJCT1ENL = 2147483647;
  short ATrP0pc4 = (short)32767;
  int s1w0SdjG = 2147483647;
  int rLwEA7aM = -1292077257;
  for (; XJCT1ENL < 1; XJCT1ENL++)
  {
    short h;
    int i;
    char j;
    if (rLwEA7aM)
      h = (i = s1w0SdjG);
    j = yCxBhY6U;
    ATrP0pc4 = ~((~s1w0SdjG) || yCxBhY6U);
    yCxBhY6U = ~((~j) | ((i ^ yCxBhY6U) && h));
    if (((yCxBhY6U > 254) || (ATrP0pc4 > (-2))) || (!pMhaw1zk))
      if (s1w0SdjG != 1)
      __builtin_abort();
    s1w0SdjG = i;
  }

  fn1();
  transparent_crc(rLwEA7aM, "rLwEA7aM", 1);
  transparent_crc(s1w0SdjG, "s1w0SdjG", 1);
  transparent_crc(ATrP0pc4, "ATrP0pc4", 1);
  transparent_crc(XJCT1ENL, "XJCT1ENL", 1);
  transparent_crc(yCxBhY6U, "yCxBhY6U", 1);
  transparent_crc(pMhaw1zk, "pMhaw1zk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

