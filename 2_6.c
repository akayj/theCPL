#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
  x = (x >> (p+1-n)) & ~(~0 << n);
  y = y & (~0 << n);

  return x ^ y;
}

int main(void)
{

  printf("%X\n", setbits(0x3F, 4, 2, 0x3C));

  return 0;
}
