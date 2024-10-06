//b:unsigned;c:unsigned;a:unsigned
for (a = 0; a < 10; a++)
{
  for (b = 0; b < 2; b++)
  {
    c++;
    if (c < a)
    {
      return 123;
    }
  }

}
