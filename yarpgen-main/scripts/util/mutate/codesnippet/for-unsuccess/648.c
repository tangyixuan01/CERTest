//diff:double;amxb:double;b:double;cosh_amxb:double;xi:double;i:int;a:double
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
