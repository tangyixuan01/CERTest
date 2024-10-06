//
void foo()
{
  int red = 0;
  int A[3] = {};
  #pragma omp parallel shared(red)
  #pragma omp for CLAUSES
  {
    {
      {
        for (int i = 0; i < 3; i++)
          red += A[i];

      }
    }
  }
}

