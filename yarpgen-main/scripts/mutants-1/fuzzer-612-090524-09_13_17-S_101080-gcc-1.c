#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-if-snippet

const struct a
{
  unsigned b : 3;
} c;
char d;
int e;
long f;
void g(const struct a h)
{
  int F79IwGEt = -700828762;
  int uGAMtO_Q = -1933636957;
  int rIWxBRgE = 2147483647;
  unsigned yB5GwpZ_ = 4294967295U;
  for (; yB5GwpZ_ < 3; yB5GwpZ_++)
  {
    while (rIWxBRgE < yB5GwpZ_)
      __builtin_abort();

    for (uGAMtO_Q = 0; uGAMtO_Q < 3; uGAMtO_Q++)
      rIWxBRgE++;

  }

  transparent_crc(yB5GwpZ_, "yB5GwpZ_", 1);
  transparent_crc(rIWxBRgE, "rIWxBRgE", 1);
  transparent_crc(uGAMtO_Q, "uGAMtO_Q", 1);
  transparent_crc(F79IwGEt, "F79IwGEt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; d != 20; d = d + 4)
  {
    int i = h.b;
    e = h.b;
    if (F79IwGEt == 0)
    {
      printf("pass\n");
    }
    f = h.b || 0;
    transparent_crc(i, "i", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  g(c);
}

