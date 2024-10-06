//nobugy_routine:func int;bugy_routine:func int
int main(int argc, char **argv)
{
  size_t n1 = 500;
  size_t n2 = 500;
  size_t res1;
  size_t res2;
  res1 = nobugy_routine(n1, n2);
  printf("Results of no bugy routine %i\n", res1);
  res2 = bugy_routine(n1, n2);
  printf("Results of bugy routine %i\n", res2);
}

