#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

void * volatile p;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  char Xl70AdSy = (signed char)-93;
  const int fBWmhPiA = -1730987793;
  int qBo4W5Lt = 18051764;
  int DbgWfQzv = -2028233696;
  int n = 0;
  lab:
  ;

  {
    int x[(n % 1000) + 1];
    x[0] = 1;
    x[n % 1000] = 2;
    p = x;
    n++;
  }
  {
    int x[(n % 1000) + 1];
    qBo4W5Lt = (~(DbgWfQzv || 0)) ^ (fBWmhPiA & (~Xl70AdSy));
    x[0] = 1;
    x[n % 1000] = 2;
    p = x;
    n++;
  }
  if (n < 1000000)
  {
    goto lab;
  }
  transparent_crc(DbgWfQzv, "DbgWfQzv", 1);
  transparent_crc(qBo4W5Lt, "qBo4W5Lt", 1);
  transparent_crc(fBWmhPiA, "fBWmhPiA", 1);
  transparent_crc(Xl70AdSy, "Xl70AdSy", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

