//length:unsigned int;bytes:unsigned char;len:int;packet:packet_type *;dataoffset:unsigned;tp:tcp_hdr_type *;pad_len:unsigned long;option:options *
len = (packet->length - ((cc->option) ? (cc->option->pad_len + 20) : (20 + bytes))) - (tp->dataoffset << 2);
