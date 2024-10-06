#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet -> insert-switch-snippet -> insert-assignment-snippet -> insert-switch-snippet

static int p[48];
static int v;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  eRGhlnDf = -961754492;
  int * ZYOXaL9D = &eRGhlnDf;
  unsigned char INn9Q6ad = (unsigned char)42;
  int EpfqKd8M = -391244838;
  int rmHeGpUK = 342782226;
  int tglqPT1k = 2147483647;
  short MvU9oPJa = (short)32767;
  int  Kctf5_Xl = -1106871153;
  int * tTlKdajo = &Kctf5_Xl;
  unsigned char b2RKCUc8 = (unsigned char)169;
  int  NDqjsCFo = -2147483648;
  int * iC1puGQx = &NDqjsCFo;
  unsigned char FV0DCYaI = (unsigned char)189;
  int sWoFPuLl = -2147483648;
  short jSg7G5El = (short)-32768;
  p[32] = 1;
  for (int i = 48; i--;)
  {
    if (p[i])
    {
      if ((i > 39) || ((i > 7) && ((i & 7) > 2)))
      {
        break;
      }
      if (i < 8)
      {
        v = 1;
      }
      else
      {
        if (!(i & 1))
        {
          v = 2;
        }
        else
        {
          v = 3;
          switch (b2RKCUc8)
          {
            case 0x95:
              *tTlKdajo = 0x01;
              break;

            case 0x80:

            case 0x81:

            case 0x82:
              *tTlKdajo = 0x00;
              break;

            default:
              *tTlKdajo = 0x05;
              break;

          }

        }
      }
    }
  }

  if (v != 2)
  {
    sWoFPuLl = 65527 & (++jSg7G5El);
    switch (FV0DCYaI)
    {
      case 0x95:
        *iC1puGQx = 0x01;
        break;

      tglqPT1k = (-EpfqKd8M) ^ (1958 + ((~((MvU9oPJa / 65531) || (rmHeGpUK > 0))) / 13));
      case 0x80:

      case 0x81:

      case 0x82:
        *iC1puGQx = 0x00;
        break;

      default:
        *iC1puGQx = 0x05;
        break;

    }

    __builtin_abort();
  }
  transparent_crc(jSg7G5El, "jSg7G5El", 1);
  transparent_crc(sWoFPuLl, "sWoFPuLl", 1);
  transparent_crc(FV0DCYaI, "FV0DCYaI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (INn9Q6ad)
  {
    case 0x95:
      *ZYOXaL9D = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *ZYOXaL9D = 0x00;
      break;

    default:
      *ZYOXaL9D = 0x05;
      break;

  }

  transparent_crc(b2RKCUc8, "b2RKCUc8", 1);
  transparent_crc(MvU9oPJa, "MvU9oPJa", 1);
  transparent_crc(tglqPT1k, "tglqPT1k", 1);
  transparent_crc(rmHeGpUK, "rmHeGpUK", 1);
  transparent_crc(EpfqKd8M, "EpfqKd8M", 1);
  transparent_crc(INn9Q6ad, "INn9Q6ad", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

