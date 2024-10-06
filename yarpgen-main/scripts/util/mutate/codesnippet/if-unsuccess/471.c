//bf:int [7][2];z:volatile int;h:int;ap:func void;w:volatile int;ad:int *;be:int
if (be)
{
  for (; h >= 0; h--)
  {
    while (z >= w)
    {
      ap();
      *ad = 0;
    }

    ap();
  }

  return bf[3][0];
}
