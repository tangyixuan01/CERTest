#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet

struct S0
{
  short f0;
  unsigned f1;
  int f2;
};
int g_12[3] = {-10L, -10L, -10L};
void func_2(int p_3, struct S0 p_4)
{
  int rJISuhDz = -2147483648;
  int RwjTe37Z = 143756020;
  char yY5_E76Q = (signed char)-11;
  volatile int J9GTuRPq = -2129064708;
  int jdRKQ6t5 = -320119212;
  int SRE5hzx9 = -338413314;
  int Wq9YcBQz = 1364523453;
  int Zx0vBGw7 = -2071719094;
  transparent_crc(Zx0vBGw7, "Zx0vBGw7", 1);
  transparent_crc(Wq9YcBQz, "Wq9YcBQz", 1);
  transparent_crc(SRE5hzx9, "SRE5hzx9", 1);
  transparent_crc(jdRKQ6t5, "jdRKQ6t5", 1);
  transparent_crc(J9GTuRPq, "J9GTuRPq", 1);
  transparent_crc(yY5_E76Q, "yY5_E76Q", 1);
  transparent_crc(RwjTe37Z, "RwjTe37Z", 1);
  transparent_crc(rJISuhDz, "rJISuhDz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p_4.f0)
  {
    for (Zx0vBGw7 = 15; Zx0vBGw7 < 22; Zx0vBGw7 += 5)
      if (J9GTuRPq)
    {
      Wq9YcBQz--;
      SRE5hzx9--;
      yY5_E76Q--;
      if (Wq9YcBQz)
      {
        rJISuhDz = (SRE5hzx9 < 0) || ((SRE5hzx9 >= 0) > SRE5hzx9);
        RwjTe37Z = (jdRKQ6t5 ^= 1);
      }
      jdRKQ6t5 = 0;
    }
    else
      yY5_E76Q = 0;

    g_12[2] = p_3;
  }
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  nVWXy6TH = 2147483647;
  int * X9t6WsM4 = &nVWXy6TH;
  unsigned char xOWRg3cS = (unsigned char)255;
  struct S0 g_57 = {1L, 8L, -6L};
  func_2(-1L, g_57);
  printf("%d\n", g_12[2]);
  switch (xOWRg3cS)
  {
    case 0x95:
      *X9t6WsM4 = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *X9t6WsM4 = 0x00;
      break;

    default:
      *X9t6WsM4 = 0x05;
      break;

  }

  transparent_crc(xOWRg3cS, "xOWRg3cS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

