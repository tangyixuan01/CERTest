#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int g_50[] = {0, 0, 0, 0, 1, 0, 0};
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  J4pI8sFK = -442368940;
  int * XpwM9WFd = &J4pI8sFK;
  int E4bUOtqp = 2147483647;
  int i;
  for (i = 0; i <= 1; i++)
  {
    E4bUOtqp = *XpwM9WFd;
    g_50[i + 5] = g_50[i + 4];
  }

  for (i = 0; i < 7; i++)
  {
    printf("%d\n", g_50[i]);
  }

  transparent_crc(E4bUOtqp, "E4bUOtqp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

