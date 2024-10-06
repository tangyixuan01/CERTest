//array:int [4]
void unpack(int array[4])
{
  int ii;
  int val;
  val = 1;
  for (ii = 0; ii < 4; ii++)
  {
    array[ii] = val % 2;
    val = val / 2;
  }

  return;
}

