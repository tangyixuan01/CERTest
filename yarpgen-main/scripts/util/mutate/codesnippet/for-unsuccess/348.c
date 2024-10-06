//b:int [8];i:int;a:int [8]
for (i = 0; i < 8; i++)
{
  if (a[i] != b[i])
    abort();
}
