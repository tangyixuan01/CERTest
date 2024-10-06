#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int QM1z_fVe = 2147483647;
  int y4ftl7dZ = 2147483647;
  unsigned a;
  unsigned b;
  unsigned c = 0;
  for (a = 0; a < 10; a++)
  {
    for (b = 0; b < 2; b++)
    {
      c++;
      if (c < a)
      {
        switch (QM1z_fVe)
        {
          case 5:
            y4ftl7dZ = 1;
            break;

          case 6:
            y4ftl7dZ = 2;
            break;

          case 7:
            y4ftl7dZ = 3;
            break;

        }

        return 123;
      }
    }

  }

  transparent_crc(y4ftl7dZ, "y4ftl7dZ", 1);
  transparent_crc(QM1z_fVe, "QM1z_fVe", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

