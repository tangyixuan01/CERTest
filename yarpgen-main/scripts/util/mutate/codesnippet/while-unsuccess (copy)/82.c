//ad:int *;z:volatile int;w:volatile int;ap:func void
while (z >= w)
{
  ap();
  *ad = 0;
}
