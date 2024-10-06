//c:int;bPtr:int *;f:int *
static void fn5()
{
  f = &c;
  *bPtr = 0;
  *f = 0;
}

