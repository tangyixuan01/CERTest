//ipos:int;ii:int [3]
const int *bar()
{
  if (ipos == 2)
    return nullptr;
  return &ii[++ipos];
}

