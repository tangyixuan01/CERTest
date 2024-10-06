//
int main()
{
  const int N = 8;
  int v[N];
  for (int k = 0; k < N; k++)
    v[k] = k;

  v[0] = 77;
  int found_index = -1;
  for (int k = 0; k < N; k++)
  {
    if (v[k] == 77)
      found_index = k;
  }

  printf("found_index = %d\n", found_index);
}

