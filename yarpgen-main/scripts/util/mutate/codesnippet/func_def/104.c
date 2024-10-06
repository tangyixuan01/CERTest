//b:char [7][2];c:int
char *i()
{
  char *e = &b[6][1];
  if (c)
  {
    char *f = &b[2][1];
    return f;
  }
  return e;
}

