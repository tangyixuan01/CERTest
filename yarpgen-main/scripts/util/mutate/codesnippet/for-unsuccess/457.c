//copy:func void;exit:func void;cmp:func int;random:func void;v:int [64];n:int;w:int [64];j:int
for (j = 1; j <= sz; j++)
{
  n = ((2 * j) - 1) * ((2 * j) - 1);
  random(w, n);
  copy(v, w, n);
  if (comm)
  {
    if (cmp(v, w, n))
      exit(-1);
  }
}
