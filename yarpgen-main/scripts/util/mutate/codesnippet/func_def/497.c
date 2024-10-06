//nvfx_reg:func struct nvfx_reg;nvfx_insn:func struct nvfx_insn;nvfx_src:func struct nvfx_src
struct nvfx_insn emit_test(void)
{
  const struct nvfx_src none = nvfx_src(nvfx_reg(0, 0));
  struct nvfx_insn insn;
  struct nvfx_src src[2];
  struct nvfx_reg tmp = {0, 1};
  int mask;
  int sat;
  int unit = 0;
  int ai = -1;
  int ci = -1;
  int ii = -1;
  int i;
  src[0].reg.type = 0;
  src[0].reg.index = 2;
  src[1].reg.type = 4;
  src[1].reg.index = 8;
  return nvfx_insn(0, 0x02, -1, tmp, 1 | 2, src[0], src[1], none);
}

