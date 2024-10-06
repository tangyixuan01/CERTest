//y:double;x:double
double dot(int n, const double *x, int inc_x, const double *y)
{
  int i;
  int ix;
  double dot[4] = {0.0, 0.0, 0.0, 0.0};
  ix = 0;
  for (i = 0; i < n; i++)
  {
    dot[0] += x[ix] * y[ix];
    dot[1] += x[ix + 1] * y[ix + 1];
    dot[2] += x[ix] * y[ix + 1];
    dot[3] += x[ix + 1] * y[ix];
    ix += inc_x;
  }

  return ((dot[0] + dot[1]) + dot[2]) + dot[3];
}

