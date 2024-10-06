//array:int [4]
int pack(int array[4])
{
  int ans;
  int ii;
  ans = 0;
  for (ii = 4 - 1; ii >= 0; ii--)
  {
    ans = (2 * ans) + array[ii];
  }

  return ans;
}

