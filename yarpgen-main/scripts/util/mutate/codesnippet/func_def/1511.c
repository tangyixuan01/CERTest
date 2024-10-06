//
int main()
{
  int v[] = {5000, 5001, 5002, 5003};
  long s = 0;
  int i;
  for (i = 0; i < 4; ++i)
  {
    long P = v[i];
    s += (P * P) * P;
  }

  printf("%ld\n", s);
}

