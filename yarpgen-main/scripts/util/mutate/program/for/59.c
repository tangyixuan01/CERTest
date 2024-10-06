//d:volatile int  b:short  e:char  g:int  c:char  a:volatile int  
for (; d <= 1; d++)
{
  b ^= 2;
  e = ((g >= 32) || (b > (5 >> g))) ? (b) : (g);
  c[2][0] = e;
  a;
  g = 0;
  for (; g <= 1; g++)
    ;

}
