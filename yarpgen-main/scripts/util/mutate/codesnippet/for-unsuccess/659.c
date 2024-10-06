//b:int;g:int;f:int;fn4:func int;fn1:func int
for (; g; g = fn1(g, 0))
{
  for (; f; f++)
    fn4(g);

  if (g)
    b = 0;
}
