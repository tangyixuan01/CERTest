//b:int;c:int [2][8];a:int
int main()
{
  for (a = 0; a < 8; a++)
    for (b = 0; b < 2; b++)
    c[b][a] = c[b][b + 6] ^ 1;


  if (c[0][7] != 0)
    __builtin_abort();
  return 0;
}

