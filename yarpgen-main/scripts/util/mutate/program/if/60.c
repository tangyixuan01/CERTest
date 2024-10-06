//av:Elf64_auxv_t  type:unsigned  value:const unsigned  
if (av)
  for (;; ++av)
{
  if ((av->a_type == type) || ((av->a_type == 1) && (type != 0)))
  {
    av->a_type = type;
    av->a_un.a_val = value;
    return;
  }
}

