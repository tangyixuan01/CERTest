//L:int;ak:double *;k:int;N:int;m:int;n:int
for (k = -m; k < (N - m); k++)
{
  if ((k >= 0) && (k < n))
  {
    *ak = 0.0;
  }
  ak += L;
}
