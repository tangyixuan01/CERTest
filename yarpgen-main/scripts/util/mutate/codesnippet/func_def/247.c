//from:struct X *;to:struct X *
static void reverse(struct X *from, struct X *to)
{
  do
  {
    struct X temp = *from;
    *from = *to;
    *to = temp;
    from++;
    to--;
  }
  while (from < to);
}

