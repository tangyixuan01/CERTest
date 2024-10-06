//x:double
int copysign_bug(double x)
{
  if ((x * 0.5) == x)
    return 1;
  else
    if (copysign(1.0, x) < 0.0)
    return 2;
  else
    return 3;
}

