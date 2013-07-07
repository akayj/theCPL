#include <stdio.h>

int bitcount(unsigned x)
{
  int b;

  for (b = 0; x != 0; x >>= 1)
    if (x & 1)
      b++;
  return b;
}

int fastbitcount(unsigned x)
{
  int b;
  for (b = 0; x != 0; ++b)
    x &= x-1;
  
  return b;
}

int main()
{
  // 1000 1111
  int n = 0x8f;
  printf("%d\n", bitcount(n));
  printf("%d\n", fastbitcount(n));

  return 0;
  
}
