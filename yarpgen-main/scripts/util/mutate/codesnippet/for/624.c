//h:int;g:int;c:int;e:int
for (; c < 1; c++)
  for (h = 0; h < 2; h++)
{
  (g && h) || (e ^= !g);
  g = 0;
}

