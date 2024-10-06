//for_stack:struct for_state [4];for_stack_ptr:int;ubasic_get_variable:func int
if (ubasic_get_variable(var) <= for_stack[for_stack_ptr - 1].to)
{
  jump_line(0);
}
