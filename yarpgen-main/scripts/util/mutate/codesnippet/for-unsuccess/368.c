//y:double;x:double;i:int;ix:int;dot:double [4]
for (i = 0; i < n; i++)
{
  dot[0] += x[ix] * y[ix];
  dot[1] += x[ix + 1] * y[ix + 1];
  dot[2] += x[ix] * y[ix + 1];
  dot[3] += x[ix + 1] * y[ix];
  ix += inc_x;
}
