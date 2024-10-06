//
void evallogisticML(const double *x, const int n, double *params, double *fvec, double **fjac)
{
  int i;
  double a;
  double b;
  double amxb;
  double cosh_amxb;
  double nd;
  double xi;
  double diff;
  a = params[0];
  b = params[1];
  nd = (double) n;
  fvec[0] = (fvec[1] = (fjac[0][0] = (fjac[1][0] = (fjac[0][1] = (fjac[1][1] = 0.0)))));
  for (i = 0; i < n; ++i)
  {
    xi = x[i];
    diff = a - xi;
    amxb = diff / b;
    cosh_amxb = cosh(amxb);
    fvec[0] += tanh(amxb / 2.0);
    fvec[1] += diff * tanh(amxb / 2.0);
    fjac[0][0] += 1.0 / (1.0 + cosh(amxb));
    fjac[0][1] += diff / (1.0 + cosh_amxb);
    fjac[1][0] += (diff + (b * sinh(amxb))) / (1.0 + cosh_amxb);
    fjac[1][1] += (diff * diff) / (1.0 + cosh_amxb);
  }

  fvec[0] = fvec[0];
  fvec[1] -= b * nd;
  fjac[0][0] /= b;
  fjac[0][1] /= b * b;
  fjac[1][0] /= b;
  fjac[1][1] = ((-fjac[1][1]) / (b * b)) - nd;
}

