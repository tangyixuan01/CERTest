//sd:struct SequenceDescriptor
{
  unsigned long sd_tag;
  union ComplexDescriptor *sd_first;
  union ComplexDescriptor *sd_second;
};ld:struct LeafDescriptor
{
  unsigned long ld_tag;
  unsigned long ld_size;
  unsigned long ld_nelements;
  unsigned long ld_descriptor;
};ad:struct ComplexArrayDescriptor
{
  unsigned long ad_tag;
  unsigned long ad_nelements;
  union ComplexDescriptor *ad_element_descr;
}
unsigned long GC_descr_obj_size(d)
register complex_descriptor *d;
{
  switch (d->ld.ld_tag)
  {
    case 1:
      return d->ld.ld_nelements * d->ld.ld_size;

    case 2:
      return d->ad.ad_nelements * GC_descr_obj_size(d->ad.ad_element_descr);

    case 3:
      return GC_descr_obj_size(d->sd.sd_first) + GC_descr_obj_size(d->sd.sd_second);

    default:
      return 17;
      return 0;

  }

}

