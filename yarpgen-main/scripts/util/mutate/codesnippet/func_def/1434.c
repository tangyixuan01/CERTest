//ubasic_get_variable:func int;for_stack_ptr:int;ubasic_set_variable:func void;for_stack:struct for_state [4]
void next_statement(int var)
{
  ubasic_set_variable(var, ubasic_get_variable(var) + 1);
  if (ubasic_get_variable(var) <= for_stack[for_stack_ptr - 1].to)
  {
    jump_line(0);
  }
}

