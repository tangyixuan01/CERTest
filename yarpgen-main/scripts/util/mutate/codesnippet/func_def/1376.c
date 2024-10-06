//doubleshuff:func int;dst:unsigned char [33];src:const unsigned char [33];good_output:const unsigned char [33]
int shuffle_test(void)
{
  int srcv = _mm256_loadu_si256((const int *) src);
  int expanded = doubleshuff(srcv);
  _mm256_storeu_si256((int *) dst, expanded);
  return !memcmp(dst, good_output, 32);
}

