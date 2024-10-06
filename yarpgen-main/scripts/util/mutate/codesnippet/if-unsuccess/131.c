//p:void *;main:func int
if (p == 0)
  return -1;
else
  if (((int (*)(int, char **)) p) != main)
  return 1;
else
  return 0;
