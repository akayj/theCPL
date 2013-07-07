#include <stdio.h>

int lower(int c)
{  
  return (c <= 'Z') && (c >= 'A') ? (c + 0x20) : c;
}

int main()
{
  char s[] = "Hello WORLD";

  int n;
  for (n = 0; s[n] != '\0'; ++n)
    putchar(lower(s[n]));
  putchar('\n');
  
  return 0;
}
