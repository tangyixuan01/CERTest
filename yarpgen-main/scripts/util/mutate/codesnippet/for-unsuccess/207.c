//tol:double;amin:double;ir:int;w:double [4];nr:int;t:double;i:int;a:double [4]
for (i = 0, ir = -1, amin = DBL_MAX; i < nr; i++)
  if (a[i] > tol)
{
  t = w[i] / a[i];
  if ((t < amin) || (ir == (-1)))
  {
    amin = t;
    ir = i;
  }
}
