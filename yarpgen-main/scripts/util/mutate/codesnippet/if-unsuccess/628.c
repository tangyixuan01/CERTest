//value:char [10];i:int;p:char *
if (i > 0)
{
  p = ((char *) i) - 1;
  *(value + ((int) p)) = (char) i;
}
