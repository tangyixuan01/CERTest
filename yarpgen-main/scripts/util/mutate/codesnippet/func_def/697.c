//e:int;i:unsigned;c:int;d:int;printf:func int;a:int [6];b:int;h:char;g:int *;fn1:func void;f:int [10]
int main()
{
  for (; e < 6; e++)
    a[e] = e;

  i = -14;
  for (; i >= 8; i++)
  {
    d = --c;
    h = d * 100L;
    if (h)
      ;
    else
    {
      *g = 0;
      break;
    }
  }

  fn1((f[5] >> 8) & 15);
  printf("%d\n", b);
  return 0;
}

