//platform_main_end:func void;d:int;transparent_crc:func void;h:func int64_t;crc32_gentab:func void;crc32_context:uint32_t
void main()
{
  int r = 0;
  crc32_gentab();
  h();
  transparent_crc(d, "", r);
  platform_main_end(crc32_context, 0);
}

