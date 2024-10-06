//n:struct node *;h:struct head *
if (n->prev == ((void *) h))
  h->first = n->next;
else
  n->prev->next = n->next;
