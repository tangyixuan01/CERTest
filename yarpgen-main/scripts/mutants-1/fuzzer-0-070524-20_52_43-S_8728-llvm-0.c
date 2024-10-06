#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

struct S2
{
  unsigned f0 : 27;
  unsigned f1 : 17;
  signed f2 : 18;
};
struct S2 g_99 = {0, 0, 0};
struct S2 *g_248 = &g_99;
int printf(const char *format, ...);
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  M2Tf0VWQ = -2147483648;
  int * qjVbd138 = &M2Tf0VWQ;
  unsigned char FiORIDAn = (unsigned char)0;
  struct S2 l_438 = {1, 1, 1};
  switch (FiORIDAn)
  {
    case 0x95:
      *qjVbd138 = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *qjVbd138 = 0x00;
      break;

    default:
      *qjVbd138 = 0x05;
      break;

  }

  *g_248 = l_438;
  *g_248 = g_99;
  printf("g_99.f0 = %d\n", g_99.f0);
  transparent_crc(FiORIDAn, "FiORIDAn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

