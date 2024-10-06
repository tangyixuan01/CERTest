#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a[3] = {1, 2, 3};
int c[3] = {4, 5, 6};
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  qDJ4WM61 = 2147483647;
  int * _ExjrCu1 = &qDJ4WM61;
  int ** rhKm7pvA = &_ExjrCu1;
  int *** vtCxcwWm = &rhKm7pvA;
  int **** Ee7XqSAF = &vtCxcwWm;
  int cXm9YRiB = -2147483648;
  int  eF9s24tj = -2147483648;
  int * E8tpJg4X = &eF9s24tj;
  int ** MBRVnPEf = &E8tpJg4X;
  int *** IgW93RUw = &MBRVnPEf;
  int b[3];
  int i;
  b[0] = 1;
  b[1] = 2;
  b[2] = 3;
  for (i = 0; i < 3; i++)
  {
    if (a[i] != b[i])
    {
      puts("ERR 1");
      break;
    }
  }

  b[0] = 4;
  b[1] = 5;
  b[2] = 6;
  for (i = 0; i < 3; i++)
  {
    if (!cXm9YRiB)
      *(*(*Ee7XqSAF)) = *(*IgW93RUw);
    if (c[i] != b[i])
    {
      puts("ERR 2");
      break;
    }
  }

  transparent_crc(cXm9YRiB, "cXm9YRiB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

