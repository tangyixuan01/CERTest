//
void f(int *)(int *out)
{
  {
    int i;
    #pragma omp simd linear(i:1)
    for (i = 0; i < 100; i = i + 1)
    {
      _1 = i / 2;
      _2 = (long unsigned int) _1;
      _3 = _2 * 4;
      _4 = out + _3;
      *_4 = i;
    }

  }
}

