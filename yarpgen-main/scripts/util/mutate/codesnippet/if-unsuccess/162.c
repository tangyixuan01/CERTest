//x:int;bj:int;bh:int;bz:int;m:int;fn2:func void;v:int [];n:int;aw:int;e:char *;printf:func int
if (aw)
  for (; x; x++)
{
  bz = 0;
  for (; bz < 5; bz++)
  {
    fn2(x & 0xff);
    fn2(v[(bh + (x * 2)) + bz] >> 16);
    if (n)
      printf("%s%d\n", e, m ^ 4294967295U);
    if (bj)
      printf("%d%d%d\n", bh, x, bz);
  }

}

