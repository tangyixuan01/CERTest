#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

extern void abort(void);
extern size_t strlen(const char *);
extern int strncmp(const char *, const char *, size_t);
int foo(const char *name)
{
  unsigned mqNvgUlV = 0U;
  unsigned cq8_LtKm = 4294967295U;
  unsigned eOvhPrib = 2029356073U;
  static const char *debug_sec_names[] = {".debug", ".gnu.linkonce.wi.", ".line", ".stab"};
  int i;
  cq8_LtKm = ~(eOvhPrib - (8 || mqNvgUlV));
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
  transparent_crc(eOvhPrib, "eOvhPrib", 1);
  transparent_crc(cq8_LtKm, "cq8_LtKm", 1);
  transparent_crc(mqNvgUlV, "mqNvgUlV", 1);
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

