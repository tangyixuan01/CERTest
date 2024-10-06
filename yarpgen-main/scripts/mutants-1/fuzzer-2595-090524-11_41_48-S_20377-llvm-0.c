#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int c;
int fn1(char p)
{
  int QpCrXGg_ = -179146149;
  int wYSvoGRu = -1950603576;
  wYSvoGRu = (char) (1656690544 % (QpCrXGg_ ^ 3));
  transparent_crc(wYSvoGRu, "wYSvoGRu", 1);
  transparent_crc(QpCrXGg_, "QpCrXGg_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (p < 0) ? (p) : (p >> 1);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  char d;
  int e;
  c = (b < 0) + 2;
  d = c - 1;
  e = d * 2;
  a = fn1(e);
  if (a != 1)
  {
    __builtin_abort();
  }
  return 0;
}

