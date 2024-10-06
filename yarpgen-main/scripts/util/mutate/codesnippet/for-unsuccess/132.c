//nb32:const size_t;i:size_t;p32:uint32_t *
for (i = 0; i < nb32; ++i, ++p32)
  *p32 = htonl(*p32);
