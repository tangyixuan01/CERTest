//b:float [(1024 * 1024) * 1024];a:float [(1024 * 1024) * 1024];c:float [(1024 * 1024) * 1024]
void f_nonomp(void)
{
  int i;
  for (i = 0; i < ((1024 * 1024) * 1024); i++)
    c[i] = a[i] + b[i];

}

