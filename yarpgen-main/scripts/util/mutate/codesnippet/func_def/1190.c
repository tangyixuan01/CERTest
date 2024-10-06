//ld:struct LeafDescriptor
{
  unsigned long ld_tag;
  unsigned long ld_size;
  unsigned long ld_nelements;
  unsigned long ld_descriptor;
};GC_descr_obj_size:func unsigned long
int main()
{
  complex_descriptor d;
  d.ld.ld_tag = 1;
  d.ld.ld_size = 2;
  d.ld.ld_nelements = 3;
  if (GC_descr_obj_size(&d) != 6)
    write(2, "wrong answer\n", 13);
  return 0;
}

