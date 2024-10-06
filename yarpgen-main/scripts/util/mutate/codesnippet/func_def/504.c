//
void f(int *p, int **q)
{
  int i;
  for (i = 0; i < 40; i++)
    *(q++) = &p[i];

}

