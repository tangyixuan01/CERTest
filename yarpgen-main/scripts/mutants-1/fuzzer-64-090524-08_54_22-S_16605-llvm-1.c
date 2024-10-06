#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-assignment-snippet

int a = -1;
int b;
unsigned int foo(int p)
{
  short sMYIqjkb = (short)11542;
  unsigned W1nB5qYQ = 3848220848U;
  int oeXNE9FM = -1605889337;
  short IbEv4VZs = (short)-7365;
  int gaSQnYzf = 608810977;
  int PBWFTGrE = -1537989921;
  for (PBWFTGrE = 0; PBWFTGrE < 5; PBWFTGrE++)
    gaSQnYzf = PBWFTGrE * PBWFTGrE;

  transparent_crc(PBWFTGrE, "PBWFTGrE", 1);
  transparent_crc(gaSQnYzf, "gaSQnYzf", 1);
  transparent_crc(IbEv4VZs, "IbEv4VZs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  sMYIqjkb = ((~oeXNE9FM) | ((~W1nB5qYQ) ^ ((~IbEv4VZs) + sMYIqjkb))) | 2;
  transparent_crc(oeXNE9FM, "oeXNE9FM", 1);
  transparent_crc(W1nB5qYQ, "W1nB5qYQ", 1);
  transparent_crc(sMYIqjkb, "sMYIqjkb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if ((b = 1 % foo(a)) > a)
  {
    return 0;
  }
  return 1;
}

