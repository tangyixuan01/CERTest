#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet

void abort(void);
void exit(int);
int t = 100;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * zAh6Fl1J = &t;
  unsigned char bGY8hm9f = (unsigned char)255;
  short IkoqlfDN = (short)-18272;
  short hwetuU1B = (short)-32768;
  int a[] = {0, 1, 2};
  int *i = &a[(sizeof(a)) / (sizeof(*a))];
  i--;
  while (i > a)
  {
    switch (bGY8hm9f)
    {
      case 0x95:
        *zAh6Fl1J = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *zAh6Fl1J = 0x00;
        break;

      default:
        *zAh6Fl1J = 0x05;
        break;

    }

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
  transparent_crc(bGY8hm9f, "bGY8hm9f", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  exit(0);
}

