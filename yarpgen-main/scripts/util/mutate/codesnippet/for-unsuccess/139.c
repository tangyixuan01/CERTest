//do_something:func void;common_head:struct common_entry *;p:struct common_entry *
for (p = common_head; p; p = p->next)
  do_something(p->sym);
