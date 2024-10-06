//f1:func void;i:int
if (p->type & 0x01)
{
  f1("1", p->u.i);
}
else
{
  f1("3", p->u.r);
}
