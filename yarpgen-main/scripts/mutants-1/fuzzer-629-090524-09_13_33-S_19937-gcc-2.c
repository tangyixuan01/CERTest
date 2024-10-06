#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-for-snippet -> insert-switch-snippet

extern void abort(void);
extern size_t strlen(const char *);
extern int strncmp(const char *, const char *, size_t);
int foo(const char *name)
{
  static const char *debug_sec_names[] = {".debug", ".gnu.linkonce.wi.", ".line", ".stab"};
  int i;
  int flags = 0;
  for (i = (sizeof(debug_sec_names)) / (sizeof(debug_sec_names[0])); i--;)
  {
    if (strncmp(name, debug_sec_names[i], strlen(debug_sec_names[i])) == 0)
    {
      break;
    }
  }

  if (i >= 0)
  {
    flags |= 0x10000;
  }
  return flags;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int GmsBjPUc = 2147483647;
  int Y3gPR1WQ = 2094537661;
  char Y7kJiWyT = (signed char)127;
  int CxldGeby = 2147483647;
  for (unsigned a = 0, b = 0; a < 6; a += 1, b += 2)
    if (b < a)
    return 1;

  int DQ0I1gS9 = 2147483647;
  if (foo(".interp") == 0x10000)
  {
    CxldGeby = ((Y7kJiWyT--) == 0) & (DQ0I1gS9++);
    abort();
    switch (GmsBjPUc)
    {
      case 5:
        Y3gPR1WQ = 1;
        break;

      case 6:
        Y3gPR1WQ = 2;
        break;

      case 7:
        Y3gPR1WQ = 3;
        break;

    }

  }
  transparent_crc(DQ0I1gS9, "DQ0I1gS9", 1);
  transparent_crc(CxldGeby, "CxldGeby", 1);
  transparent_crc(Y7kJiWyT, "Y7kJiWyT", 1);
  transparent_crc(Y3gPR1WQ, "Y3gPR1WQ", 1);
  transparent_crc(GmsBjPUc, "GmsBjPUc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

