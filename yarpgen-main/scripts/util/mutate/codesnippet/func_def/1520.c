//i:int;f1:func void
void f2(struct val *p)
{
  if (p->type & 0x01)
  {
    f1("1", p->u.i);
  }
  else
  {
    f1("3", p->u.r);
  }
}

