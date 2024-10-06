//
void f(unsigned long incx, unsigned long incy, float * restrict dx, float * restrict dy)
{
  unsigned long ix = 0;
  unsigned long iy = 0;
  for (unsigned long i = 0; i < 512; ++i)
  {
    dy[iy] += dx[ix];
    ix += incx;
    iy += incy;
  }

}

