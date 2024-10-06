//
int main(int argc, char **argv)
{
  double p = 0.00053447623258905705;
  double inv_log_of_base = 10000.499991668185;
  int r = log(p) * inv_log_of_base;
  printf("a: %d\n", r);
  double gr = log(p) * inv_log_of_base;
  printf("b: %g\n", gr);
  double g = log(p);
  int c = g * inv_log_of_base;
  printf("c: %d\n", c);
  return 0;
}

