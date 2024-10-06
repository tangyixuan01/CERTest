#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a;
int b[8] = {2, 0, 0, 0, 0, 0, 0, 0};
int c[8];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  Qz_iFE89 = -1913579856;
  int * uLAK5xEH = &Qz_iFE89;
  unsigned char NlSGHgb7 = (unsigned char)113;
  int  rhesLYmb = -2147483648;
  int * XD1rjve9 = &rhesLYmb;
  unsigned char XpfaUyxt = (unsigned char)158;
  int dfs_DQHn = -1981821824;
  int G6piR0B4 = 706130454;
  int d;
  for (; a < 8; a++)
  {
    switch (XpfaUyxt)
    {
      case 0x95:
        *XD1rjve9 = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *XD1rjve9 = 0x00;
        break;

      default:
        *XD1rjve9 = 0x05;
        break;

    }

    d = b[a] >> 1;
    G6piR0B4 &= (0x1F) ? (dfs_DQHn + G6piR0B4) : (dfs_DQHn);
    c[a] = d != 0;
  }

  printf("%d\n", c[0]);
  transparent_crc(G6piR0B4, "G6piR0B4", 1);
  transparent_crc(dfs_DQHn, "dfs_DQHn", 1);
  transparent_crc(XpfaUyxt, "XpfaUyxt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (NlSGHgb7)
  {
    case 0x95:
      *uLAK5xEH = NlSGHgb7 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *uLAK5xEH = NlSGHgb7 - 0x80;
      break;

    default:
      *uLAK5xEH = 0;
      break;

  }

  transparent_crc(NlSGHgb7, "NlSGHgb7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

