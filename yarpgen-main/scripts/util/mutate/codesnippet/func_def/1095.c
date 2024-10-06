//c:int [6];d:int;aj:int;g:int [6][5];aw:func void
int main()
{
  int k;
  for (; aj < 6; aj++)
    c[0] = aj;

  aw();
  for (aj = 0; aj < 6; aj++)
    for (k = 0; k < 5; k++)
    d = c[d ^ g[aj][k]];


  if (d != 5)
    __builtin_abort();
  return 0;
}

