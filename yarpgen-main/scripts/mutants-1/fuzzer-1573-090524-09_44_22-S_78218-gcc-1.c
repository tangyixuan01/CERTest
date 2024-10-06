#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet

int printf(const char *, ...);
struct 
{
  int v;
} a[2];
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  URzD8NCM = -2147483648;
  int * FhVGb0uB = &URzD8NCM;
  unsigned char vZP1Tjma = (unsigned char)255;
  int mvWujMJS = -1773814469;
  char Hxpjh1Q6 = (signed char)127;
  char EX9xCejy = (signed char)60;
  a[1].v = 1;
  a[0] = a[1];
  a[1].v = 0;
  for (; Hxpjh1Q6 != 3; Hxpjh1Q6 = Hxpjh1Q6 + 7)
  {
    mvWujMJS = EX9xCejy & mvWujMJS;
    if (mvWujMJS)
      break;
  }

  for (; b < 1; b++)
  {
    switch (vZP1Tjma)
    {
      case 0x95:
        *FhVGb0uB = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *FhVGb0uB = 0x00;
        break;

      default:
        *FhVGb0uB = 0x05;
        break;

    }

    printf("%d\n", a[0].v);
  }

  transparent_crc(EX9xCejy, "EX9xCejy", 1);
  transparent_crc(Hxpjh1Q6, "Hxpjh1Q6", 1);
  transparent_crc(mvWujMJS, "mvWujMJS", 1);
  transparent_crc(vZP1Tjma, "vZP1Tjma", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

