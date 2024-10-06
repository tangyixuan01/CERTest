//b:unsigned;a:int;c:int
void d()
{
  for (; a >= 0; a--)
  {
    --b;
    if (c)
      continue;
    for (;;)
      ;

  }

}

