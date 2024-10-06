#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

extern void abort(void);
extern size_t strlen(const char *);
extern int strncmp(const char *, const char *, size_t);
int foo(const char *name)
{
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
    }
  }

  if (i >= 0)
  {
    flags |= 0x10000;
  }
  transparent_crc(W60AX_Ex, "W60AX_Ex", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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

