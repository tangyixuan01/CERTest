//
void fn(unsigned char *dst_row, unsigned dst_stride, const unsigned char *src_row, unsigned src_stride, unsigned width, unsigned height)
{
  unsigned x;
  unsigned y;
  for (y = 0; y < height; y += 1)
  {
    const unsigned char *src = src_row;
    unsigned char *dst = dst_row;
    for (x = 0; x < width; x += 1)
    {
      union Pixel pixel;
      pixel.chan.r = (unsigned short) ((((unsigned) src[0]) * 0xffff) / 0xff);
      pixel.chan.g = (unsigned short) ((((unsigned) src[1]) * 0xffff) / 0xff);
      pixel.chan.b = (unsigned short) ((((unsigned) src[2]) * 0xffff) / 0xff);
      pixel.chan.a = (unsigned short) ((((unsigned) src[3]) * 0xffff) / 0xff);
      memcpy(dst, &pixel, sizeof(pixel));
      src += 4;
      dst += 8;
    }

    dst_row += dst_stride;
    src_row += src_stride / (sizeof(*src_row));
  }

}

