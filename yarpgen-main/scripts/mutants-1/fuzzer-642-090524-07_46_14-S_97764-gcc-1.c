#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

struct S
{
  int b : 3;
  int c : 28;
  int d : 1;
};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  h6fyJw7d = 2147483647;
  int * GZhJmfyM = &h6fyJw7d;
  unsigned char _EKLJh5l = (unsigned char)255;
  int  bj17UAtC = 2147483647;
  int * x4zL6Weh = &bj17UAtC;
  unsigned char WxYjL51V = (unsigned char)255;
  struct S e = {1, -1};
  if (e.d)
  {
    switch (WxYjL51V)
    {
      switch (_EKLJh5l)
      {
        case 0x95:
          *GZhJmfyM = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *GZhJmfyM = 0x00;
          break;

        default:
          *GZhJmfyM = 0x05;
          break;

      }

      case 0x95:
        *x4zL6Weh = WxYjL51V - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *x4zL6Weh = WxYjL51V - 0x80;
        break;

      default:
        *x4zL6Weh = 0;
        break;

    }

    __builtin_abort();
  }
  transparent_crc(WxYjL51V, "WxYjL51V", 1);
  transparent_crc(_EKLJh5l, "_EKLJh5l", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

