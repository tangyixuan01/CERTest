//g:func void
void f(int l)
{
  unsigned i;
  for (i = 0; i < l; i++)
  {
    int y = i;
    int z = y * (-32);
    g(z);
  }

}

