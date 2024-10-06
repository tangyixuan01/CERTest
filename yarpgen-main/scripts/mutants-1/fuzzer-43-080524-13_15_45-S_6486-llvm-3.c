#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet -> insert-for-snippet -> insert-if-snippet

int g_43 = 0;
int *g_92[2];
int ** const g_177 = &g_92[1];
static int func_55(void)
{
  int qhbfv3Hp = 2147483647;
  int L2UM6J8C = 226284135;
  int WSujv4L0 = -2147483648;
  unsigned LqsSlkTj = 0U;
  int Ecu7sydO = 1861749854;
  int * Na4_bSQs = &g_43;
  unsigned char gidLnB9Z = (unsigned char)0;
  switch (gidLnB9Z)
  {
    case 0x95:
      *Na4_bSQs = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Na4_bSQs = 0x00;
      break;

    default:
      *Na4_bSQs = 0x05;
      break;

  }

  g_43 = 1;
  for (; Ecu7sydO < 2; Ecu7sydO++)
  {
    if (qhbfv3Hp)
    {
      WSujv4L0 = L2UM6J8C;
      __builtin_abort();
    }
    L:
    ;

    int d;
    while (LqsSlkTj <= 0)
      if (*(&d))
      break;

    d = 1;
    LqsSlkTj++;
  }

  transparent_crc(gidLnB9Z, "gidLnB9Z", 1);
  transparent_crc(Ecu7sydO, "Ecu7sydO", 1);
  transparent_crc(LqsSlkTj, "LqsSlkTj", 1);
  transparent_crc(WSujv4L0, "WSujv4L0", 1);
  transparent_crc(L2UM6J8C, "L2UM6J8C", 1);
  transparent_crc(qhbfv3Hp, "qhbfv3Hp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 1;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int p3q2vDjf = 2147483647;
  int S14C7Yxf = -2147483648;
  (0 <= (0 != g_177)) && func_55();
  printf("%d\n", g_43);
  transparent_crc(S14C7Yxf, "S14C7Yxf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (p3q2vDjf > 0)
  {
    S14C7Yxf++;
    p3q2vDjf = p3q2vDjf >> 1;
  }

  transparent_crc(p3q2vDjf, "p3q2vDjf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

