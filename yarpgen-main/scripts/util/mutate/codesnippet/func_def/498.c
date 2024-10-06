//sat:int;emit_test:func struct nvfx_insn
int main(void)
{
  struct nvfx_insn ins = emit_test();
  printf("sat? = %d\n", ins.sat);
}

