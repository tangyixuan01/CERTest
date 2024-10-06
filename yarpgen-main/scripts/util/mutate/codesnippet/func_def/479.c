//e:int;c:int ** volatile;d:int;a:int;b:int *
int main()
{
  d = 1;
  for (; a < 1; a = d)
  {
    *c = &e;
    assert(b);
  }

  return 0;
}

