#include <stdio.h>

unsigned int rightrot(unsigned int x, int n)
{
  int len = sizeof(x) * 8;  
  return (x << n) ^ (x >> (len-n));
}

int main()
{
  // 0110 1000 0...0 n=2 -> 1010 0000 0000 ... 0001 == A0 00 00 01
  printf("%X\n", rightrot(0x68000000, 2));
  
  return 0;
}
