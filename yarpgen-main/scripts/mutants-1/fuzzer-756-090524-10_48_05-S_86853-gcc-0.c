#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int ws[] = L"\uFFFF";
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  char IMS8dWRH = (signed char)-50;
  int Ggwr0vY3 = 1011474712;
  int KzmswQl_ = 305360377;
  int n0 = __builtin_snprintf(0, 0, "%S", L"\uFFFF");
  int n1 = __builtin_snprintf(0, 0, "%S", ws);
  __builtin_printf("%i == %i\n", n0, n1);
  transparent_crc(KzmswQl_, "KzmswQl_", 1);
  transparent_crc(Ggwr0vY3, "Ggwr0vY3", 1);
  transparent_crc(IMS8dWRH, "IMS8dWRH", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (n0 != n1)
  {
    __builtin_abort();
    for (; KzmswQl_; KzmswQl_++)
      IMS8dWRH = Ggwr0vY3;

  }
}

