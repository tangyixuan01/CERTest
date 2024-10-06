//a:int [6];z:int
int main()
{
  for (int x = 5; x; x--)
    for (int y = z; y >= x; y--)
    a[y - x] += a[y];


  if (a[0] != 7)
    __builtin_abort();
  return 0;
}

