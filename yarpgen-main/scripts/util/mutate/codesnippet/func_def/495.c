//
inline static struct nvfx_reg nvfx_reg(int type, int index)
{
  struct nvfx_reg temp = {.type = type, .index = index};
  return temp;
}

