//
int foo()
{
  int a = 0;
  int i;
  #pragma omp for firstprivate(a)
  for (i = 0; i < 10; i++)
    a += i;

  return a;
}

