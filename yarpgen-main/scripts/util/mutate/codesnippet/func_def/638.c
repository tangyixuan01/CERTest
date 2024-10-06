//b:int [1];a:short;c:func int;f:func void
void g()
{
  int h = a = 0;
  for (; (h + a) <= 0; a++)
  {
    if (b[c(a - 6)])
      break;
    f(a);
  }

}

