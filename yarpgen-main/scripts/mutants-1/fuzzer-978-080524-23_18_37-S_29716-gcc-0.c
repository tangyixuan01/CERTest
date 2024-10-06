#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

void abort(void);
void exit(int);
int t = 100;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short IkoqlfDN = (short)-18272;
  short hwetuU1B = (short)-32768;
  int a[] = {0, 1, 2};
  int *i = &a[(sizeof(a)) / (sizeof(*a))];
  i--;
  while (i > a)
  {
    for (; IkoqlfDN <= 0; IkoqlfDN++)
      hwetuU1B = 0;

    i[0] = 1 + t, i--;
  }

  if (a[1] != (1 + t))
  {
    abort();
  }
  transparent_crc(hwetuU1B, "hwetuU1B", 1);
  transparent_crc(IkoqlfDN, "IkoqlfDN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  exit(0);
}

