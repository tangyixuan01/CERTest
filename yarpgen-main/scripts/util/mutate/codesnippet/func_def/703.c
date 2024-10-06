//
struct _Unwind_Context
{
  void *ra;
} init_dwarf_reg_size_table(void)
{
  struct _Unwind_Context this_context;
  struct _Unwind_Context cur_context;
  __builtin_unwind_init();
  long offset = uw_install_context_1(&this_context, &cur_context);
  void *handler = __builtin_frob_return_addr((&cur_context)->ra);
  __builtin_eh_return(offset, handler);
}

