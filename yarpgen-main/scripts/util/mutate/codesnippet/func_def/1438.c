//e:func void;d:short [4][19];f:long long;b:char [60]
int main()
{
  e(9, 1, d);
  for (long l = 0; l < 6; ++l)
    for (long m = 0; m < 4; ++m)
    f ^= b[l + (m * 4)];


  if (f)
    __builtin_abort();
}

