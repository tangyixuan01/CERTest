//i:int [6];j:int;v:int
void aq(ar)
{
  j = (j & 5) ^ i[j ^ (v & 5)];
  j = (j & 5) ^ i[(j ^ v) & 5];
  j = (j & 4095) ^ ((j ^ v) & 5);
}

