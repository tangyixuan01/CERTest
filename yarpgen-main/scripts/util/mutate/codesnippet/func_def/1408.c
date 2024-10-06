//b:char;a:int;c:char;d:short
void e()
{
  for (; b; b++)
    d = a + 8;

  for (; d;)
    ;

  f:
  c++;

  if (c)
    goto f;
}

