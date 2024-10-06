#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet -> insert-switch-snippet -> insert-switch-snippet

int func_31(int si1, int si2)
{
  int  lmbhdWCY = -2147483648;
  int * Wyvs0mt4 = &lmbhdWCY;
  unsigned char Cs5hMO9F = (unsigned char)0;
  unsigned char WF5AdB6u = (unsigned char)190;
  char fc3yNYnV = (signed char)-128;
  char rca6K1IF = (signed char)35;
  char Dymbaeru = (signed char)127;
  while (1)
  {
    if (Dymbaeru >= fc3yNYnV)
    {
      for (Dymbaeru = 0; Dymbaeru != (-4); Dymbaeru -= 3)
      {
        while (!WF5AdB6u)
          rca6K1IF = 0;

        continue;
      }

    }
    switch (Cs5hMO9F)
    {
      case 0x95:
        *Wyvs0mt4 = Cs5hMO9F - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *Wyvs0mt4 = Cs5hMO9F - 0x80;
        break;

      default:
        *Wyvs0mt4 = 0;
        break;

    }

    WF5AdB6u = ~fc3yNYnV;
    if (!WF5AdB6u)
      continue;
    return 0;
  }

  transparent_crc(Dymbaeru, "Dymbaeru", 1);
  transparent_crc(rca6K1IF, "rca6K1IF", 1);
  transparent_crc(fc3yNYnV, "fc3yNYnV", 1);
  transparent_crc(WF5AdB6u, "WF5AdB6u", 1);
  transparent_crc(Cs5hMO9F, "Cs5hMO9F", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 1 / si2;
}

int func_38(int left, int right)
{
  int  H1nRMBPJ = -2147483648;
  int * sFTH4RVi = &H1nRMBPJ;
  unsigned char mNUAHh0r = (unsigned char)64;
  transparent_crc(mNUAHh0r, "mNUAHh0r", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (mNUAHh0r)
  {
    case 0x95:
      *sFTH4RVi = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *sFTH4RVi = 0x00;
      break;

    default:
      *sFTH4RVi = 0x05;
      break;

  }

  return (right) ? (left) : (0);
}

int func_39(int left, int right)
{
  int  MEmsYtcC = -2147483648;
  int * zjJRqIE_ = &MEmsYtcC;
  unsigned char mTqcxBkJ = (unsigned char)255;
  switch (mTqcxBkJ)
  {
    case 0x95:
      *zjJRqIE_ = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *zjJRqIE_ = 0x00;
      break;

    default:
      *zjJRqIE_ = 0x05;
      break;

  }

  transparent_crc(mTqcxBkJ, "mTqcxBkJ", 1);
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

