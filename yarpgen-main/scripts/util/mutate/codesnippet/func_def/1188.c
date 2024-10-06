//
int main(void)
{
  unsigned a;
  unsigned b;
  unsigned c = 0;
  for (a = 0; a < 10; a++)
  {
    for (b = 0; b < 2; b++)
    {
      c++;
      if (c < a)
      {
        return 123;
      }
    }

  }

  return 0;
}

