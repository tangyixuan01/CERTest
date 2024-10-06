//read_s1x:func int;write_s2x:func void
if (read_s1x(&p1->v1))
{
  unsigned short temp;
  temp = p3->v1.x;
  p3->v2.x = temp;
  write_s2x(&p2->v2, 1234);
  temp = p3->v2.x;
  p3->v1.x = temp;
}
