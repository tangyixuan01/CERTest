//b:int [96][76];c:int [81]
int main()
{
  for (int f = 0; f < 80; ++f)
    for (int g = 0; g < 76; ++g)
    b[f][g] = (c[f] = 9094);


  for (int f = 6; f <= 9; f++)
    for (int g = 6; g <= 75; g++)
    if (b[0][g])
    c[f + 1] *= f + ((unsigned) c[f]);


  printf("%d\n", c[8]);
}

