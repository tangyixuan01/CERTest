//__bsx:unsigned int
p->f1 = (((((__bsx & 0xff000000u) >> 24) | ((__bsx & 0x00ff0000u) >> 8)) | ((__bsx & 0x0000ff00u) << 8)) | ((__bsx & 0x000000ffu) << 24)) & 0xffff;
