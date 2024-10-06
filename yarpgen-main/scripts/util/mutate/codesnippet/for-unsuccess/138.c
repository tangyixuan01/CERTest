//common_head:struct common_entry *
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
