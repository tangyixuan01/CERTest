//a_type:unsigned long;a_un:union 
{
  unsigned long a_val;
}
void auxv_up(Elf64_auxv_t *av, unsigned type, const unsigned value)
{
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

}

