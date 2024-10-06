#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a;
int b = 1;
void c(int e)
{
  for (; a < 2; a++)
  {
    if (b)
    {
      printf("%d\n", b);
      goto L;
    }
    for (; e < 1; e++)
    {
      L:
      ;

    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * BahX2wiV = &b;
  unsigned char coBYMWCu = (unsigned char)111;
  int * aX7h8AEM = &b;
  unsigned char OAsToK_L = (unsigned char)255;
  c(0);
  switch (OAsToK_L)
  {
    case 0x95:
      *aX7h8AEM = OAsToK_L - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *aX7h8AEM = OAsToK_L - 0x80;
      break;

    default:
      *aX7h8AEM = 0;
      break;

  }

  switch (coBYMWCu)
  {
    case 0x95:
      *BahX2wiV = coBYMWCu - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *BahX2wiV = coBYMWCu - 0x80;
      break;

    default:
      *BahX2wiV = 0;
      break;

  }

  transparent_crc(OAsToK_L, "OAsToK_L", 1);
  transparent_crc(coBYMWCu, "coBYMWCu", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

