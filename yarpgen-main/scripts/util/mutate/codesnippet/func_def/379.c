//l:int [6];m:int;b:char
void fn2(int b)
{
  m = (m >> 8) ^ l[m ^ b];
}

