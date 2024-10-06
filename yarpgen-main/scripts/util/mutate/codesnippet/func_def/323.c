//a:unsigned
int main()
{
  unsigned b = 1;
  for (; b < 4; b++)
  {
    a = (a ^ 2000000000) * (-b);
    if (b > a)
    {
      __builtin_abort();
    }
    a = 3000000000;
  }

  return 0;
}

