//mid_wts:double [8][35];in_pats:double [1][35]
double do_mid_forward(int patt)
{
  double sum;
  int neurode;
  int i;
  for (neurode = 0; neurode < 8; neurode++)
  {
    sum = 0.0;
    for (i = 0; i < 35; i++)
    {
      sum += mid_wts[neurode][i] * in_pats[patt][i];
    }

    sum = 1.0 / (1.0 + sum);
  }

  return sum;
}

