//im:double;re:double;k:int;inval:double;t2:creal_T [16];i:int;j:int
for (j = 0; j < (16 / 4); j++)
{
  i = j * 4;
  t2[i].re = inval;
  t2[i].im = inval;
  k = i + 3;
  t2[k].re = inval;
  t2[k].im = inval;
  t2[i] = t2[k];
  t2[k].re = inval;
}
