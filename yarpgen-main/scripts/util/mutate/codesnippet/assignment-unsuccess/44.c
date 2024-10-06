//fin:unsigned;tp:tcp_hdr_type *;del:int;syn:unsigned
del = (tp->syn || tp->fin) ? (1) : (0);
