//b:volatile int;d:int;e:int;o:short;p:int
for (; p >= 0; p--)
{
  o = 0;
  for (; o <= 3; o++)
  {
    d = 0;
    for (; d <= 3; d++)
      b &= 5;

  }

  if (e)
    break;
}
