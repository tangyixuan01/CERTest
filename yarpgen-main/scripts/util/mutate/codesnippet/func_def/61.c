//
static uint64_t safe_div_uint64_t(uint64_t ui1, uint64_t ui2)
{
  return (ui2 == 0) ? (ui1) : (ui1 / ui2);
}

