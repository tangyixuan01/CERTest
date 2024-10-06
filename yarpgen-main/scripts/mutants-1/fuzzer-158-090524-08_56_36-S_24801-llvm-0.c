#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a[4];
int b;
int i;
static int c[] = {0, 1, 0, 0};
void fn1()
{
  int d[] = {0};
  for (i = c[0]; i < 4; i++)
  {
    c[i] = 0;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int Ei8n6kaK = 1031450617;
  unsigned ta3_ZFJy = 1699216245U;
  for (; i < 4; i++)
  {
    while (ta3_ZFJy <= 0)
      if (*(&Ei8n6kaK))
      break;

    a[i] = i;
  }

  fn1();
  for (i = 0; i < 4; i++)
  {
    b = a[b ^ c[i]];
  }

  if (b)
  {
    __builtin_abort();
  }
  transparent_crc(ta3_ZFJy, "ta3_ZFJy", 1);
  transparent_crc(Ei8n6kaK, "Ei8n6kaK", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

