#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-while-snippet -> insert-switch-snippet

int a = 0;
int e = 0;
int b = 0;
short c[2] = {0, 0};
int *a_ptr = &a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * NkD7A2bp = &a;
  unsigned char Y4ykoe1N = (unsigned char)255;
  int V3cYQnfe = 2147483647;
  char  DwCbYanK = (signed char)99;
  char * Vcvmx6uQ = &DwCbYanK;
  int gqbiexZa = 1797371534;
  int f9Q5E0vZ = 269027293;
  while (V3cYQnfe && (gqbiexZa < 5))
    Vcvmx6uQ[gqbiexZa++] = (V3cYQnfe /= 10);

  signed corqQ065 = 1;
  long VxSUOXcK = -4026732372213606655LL;
  c[0] = 1;
  for (b = 1; b >= 0; b--)
  {
    e = (*a_ptr = c[b]);
    corqQ065 = corqQ065 << (f9Q5E0vZ / VxSUOXcK);
    switch (Y4ykoe1N)
    {
      case 0x95:
        *NkD7A2bp = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *NkD7A2bp = 0x00;
        break;

      default:
        *NkD7A2bp = 0x05;
        break;

    }

  }

  c[0] = 0;
  transparent_crc(VxSUOXcK, "VxSUOXcK", 1);
  transparent_crc(corqQ065, "corqQ065", 1);
  transparent_crc(f9Q5E0vZ, "f9Q5E0vZ", 1);
  transparent_crc(gqbiexZa, "gqbiexZa", 1);
  transparent_crc(V3cYQnfe, "V3cYQnfe", 1);
  transparent_crc(Y4ykoe1N, "Y4ykoe1N", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("checksum = %X\n", a);
}

