//
double optimize_hildreth_despo(long n, long b1, long b2, double *g, double *g0, double *ce, double *ce0, double *low, double *up, double *init)
{
  double t;
  if (ce[b1] != ce[b2])
  {
    t = 0;
  }
  else
    if ((g[(b1 * n) + b1] > 0) || (g[(b2 * n) + b2] > 0))
  {
    t = (((((ce[b2] / ce[b1]) * g0[b1]) - g0[b2]) + (ce0[0] * (((g[(b1 * n) + b1] * ce[b2]) / ce[b1]) - (g[(b1 * n) + b2] / ce[b1])))) / (((((ce[b2] * ce[b2]) / (ce[b1] * ce[b1])) * g[(b1 * n) + b1]) + g[(b2 * n) + b2]) - (2 * ((g[(b1 * n) + b2] * ce[b2]) / ce[b1])))) - init[b2];
    if ((up[b2] - init[b2]) < t)
    {
      t = up[b2] - init[b2];
    }
    if ((init[b2] - low[b2]) < (-t))
    {
      t = -(init[b2] - low[b2]);
    }
    if ((up[b1] - init[b1]) < (-t))
    {
      t = -(up[b1] - init[b1]);
    }
    if ((init[b1] - low[b1]) < t)
    {
      t = init[b1] - low[b1];
    }
  }
  return t;
}

