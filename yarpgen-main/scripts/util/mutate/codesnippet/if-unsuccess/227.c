//phi:int;foo:func int
if (phi > 10)
{
  phi = 1;
}
else
  if (phi < 5)
{
  if (foo(phi))
    return;
  else
    phi = phi - 1;
}
else
{
  phi = 0;
  break;
}
