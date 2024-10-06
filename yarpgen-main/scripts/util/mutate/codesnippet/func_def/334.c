//test:func int
int test2(int x)
{
  union s1s2 q[2];
  q->v1.x = 4321;
  return test(q, q + x, q + x);
}

