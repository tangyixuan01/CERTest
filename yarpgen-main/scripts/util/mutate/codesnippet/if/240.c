//buf:char *;len:size_t
if ((buf + len) < buf)
  printf("true\n");
else
  printf("false\n");
