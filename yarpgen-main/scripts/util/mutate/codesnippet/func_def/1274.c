//pack:func int;unpack:func void
int foo()
{
  int temp;
  int ans;
  int array[4];
  unpack(array);
  temp = array[0];
  array[0] = array[2];
  array[2] = temp;
  ans = pack(array);
  return ans;
}

