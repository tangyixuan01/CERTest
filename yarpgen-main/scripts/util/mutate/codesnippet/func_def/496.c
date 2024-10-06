//
inline static struct nvfx_src nvfx_src(struct nvfx_reg reg)
{
  struct nvfx_src temp = {.reg = reg, .abs = 0, .negate = 0, .swz = {0, 1, 2, 3}, .indirect = 0};
  return temp;
}

