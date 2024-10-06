//e:int *;c:char;printf:func int;a:char;f:char;g:int;b:int
int main()
{
  int h = 0;
  for (; a < 1; a++)
  {
    int *i[5];
    int **j = &i[4];
    int ***k[3][2] = {{&j}};
    int ****l = &k[2][1];
    int *****m = &l;
    char *n = &c;
    f = (*e = (g = 0));
    for (; g < 2; g++)
    {
      for (b = 0; b < 3; b++)
        h = (h && (*n = 0)) == 0;

      if (g)
        break;
    }

  }

  printf("%d\n", f);
  return 0;
}

