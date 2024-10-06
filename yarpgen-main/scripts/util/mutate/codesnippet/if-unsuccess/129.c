//foo:func float
if (!__builtin_isinf(foo(__builtin_inff(), __builtin_nanf(""))))
  __builtin_abort();
