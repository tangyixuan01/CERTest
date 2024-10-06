//i:unsigned;abort:func void
void g(int i)
{
  static int x = 0;
  if (i == 0)
    x++;
  if (x > 1)
    abort();
}

