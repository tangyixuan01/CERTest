//objs:A [1];idx:int;x:unsigned char
int main()
{
  B *b = (B *) (&objs[idx]);
  b->x++;
  if (b->x)
    b->x = 0;
  assert(!b->x);
  return 0;
}

