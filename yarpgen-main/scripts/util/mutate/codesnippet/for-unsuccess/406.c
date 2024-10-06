//i:int;abort:func void
for (i = 0; i < 256; i++)
  if (sp->a[i] != i)
  abort();
