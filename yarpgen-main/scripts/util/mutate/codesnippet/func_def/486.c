//
int main()
{
  double a[4] = {0.006776, 2.5, 3.0, 0.006776};
  double w[4] = {0.000030, 3.7, 3.0, 0.000030};
  double t;
  double amin;
  int ir;
  int i;
  int nr = 4;
  double tol = 9.31322574615479e-10 * 3.0;
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

  printf("ir=%d\n", ir);
  for (i = 0, ir = -1, amin = DBL_MAX; i < nr; i++)
    if ((a[i] > tol) && (((t = w[i] / a[i]) < amin) || (ir == (-1))))
  {
    amin = t;
    ir = i;
  }

  printf("ir=%d\n", ir);
  return 0;
}

