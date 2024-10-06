//f2:func void;x:struct val;i:int
for (i = 1; i < argc; i++)
{
  x.type = atoi(argv[i]);
  printf("in main: %016llx\n", x.u.i);
  f2(&x);
}
