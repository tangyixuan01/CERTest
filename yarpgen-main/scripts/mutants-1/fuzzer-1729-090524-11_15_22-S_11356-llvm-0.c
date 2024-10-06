#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int func_31(int si1, int si2)
{
  return 1 / si2;
}

int func_38(int left, int right)
{
  return (right) ? (left) : (0);
}

int func_39(int left, int right)
{
  int Ne2C_bf9 = 1539398144;
  int ZQ12kmze = -2147483648;
  char Lrd0xs9c = (signed char)33;
  int joG0Qd_c = 2147483647;
  transparent_crc(joG0Qd_c, "joG0Qd_c", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (joG0Qd_c)
  {
    joG0Qd_c = ZQ12kmze + Ne2C_bf9;
    joG0Qd_c++;
    return Lrd0xs9c;
  }
  transparent_crc(Lrd0xs9c, "Lrd0xs9c", 1);
  transparent_crc(ZQ12kmze, "ZQ12kmze", 1);
  transparent_crc(Ne2C_bf9, "Ne2C_bf9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return left;
}

int func_47(unsigned short left, int right)
{
  return left;
}

int g_3;
volatile int g_66[1];
int g_752;
int g_775;
int func_58()
{
  return g_66[0];
}

int func_20(int p_22, int p_24)
{
  lbl_1476:
  p_24 || func_58();

  if (0 >= g_775)
  {
  }
  else
  {
    for (; g_752; g_752 += 1)
    {
      int w = func_31(0, p_22);
      if (func_38(w, p_24) == g_752)
      {
        break;
      }
      transparent_crc(w, "w", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    }

    goto lbl_1476;
  }
  return 0;
}

int func_4(int p_5, int p_6, int p_7)
{
  int y = func_39(p_6, 0);
  int x = func_47(y, 0);
  func_20(x, g_3);
  transparent_crc(y, "y", 1);
  transparent_crc(x, "x", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int l_2[1];
  l_2[0] = 0;
  func_4(0, l_2[g_3], 0);
  return 0;
}

