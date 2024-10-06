//dSetZero:func void
void test()
{
  double A[12];
  int i;
  dSetZero(A);
  for (i = 0; i < 6; i++)
    A[i + (2 * (i / 2))] = 4;

  dSetZero(A);
}

