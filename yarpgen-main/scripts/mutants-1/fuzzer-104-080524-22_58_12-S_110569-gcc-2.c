#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet -> insert-if-snippet

int printf(const char *format, ...);
short a = 1;
unsigned int b[1][2][16][4];
signed char d[1][2][16][4];
unsigned int res;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short QDdC6AMS = (short)-32768;
  unsigned short v9raYsIf = (unsigned short)43708;
  int xDCzu4wY = 965545041;
  int nekGb1Wm = -2147483648;
  int Ip8Nl7dM = 2147483647;
  int qZ_y8NX1 = -2147483648;
  int OhpHFnBZ = -2147483648;
  int Mn_WE1mi = 53622025;
  int YhLzwpfE = -1601322170;
  int EIvikyT6 = -2147483648;
  int  vnqsFApE = 133969178;
  int * qnIv56c_ = &vnqsFApE;
  unsigned char K9Cgwqb_ = (unsigned char)151;
  for (int i = 0; i < 16; ++i)
  {
    switch (K9Cgwqb_)
    {
      case 0x95:
        *qnIv56c_ = K9Cgwqb_ - 0x91;
        break;

      case 0x80:

      case 0x81:

      for (;;)
      {
        nekGb1Wm = Ip8Nl7dM;
        nekGb1Wm = (nekGb1Wm) ? (0) : (1 % nekGb1Wm);
        OhpHFnBZ = xDCzu4wY + 1;
        for (; YhLzwpfE < 1; YhLzwpfE = OhpHFnBZ)
        {
          EIvikyT6 = (Mn_WE1mi == 0) ? (0) : (1 % Mn_WE1mi);
          if (Mn_WE1mi < 1)
            qZ_y8NX1 = 0;
          else
            if (EIvikyT6)
            break;
          if (QDdC6AMS < v9raYsIf)
          {
            v9raYsIf = QDdC6AMS;
            QDdC6AMS = ~QDdC6AMS;
          }
        }

        if (Ip8Nl7dM)
          return 0;
      }

      case 0x82:
        *qnIv56c_ = K9Cgwqb_ - 0x80;
        break;

      default:
        *qnIv56c_ = 0;
        break;

    }

    for (int j = 2; j < 4; ++j)
    {
      d[0][1][i][j] = (signed char) (-47);
    }

  }

  for (signed char i = 0; i < 16; i += 4)
  {
    for (signed char j = 2; j < 10; j += 4)
    {
      res = (1 < ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]))) ? (1) : ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]));
    }

  }

  transparent_crc(K9Cgwqb_, "K9Cgwqb_", 1);
  transparent_crc(EIvikyT6, "EIvikyT6", 1);
  transparent_crc(YhLzwpfE, "YhLzwpfE", 1);
  transparent_crc(Mn_WE1mi, "Mn_WE1mi", 1);
  transparent_crc(OhpHFnBZ, "OhpHFnBZ", 1);
  transparent_crc(qZ_y8NX1, "qZ_y8NX1", 1);
  transparent_crc(Ip8Nl7dM, "Ip8Nl7dM", 1);
  transparent_crc(nekGb1Wm, "nekGb1Wm", 1);
  transparent_crc(xDCzu4wY, "xDCzu4wY", 1);
  transparent_crc(v9raYsIf, "v9raYsIf", 1);
  transparent_crc(QDdC6AMS, "QDdC6AMS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", res);
}

