//p:char *;N:volatile int;i:int;value:char [10]
for (i = 0; i < N; i++)
  if (i > 0)
{
  p = ((char *) i) - 1;
  *(value + ((int) p)) = (char) i;
}
