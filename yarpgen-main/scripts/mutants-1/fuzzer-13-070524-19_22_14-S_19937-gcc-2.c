#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet -> insert-if-snippet

extern void abort(void);
extern size_t strlen(const char *);
extern int strncmp(const char *, const char *, size_t);
int foo(const char *name)
{
  int vFL70BYl = 2147483647;
  char Kh2e9I5A = (signed char)-128;
  char _vl6zBSt = (signed char)127;
  int jN0yAbK2 = -2147483648;
  int Ee6UYkA_ = -975145576;
  int  NXFMCGlO = 2147483647;
  int * DyrzQiSx = &NXFMCGlO;
  int kRTYKPtE = 265632953;
  int W60AX_Ex = 1417666999;
  static const char *debug_sec_names[] = {".debug", ".gnu.linkonce.wi.", ".line", ".stab"};
  int i;
  int flags = 0;
  for (i = (sizeof(debug_sec_names)) / (sizeof(debug_sec_names[0])); i--;)
  {
    if (strncmp(name, debug_sec_names[i], strlen(debug_sec_names[i])) == 0)
    {
      break;
      *DyrzQiSx &= 1;
    }
  }

  if (i >= 0)
  {
    flags |= 0x10000;
  }
  transparent_crc(W60AX_Ex, "W60AX_Ex", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (jN0yAbK2)
    vFL70BYl = Ee6UYkA_ < ((3 * (~Kh2e9I5A)) + _vl6zBSt);
  switch (kRTYKPtE)
  {
    case 5:
      W60AX_Ex = 1;
      break;

    case 6:
      W60AX_Ex = 2;
      break;

    case 7:
      W60AX_Ex = 3;
      break;

  }

  transparent_crc(kRTYKPtE, "kRTYKPtE", 1);
  transparent_crc(Ee6UYkA_, "Ee6UYkA_", 1);
  transparent_crc(jN0yAbK2, "jN0yAbK2", 1);
  transparent_crc(_vl6zBSt, "_vl6zBSt", 1);
  transparent_crc(Kh2e9I5A, "Kh2e9I5A", 1);
  transparent_crc(vFL70BYl, "vFL70BYl", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return flags;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  if (foo(".interp") == 0x10000)
  {
    abort();
  }
  return 0;
}

