//f2:func void
int main(int argc, char **argv)
{
  int i;
  struct val x;
  x.u.i = -2251799813685249LL;
  for (i = 1; i < argc; i++)
  {
    x.type = atoi(argv[i]);
    printf("in main: %016llx\n", x.u.i);
    f2(&x);
  }

  return 0;
}

