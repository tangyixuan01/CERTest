//itos:func char *;x:long;p:char *;i:int
for (i = 0; i < 4; ++i)
{
  p = itos(x);
  printf("i=%d p=%s\n", i, p);
  --x;
}
