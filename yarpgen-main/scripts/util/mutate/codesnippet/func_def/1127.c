//re:double;im:double
int main()
{
  int k;
  int i;
  int j;
  creal_T t2[16];
  double inval;
  inval = 1.0;
  for (j = 0; j < 16; ++j)
  {
    t2[j].re = 0;
    t2[j].im = 0;
  }

  for (j = 0; j < (16 / 4); j++)
  {
    i = j * 4;
    t2[i].re = inval;
    t2[i].im = inval;
    k = i + 3;
    t2[k].re = inval;
    t2[k].im = inval;
    t2[i] = t2[k];
    t2[k].re = inval;
  }

  printf("\n");
  for (i = 0; i < 2; ++i)
  {
    printf("t2[%2d] = %g + %g*i\n", i, t2[i].re, t2[i].im);
  }

}

