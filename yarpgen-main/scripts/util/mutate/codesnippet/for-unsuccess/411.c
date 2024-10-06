//g:int [2];f:int;c:int
for (; c < 2; c++)
{
  {
    char h[20];
    char *b = h;
    int d = 48;
    int e = 0;
    while (d && (e < 5))
      b[e++] = (d /= 10);

    f = e;
  }
  g[(f - 2) + c] = 0;
}
