//strlen:func size_t;i:int;strncmp:func int;debug_sec_names:const char *[]
for (i = (sizeof(debug_sec_names)) / (sizeof(debug_sec_names[0])); i--;)
  if (strncmp(name, debug_sec_names[i], strlen(debug_sec_names[i])) == 0)
  break;
