#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
  return x ^ ((~(~0 << n)) << (p+1-n));  
}

int main()
{
  // 0011 1000 p=4 n=2
  // invert(0x38, 4, 2) == 0010 0000 -> 0x20
  printf("%X\n", invert(0x38, 4, 2));

  return 0;
}
