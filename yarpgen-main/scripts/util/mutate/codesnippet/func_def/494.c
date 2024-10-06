//unit:int;mask:int;sat:int;src:struct nvfx_src [2]
inline static struct nvfx_insn nvfx_insn(uint8_t sat, unsigned op, int unit, struct nvfx_reg dst, unsigned mask, struct nvfx_src s0, struct nvfx_src s1, struct nvfx_src s2)
{
  struct nvfx_insn insn = {.op = op, .scale = 0, .unit = unit, .sat = sat, .mask = mask, .cc_update = 0, .cc_update_reg = 0, .cc_test = 7, .cc_test_reg = 0, .cc_swz = {0, 1, 2, 3}, .dst = dst, .src = {s0, s1, s2}};
  return insn;
}

