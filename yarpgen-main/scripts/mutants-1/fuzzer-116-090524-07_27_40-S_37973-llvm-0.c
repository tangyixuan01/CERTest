#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int lzcnt(int x)
{
  int count = 0;
  while (x > 0)
  {
    count++;
    x = x >> 1;
  }

  return count;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  op2GeFRz = -2147483648;
  int * Y0XtTqcj = &op2GeFRz;
  unsigned char QTD91q6Y = (unsigned char)63;
  int x = 1;
  int y = lzcnt(x);
  printf("count  = %d\n", y);
  transparent_crc(QTD91q6Y, "QTD91q6Y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (QTD91q6Y)
  {
    case 0x95:
      *Y0XtTqcj = QTD91q6Y - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Y0XtTqcj = QTD91q6Y - 0x80;
      break;

    default:
      *Y0XtTqcj = 0;
      break;

  }

  return 0;
}

