#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  int keEJjyFg = 1820143932;
  int IwlSd4vt = -1348760394;
  IwlSd4vt = 1 + ((keEJjyFg & 2) == keEJjyFg);
  if (foo(".interp") == 0x10000)
  {
    abort();
  }
  transparent_crc(IwlSd4vt, "IwlSd4vt", 1);
  transparent_crc(keEJjyFg, "keEJjyFg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

