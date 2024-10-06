//hitdev:double;dev:double;slotdev:double;hit:double *;pp:double *
if ((dev > slotdev) && (hitdev > slotdev))
{
  hit = pp;
  hitdev = slotdev;
}
