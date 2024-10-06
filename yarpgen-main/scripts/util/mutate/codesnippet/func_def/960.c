//b:char;a:int;c:int *
int main()
{
  for (; b > (-27); b--)
  {
    *c ^= b;
    *c ^= 1;
  }

  while (a > 1)
    ;

  return 0;
}

