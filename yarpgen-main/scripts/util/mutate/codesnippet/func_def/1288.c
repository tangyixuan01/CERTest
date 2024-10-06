//
signed char foo(unsigned char c2)
{
  signed char c2_22;
  if ((c2 <= 63) || (c2 == 127))
    goto bb43;
  else
    goto bb20;
  bb20:
  if (c2 > 252)
    goto bb43;
  else
    goto bb21;

  bb21:
  ;

  bb24:
  c2_22 = (signed char) c2;

  if (c2_22 >= 0)
    goto bb25;
  else
    goto bb26;
  bb25:
  c2 = (unsigned char) (c2_22 - 64);

  goto bb27;
  bb26:
  c2 = (unsigned char) (c2_22 - 65);

  bb27:
  if (c2 <= 93)
    goto bb28;
  else
    goto bb29;

  bb28:
  c2 = c2 + 33;

  goto bb30;
  bb29:
  c2 = (unsigned char) (((signed char) c2) - 61);

  bb30:
  return c2;

  bb43:
  return -1;

}

