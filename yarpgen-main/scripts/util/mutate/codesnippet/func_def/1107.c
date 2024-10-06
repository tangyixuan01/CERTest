//printf:func int;c:char [6][1];f:volatile int;h:func void
int main()
{
  h();
  for (; f < 6; f++)
    printf("%d\n", c[f][0]);

}

