#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

signed char foo(unsigned char c2)
{
  int  YoSn4Pgb = -858445891;
  int * SZioO2Jp = &YoSn4Pgb;
  unsigned char qvtC0IOK = (unsigned char)163;
  signed char c2_22;
  if ((c2 <= 63) || (c2 == 127))
  {
    goto bb43;
  }
  else
  {
    goto bb20;
    switch (qvtC0IOK)
    {
      case 0x95:
        *SZioO2Jp = qvtC0IOK - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *SZioO2Jp = qvtC0IOK - 0x80;
        break;

      default:
        *SZioO2Jp = 0;
        break;

    }

  }
  bb20:
  if (c2 > 252)
  {
    goto bb43;
  }
  else
  {
    goto bb21;
  }

  bb21:
  ;

  bb24:
  c2_22 = (signed char) c2;

  if (c2_22 >= 0)
  {
    goto bb25;
  }
  else
  {
    goto bb26;
  }
  bb25:
  c2 = (unsigned char) (c2_22 - 64);

  goto bb27;
  bb26:
  c2 = (unsigned char) (c2_22 - 65);

  bb27:
  if (c2 <= 93)
  {
    goto bb28;
  }
  else
  {
    goto bb29;
  }

  bb28:
  c2 = c2 + 33;

  goto bb30;
  bb29:
  c2 = (unsigned char) (((signed char) c2) - 61);

  bb30:
  return c2;

  transparent_crc(qvtC0IOK, "qvtC0IOK", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  bb43:
  return -1;

}

extern void abort(void);
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  C3v2ulki = 2147483647;
  int * _srC13le = &C3v2ulki;
  char  fUpTCYwI = (signed char)-128;
  char * SlVupQfN = &fUpTCYwI;
  char ** NC2aQAq5 = &SlVupQfN;
  signed char res[256] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, -1, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, -1, -1, -1};
  unsigned int c;
  if (*(*NC2aQAq5))
    *_srC13le = 0;
  for (c = 0; c <= 255; ++c)
  {
    if (foo(c) != res[c])
    {
      abort();
    }
  }

  return 0;
}

