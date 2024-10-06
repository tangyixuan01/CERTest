//do_something:func void
void obj_allocate_commons(struct obj_symbol *sym)
{
  struct common_entry *common_head = (void *) 0;
  for (; sym; sym = sym->next)
  {
    struct common_entry **p;
    struct common_entry *n;
    for (p = &common_head; *p; p = &(*p)->next)
      if (sym->size <= (*p)->sym->size)
      break;

    n = __builtin_alloca(sizeof(*n));
    n->next = *p;
    n->sym = sym;
    *p = n;
  }

  {
    struct common_entry *p;
    for (p = common_head; p; p = p->next)
      do_something(p->sym);

  }
}

