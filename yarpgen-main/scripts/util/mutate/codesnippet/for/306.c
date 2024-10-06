//h:char;g:int *;d:int;i:unsigned;c:int
for (; i >= 8; i++)
{
  d = --c;
  h = d * 100L;
  if (h)
    ;
  else
  {
    *g = 0;
    break;
  }
}
