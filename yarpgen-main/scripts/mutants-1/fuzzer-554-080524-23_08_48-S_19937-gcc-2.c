#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet -> insert-assignment-snippet

extern void abort(void);
extern size_t strlen(const char *);
extern int strncmp(const char *, const char *, size_t);
int foo(const char *name)
{
  char _r59i1nE = (signed char)127;
  char ScKdm2zb = (signed char)127;
  static const char *debug_sec_names[] = {".debug", ".gnu.linkonce.wi.", ".line", ".stab"};
  int i;
  int flags = 0;
  for (i = (sizeof(debug_sec_names)) / (sizeof(debug_sec_names[0])); i--;)
  {
    ScKdm2zb = ((1958 | _r59i1nE) + 15) & 15;
    if (strncmp(name, debug_sec_names[i], strlen(debug_sec_names[i])) == 0)
    {
      break;
    }
  }

  if (i >= 0)
  {
    flags |= 0x10000;
  }
  transparent_crc(ScKdm2zb, "ScKdm2zb", 1);
  transparent_crc(_r59i1nE, "_r59i1nE", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return flags;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int jDmo4P7p = 1758800412;
  int keEJjyFg = 1820143932;
  int IwlSd4vt = -1348760394;
  IwlSd4vt = 1 + ((keEJjyFg & 2) == keEJjyFg);
  if (foo(".interp") == 0x10000)
  {
    abort();
  }
  transparent_crc(IwlSd4vt, "IwlSd4vt", 1);
  transparent_crc(keEJjyFg, "keEJjyFg", 1);
  transparent_crc(jDmo4P7p, "jDmo4P7p", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((jDmo4P7p >= 0) && (jDmo4P7p > 0))
    __builtin_printf("0\n");
  return 0;
}

