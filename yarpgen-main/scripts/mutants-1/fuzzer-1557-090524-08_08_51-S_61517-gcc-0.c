#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int *c = &a;
unsigned short d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  enwE3D16 = -2147483648;
  int * bi8zKRGH = &enwE3D16;
  unsigned char pUWcwGmq = (unsigned char)255;
  unsigned int e = a;
  *c = 1;
  if (!b)
  {
    d = e;
    *c = d | e;
  }
  if (a != 0)
  {
    __builtin_abort();
  }
  transparent_crc(pUWcwGmq, "pUWcwGmq", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (pUWcwGmq)
  {
    case 0x95:
      *bi8zKRGH = pUWcwGmq - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *bi8zKRGH = pUWcwGmq - 0x80;
      break;

    default:
      *bi8zKRGH = 0;
      break;

  }

  return 0;
}

