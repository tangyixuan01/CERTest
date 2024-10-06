//e:func short;c:long *;d:int;b:int [5][4]
int main()
{
  int g;
  int h;
  g = 3;
  for (; g >= 0; g--)
  {
    h = 3;
    for (; h >= 0; h--)
      b[g][h] = b[0][1] && e(1);

  }

  d = b[0][1];
  if (d)
    *c = 4073709551611;
  printf("%d\n", 2);
}

