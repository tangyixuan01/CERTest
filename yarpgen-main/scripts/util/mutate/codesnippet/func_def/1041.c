//e:int *;a:int *;f:int **;g:int;b:int ** volatile
void foo()
{
  for (;;)
  {
    assert(a == 0);
    *f = &g;
    *b = 0;
    assert(a == 0);
    *f = 0;
    if (*e)
      break;
  }

}

