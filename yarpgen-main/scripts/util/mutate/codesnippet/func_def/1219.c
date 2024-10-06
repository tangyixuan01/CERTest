//writeto:func void
int main()
{
  ssize_t size = 30;
  string_obj *string_obj_p = (string_obj *) malloc((sizeof(string_obj)) + size);
  fprintf(stderr, "allocated: %d B starting at %p\n", size, string_obj_p->i.s_str);
  writeto(string_obj_p->i.s_str, size);
  fprintf(stderr, "result STR(%p)=%s\n", string_obj_p->i.s_str, string_obj_p->i.s_str);
  return 0;
}

