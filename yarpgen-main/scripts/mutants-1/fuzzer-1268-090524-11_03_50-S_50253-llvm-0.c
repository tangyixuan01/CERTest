#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

static int a;
static int *b[10][9];
int main()
{
  platform_main_begin();
  crc32_gentab();
  long j3iJcLm4 = 9223372036854775807LL;
  int PMwNr3Zq = 1031781419;
  char Fs8yxRcN = (signed char)-110;
  int S3VcR_rU = -1594435671;
  for (a = 0; a < 9; a++)
  {
    b[5][a] = b[a + 1][4];
    j3iJcLm4 = (((~j3iJcLm4) / (~Fs8yxRcN)) / PMwNr3Zq) ^ (~S3VcR_rU);
  }

  transparent_crc(S3VcR_rU, "S3VcR_rU", 1);
  transparent_crc(Fs8yxRcN, "Fs8yxRcN", 1);
  transparent_crc(PMwNr3Zq, "PMwNr3Zq", 1);
  transparent_crc(j3iJcLm4, "j3iJcLm4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

