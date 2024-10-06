//aglChoosePixelFormat:func void
void find(const int *alistp)
{
  const int *blist;
  int list[32];
  if (alistp)
    blist = alistp;
  else
  {
    list[3] = 42;
    blist = list;
  }
  aglChoosePixelFormat((GLint *) blist);
}

