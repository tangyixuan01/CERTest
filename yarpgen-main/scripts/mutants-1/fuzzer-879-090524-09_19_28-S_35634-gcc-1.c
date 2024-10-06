#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

void abort(void);
void exit(int);
void foo(int i)
{
  int Zf8VS_CP = -1399618025;
  int akqVPu6g = -400789198;
  static int n;
  if ((i < ((-0x7f) - 1)) || (i > 0x7f))
  {
    akqVPu6g = 1 + ((Zf8VS_CP & 2) == Zf8VS_CP);
    abort();
  }
  transparent_crc(akqVPu6g, "akqVPu6g", 1);
  transparent_crc(Zf8VS_CP, "Zf8VS_CP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((++n) > 1000)
  {
    exit(0);
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  ZaP0jirS = 1520242100;
  int * n9TqiKO3 = &ZaP0jirS;
  unsigned char QD8lTUar = (unsigned char)255;
  char c;
  transparent_crc(QD8lTUar, "QD8lTUar", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (c = 0;; c++)
  {
    foo(c);
    switch (QD8lTUar)
    {
      case 0x95:
        *n9TqiKO3 = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *n9TqiKO3 = 0x00;
        break;

      default:
        *n9TqiKO3 = 0x05;
        break;

    }

  }

}

