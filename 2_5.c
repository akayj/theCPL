/* pbrk.c */
#include <stdio.h>

int any(char s1[], char s2[]);

int main(void)
{
    char s1[] = "hello";
    char s2[] = "x";

    printf("location: %d\n", any(s1, s2));

    return 0;
}

// Find the first position of any chars in s1 which is from s2.
int any(char s1[], char s2[])
{
    int k, i, j;

    k = -1;
    for (i = 0; s2[i] != '\0'; ++i) {
        for (j = 0; s1[j] != '\0'; ++j)
            if (s2[i] == s1[j]) {
                k = j;
                break;
            }
        if (s1[j] != '\0')
            break;
    }
    
    return k;
}
