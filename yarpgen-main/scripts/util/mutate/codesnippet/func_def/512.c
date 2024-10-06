//e:int;a:int;c:int * volatile;d:int ** volatile
int main()
{
  for (; a <= 0; a++)
  {
    e = 0;
    *d = &e;
    if (*c)
      return 0;
  }

  return 0;
}

