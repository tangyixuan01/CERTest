//mv_space:void *[127];cdr:void *;hal_data:void *[0];state:void *;car:void *;symbol_tab_data:struct symbol_tab_
{
  symbol_ S_nil;
  symbol_ S_t;
};mv_count:unsigned int
if (((unsigned long) state) & (1UL << 62))
{
  void *table = ((Cons) ((void *) (((unsigned long) state) & ((1UL << 56) - 1))))->car;
  while (1)
  {
    unsigned int index = (unsigned long) (((unsigned long) ((Cons) ((void *) (((unsigned long) state) & ((1UL << 56) - 1))))->cdr) & ((2UL << 55) - 1));
    if (index == 0)
      break;
    ((Cons) ((void *) (((unsigned long) state) & ((1UL << 56) - 1))))->cdr = (void *) (((unsigned char *) ((Cons) ((void *) (((unsigned long) state) & ((1UL << 56) - 1))))->cdr) + ((long) (-1)));
    {
      void **KVptr = &((HashedAlist) ((void *) (((unsigned long) table) & ((1UL << 56) - 1))))->hal_data[(3 * index) - 3];
      if (!(KVptr[0] == ((void *) 0x380000000FFFFFFUL)))
      {
        mv_space[0] = (void *) (((unsigned char *) (&symbol_tab_data.S_t)) + (1UL << 58));
        mv_space[1] = KVptr[0];
        mv_space[2] = KVptr[1];
        mv_count = 3;
        return;
      }
    }
  }

}
