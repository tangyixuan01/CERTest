//lst_realloc:func void *;capacity:int;list:void **
void smartlist_ensure_capacity(smartlist_t *sl, int size)
{
  if (size > sl->capacity)
  {
    int higher = sl->capacity;
    if (size > (((int) 32) / 2))
    {
      higher = 32;
    }
    else
    {
      while (size > higher)
      {
        higher *= 2;
      }

    }
    sl->capacity = higher;
    sl->list = lst_realloc(sl->list, sl->capacity);
  }
}

