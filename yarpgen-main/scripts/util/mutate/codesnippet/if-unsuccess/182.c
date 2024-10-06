//hit:double *;prob:double
if (hit)
{
  printf("#   %f %f\n", fabs(prob - 0.5f), prob);
  *hit = prob;
}
