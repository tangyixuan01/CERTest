//type:unsigned  value:const unsigned  
for (;; ++av)
{
  if ((av->a_type == type) || ((av->a_type == 1) && (type != 0)))
  {
    av->a_type = type;
    av->a_un.a_val = value;
    return;
  }
}
//type:unsigned  value:const unsigned  
for (;; ++av)
{
  if ((av->a_type == type) || ((av->a_type == 1) && (type != 0)))
  {
    av->a_type = type;
    av->a_un.a_val = value;
    return;
  }
}
