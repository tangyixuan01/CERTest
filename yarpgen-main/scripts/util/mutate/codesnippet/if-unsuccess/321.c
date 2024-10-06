//i:int;strlen:func size_t;strncmp:func int;debug_sec_names:const char *[]
if (strncmp(name, debug_sec_names[i], strlen(debug_sec_names[i])) == 0)
  break;
