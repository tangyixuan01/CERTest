//b:struct 
{
  unsigned char a;
};c:int
int d()
{
  short int ***e[9];
  short int ****f[][9] = {&e[2], &e[2], &e[2], &e[2], &e[2], &e[2], &e[2], &e[2], &e[2]};
  unsigned char *g = &b.a;
  for (c = 7; c; --c)
    *g = f[0][1] != (&e[2]);

  return 0;
}

