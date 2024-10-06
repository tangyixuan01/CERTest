//sh:int;i:int;t:vector_t;half:unsigned short [8]
t.half[7 - i] = (va->half[7 - i] << sh) | (va->half[7 - i] >> (16 - sh));
