//b:struct 
{
  int f0;
  short f1;
  short f2;
  short f3;
};g:short ****
for (b.f3 = 0; b.f3 < 2; b.f3++)
{
  short *****h = 0;
  for (b.f2 = 0; b.f2; b.f2--)
    h = &g;

  assert(!h);
}
