//e:int;c:int;d:long long [32];a:int;b:int
int main()
{
  for (; a < 6; a++)
  {
    b ^= e;
    for (c = 0; c < 2; c++)
      d[a * 6] |= 9;

  }

  if (d[12] != 13)
    __builtin_abort();
  return 0;
}

