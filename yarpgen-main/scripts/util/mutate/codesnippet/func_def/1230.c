//map:unsigned char [256];calloc:func void *
AP foo(int n)
{
  AP b = calloc(1, sizeof(A));
  int i;
  for (i = n; i < 256; i++)
    b->map[i] = i;

  return b;
}

