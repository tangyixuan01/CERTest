//u:union 
{
  short f0;
  int f1;
};up:union 
{
  short f0;
  int f1;
} *;a:int
for (; a <= 0; a++)
  if (u.f0 = 1)
  up->f1 = 0;
