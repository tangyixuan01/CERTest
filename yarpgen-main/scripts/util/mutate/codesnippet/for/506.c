//d:unsigned long;f:char;e:int *;c:char;a:char
for (;;)
{
  for (a = 20; a; a++)
  {
    if (c)
    {
      printf("%lu\n", d);
      return 0;
    }
  }

  f = (d++, *e);
}
