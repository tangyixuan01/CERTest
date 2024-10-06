#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet -> insert-assignment-snippet -> insert-assignment-snippet -> insert-if-snippet -> insert-assignment-snippet

int copysign_bug(double x)
{
  char  S7B0oQZr = (signed char)127;
  char * fOVSajAe = &S7B0oQZr;
  int Q1pN2hG3 = 2147483647;
  int pPyaGbFZ = 833649833;
  int NLj0AFWR = -2147483648;
  int YOeFyL_B = -2147483648;
  int lUy7YRcf = 2147483647;
  int KeGdiVo6 = 2147483647;
  int eVybg36z = -862019836;
  int EviZFuan = -2147483648;
  int O2qKTEMU = -1270709895;
  int H8QMDw_u = -2147483648;
  int ZDP5h41d = -356384497;
  int liDYeog7 = -2147483648;
  transparent_crc(liDYeog7, "liDYeog7", 1);
  transparent_crc(ZDP5h41d, "ZDP5h41d", 1);
  transparent_crc(H8QMDw_u, "H8QMDw_u", 1);
  transparent_crc(O2qKTEMU, "O2qKTEMU", 1);
  transparent_crc(EviZFuan, "EviZFuan", 1);
  transparent_crc(eVybg36z, "eVybg36z", 1);
  transparent_crc(KeGdiVo6, "KeGdiVo6", 1);
  transparent_crc(lUy7YRcf, "lUy7YRcf", 1);
  transparent_crc(YOeFyL_B, "YOeFyL_B", 1);
  transparent_crc(NLj0AFWR, "NLj0AFWR", 1);
  transparent_crc(pPyaGbFZ, "pPyaGbFZ", 1);
  transparent_crc(Q1pN2hG3, "Q1pN2hG3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((x * 0.5) == x)
  {
    return 1;
  }
  else
  {
    if (copysign(1.0, x) < 0.0)
    {
      return 2;
      KeGdiVo6 = lUy7YRcf | (-2);
      O2qKTEMU = ((EviZFuan >= 0) || eVybg36z) ? (0) : (EviZFuan);
    }
    else
    {
      Q1pN2hG3 |= 2 | ((*fOVSajAe) < 0);
      YOeFyL_B = NLj0AFWR > (2147483647 - pPyaGbFZ);
      return 3;
      liDYeog7 = ZDP5h41d > ((int) (((unsigned int) 0x7fffffff) - ((unsigned int) H8QMDw_u)));
    }
  }
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int U0cr_WyF = 2147483647;
  int MvmsuCZE = -1453488459;
  int jCuDh6yg = 998702343;
  int COoJl6Un = 2032912289;
  double x;
  x = -0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  x = 0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  transparent_crc(COoJl6Un, "COoJl6Un", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (jCuDh6yg != 1)
  {
    COoJl6Un = MvmsuCZE && (jCuDh6yg && U0cr_WyF);
    if (MvmsuCZE > 0)
      __builtin_printf("0\n");
  }
  transparent_crc(jCuDh6yg, "jCuDh6yg", 1);
  transparent_crc(MvmsuCZE, "MvmsuCZE", 1);
  transparent_crc(U0cr_WyF, "U0cr_WyF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

