//
void foo()
{
  int b;
  int c;
  int d;
  for (c = 0; c < 16; c++)
    for (b = c, d = 0; d < 3; d++)
    if (b & 1)
    b = 0;


}

