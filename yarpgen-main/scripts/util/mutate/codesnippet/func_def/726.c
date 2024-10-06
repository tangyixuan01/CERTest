//strncmp:func int;strlen:func size_t
int foo(const char *name)
{
  static const char *debug_sec_names[] = {".debug", ".gnu.linkonce.wi.", ".line", ".stab"};
  int i;
  int flags = 0;
  for (i = (sizeof(debug_sec_names)) / (sizeof(debug_sec_names[0])); i--;)
    if (strncmp(name, debug_sec_names[i], strlen(debug_sec_names[i])) == 0)
    break;

  if (i >= 0)
    flags |= 0x10000;
  return flags;
}

