//a_un:union 
{
  unsigned long a_val;
};a_type:unsigned long
for (;; ++av)
{
  if ((av->a_type == type) || ((av->a_type == 1) && (type != 0)))
  {
    av->a_type = type;
    av->a_un.a_val = value;
    return;
  }
}
