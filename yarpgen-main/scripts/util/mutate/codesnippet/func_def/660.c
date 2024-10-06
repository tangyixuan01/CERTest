//c:int ** volatile;d:int *;a:int;b:int *
int main()
{
  for (a = 0; a < 1; a++)
  {
    *c = d;
    assert(b == (&a));
  }

  return 0;
}

