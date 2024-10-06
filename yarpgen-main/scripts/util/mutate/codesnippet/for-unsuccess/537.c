//p:double *;i:int;q:double *;j:int
for (j = 0; j < 32; ++j)
{
  for (i = 0; i < 4; ++i)
  {
    q[i] = p[i];
  }

  q += 4;
  p += 5;
}
