//h:int *;d:int;i:int;c:int
for (i = 24; i; i--)
{
  for (c = 0; c < 6; c++)
    d |= 1;

  *h |= d;
}
