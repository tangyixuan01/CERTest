//ir:int;amin:double;tol:double;w:double [4];i:int;t:double;a:double [4]
if ((a[i] > tol) && (((t = w[i] / a[i]) < amin) || (ir == (-1))))
{
  amin = t;
  ir = i;
}
