//
static signed char foo(signed char left, int right)
{
  if ((left < 0) || (left > (127 >> right)))
  {
    return left;
  }
  else
  {
    return left << right;
  }
}

