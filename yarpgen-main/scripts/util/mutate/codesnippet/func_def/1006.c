//e:int;i:int *;c:int;d:long;a:int;h:int;g:short *;b:int;f:int
int main()
{
  int *j = &b;
  for (; e; e--)
  {
    d = 9;
    for (; d; d--)
      *j = 8;

    *g = h;
    for (; a <= 9; a++)
      i = &h;

    j = i;
  }

  c = j;
  printf("checksum = %X\n", f);
}

