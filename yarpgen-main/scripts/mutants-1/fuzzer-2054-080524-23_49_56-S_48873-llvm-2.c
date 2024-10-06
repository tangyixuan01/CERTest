#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a = 0;
void b()
{
  int Psxoz8qN = 586948961;
  int UtvIrAk6 = -2147483648;
  int Ak14O2Nu = 2147483647;
  int q0oiMHP_ = 2147483647;
  switch (Psxoz8qN)
  {
    case 5:
      UtvIrAk6 = 1;
      break;

    case 6:
      UtvIrAk6 = 2;
      break;

    case 7:
      UtvIrAk6 = 3;
      break;

  }

  unsigned kAlqzgZp = 1955108890U;
  q0oiMHP_ &= kAlqzgZp % Ak14O2Nu;
  a = 0;
  transparent_crc(kAlqzgZp, "kAlqzgZp", 1);
  transparent_crc(q0oiMHP_, "q0oiMHP_", 1);
  transparent_crc(Ak14O2Nu, "Ak14O2Nu", 1);
  transparent_crc(UtvIrAk6, "UtvIrAk6", 1);
  transparent_crc(Psxoz8qN, "Psxoz8qN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; a <= 4; a++)
  {
    ;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * afI3w_0X = &a;
  unsigned char UAiT46jG = (unsigned char)103;
  b();
  transparent_crc(UAiT46jG, "UAiT46jG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (UAiT46jG)
  {
    case 0x95:
      *afI3w_0X = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *afI3w_0X = 0x00;
      break;

    default:
      *afI3w_0X = 0x05;
      break;

  }

  printf("%d\n", a);
}

